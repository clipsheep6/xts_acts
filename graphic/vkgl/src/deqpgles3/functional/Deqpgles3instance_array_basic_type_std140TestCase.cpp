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
#include "../ActsDeqpgles30036TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035699, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035699 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_"
        "array_basic_type.std140.float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035699 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035699 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035700, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035700 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_a"
        "rray_basic_type.std140.float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035700 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035700 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035701, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035701 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance"
        "_array_basic_type.std140.float_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035701 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035701 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035702, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035702 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_"
        "array_basic_type.std140.vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035702 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035702 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035703, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035703 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_a"
        "rray_basic_type.std140.vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035703 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035703 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035704, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035704 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance"
        "_array_basic_type.std140.vec2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035704 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035704 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035705, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035705 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_"
        "array_basic_type.std140.vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035705 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035705 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035706, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035706 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_a"
        "rray_basic_type.std140.vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035706 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035706 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035707, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035707 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance"
        "_array_basic_type.std140.vec3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035707 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035707 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035708, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035708 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_"
        "array_basic_type.std140.vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035708 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035708 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035709, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035709 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_a"
        "rray_basic_type.std140.vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035709 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035709 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035710, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035710 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance"
        "_array_basic_type.std140.vec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035710 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035710 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035711, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035711 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance"
        "_array_basic_type.std140.int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035711 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035711 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035712, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035712 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_"
        "array_basic_type.std140.int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035712 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035712 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035713, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035713 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instanc"
        "e_array_basic_type.std140.int_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035713 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035713 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035714, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035714 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_"
        "array_basic_type.std140.ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035714 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035714 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035715, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035715 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_a"
        "rray_basic_type.std140.ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035715 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035715 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035716, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035716 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance"
        "_array_basic_type.std140.ivec2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035716 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035716 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035717, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035717 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_"
        "array_basic_type.std140.ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035717 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035717 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035718, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035718 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_a"
        "rray_basic_type.std140.ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035718 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035718 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035719, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035719 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance"
        "_array_basic_type.std140.ivec3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035719 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035719 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035720, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035720 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_"
        "array_basic_type.std140.ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035720 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035720 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035721, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035721 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_a"
        "rray_basic_type.std140.ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035721 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035721 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035722, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035722 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance"
        "_array_basic_type.std140.ivec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035722 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035722 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035723, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035723 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_"
        "array_basic_type.std140.uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035723 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035723 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035724, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035724 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_a"
        "rray_basic_type.std140.uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035724 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035724 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035725, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035725 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance"
        "_array_basic_type.std140.uint_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035725 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035725 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035726, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035726 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_"
        "array_basic_type.std140.uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035726 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035726 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035727, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035727 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_a"
        "rray_basic_type.std140.uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035727 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035727 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035728, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035728 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance"
        "_array_basic_type.std140.uvec2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035728 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035728 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035729, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035729 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_"
        "array_basic_type.std140.uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035729 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035729 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035730, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035730 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_a"
        "rray_basic_type.std140.uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035730 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035730 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035731, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035731 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance"
        "_array_basic_type.std140.uvec3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035731 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035731 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035732, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035732 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_"
        "array_basic_type.std140.uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035732 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035732 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035733, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035733 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_a"
        "rray_basic_type.std140.uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035733 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035733 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035734, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035734 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance"
        "_array_basic_type.std140.uvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035734 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035734 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035735, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035735 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_"
        "array_basic_type.std140.bool_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035735 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035735 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035736, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035736 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_a"
        "rray_basic_type.std140.bool_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035736 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035736 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035737, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035737 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance"
        "_array_basic_type.std140.bool_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035737 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035737 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035738, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035738 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_"
        "array_basic_type.std140.bvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035738 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035738 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035739, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035739 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_a"
        "rray_basic_type.std140.bvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035739 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035739 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035740, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035740 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance"
        "_array_basic_type.std140.bvec2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035740 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035740 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035741, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035741 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_"
        "array_basic_type.std140.bvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035741 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035741 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035742, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035742 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_a"
        "rray_basic_type.std140.bvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035742 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035742 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035743, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035743 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance"
        "_array_basic_type.std140.bvec3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035743 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035743 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035744, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035744 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_"
        "array_basic_type.std140.bvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035744 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035744 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035745, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035745 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_a"
        "rray_basic_type.std140.bvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035745 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035745 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035746, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035746 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance"
        "_array_basic_type.std140.bvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035746 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035746 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035747, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035747 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_"
        "array_basic_type.std140.mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035747 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035747 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035748, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035748 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_a"
        "rray_basic_type.std140.mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035748 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035748 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035749, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035749 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance"
        "_array_basic_type.std140.mat2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035749 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035749 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035750, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035750 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array"
        "_basic_type.std140.row_major_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035750 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035750 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035751, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035751 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array_"
        "basic_type.std140.row_major_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035751 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035751 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035752, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035752 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_arra"
        "y_basic_type.std140.row_major_mat2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035752 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035752 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035753, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035753 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array_"
        "basic_type.std140.column_major_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035753 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035753 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035754, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035754 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array_b"
        "asic_type.std140.column_major_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035754 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035754 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035755, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035755 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array"
        "_basic_type.std140.column_major_mat2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035755 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035755 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035756, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035756 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_"
        "array_basic_type.std140.mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035756 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035756 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035757, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035757 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_a"
        "rray_basic_type.std140.mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035757 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035757 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035758, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035758 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance"
        "_array_basic_type.std140.mat3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035758 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035758 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035759, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035759 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array"
        "_basic_type.std140.row_major_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035759 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035759 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035760, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035760 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array_"
        "basic_type.std140.row_major_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035760 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035760 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035761, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035761 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_arra"
        "y_basic_type.std140.row_major_mat3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035761 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035761 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035762, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035762 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array_"
        "basic_type.std140.column_major_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035762 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035762 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035763, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035763 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array_b"
        "asic_type.std140.column_major_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035763 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035763 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035764, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035764 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array"
        "_basic_type.std140.column_major_mat3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035764 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035764 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035765, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035765 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_"
        "array_basic_type.std140.mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035765 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035765 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035766, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035766 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_a"
        "rray_basic_type.std140.mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035766 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035766 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035767, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035767 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance"
        "_array_basic_type.std140.mat4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035767 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035767 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035768, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035768 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array"
        "_basic_type.std140.row_major_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035768 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035768 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035769, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035769 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array_"
        "basic_type.std140.row_major_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035769 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035769 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035770, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035770 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_arra"
        "y_basic_type.std140.row_major_mat4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035770 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035770 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035771, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035771 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array_"
        "basic_type.std140.column_major_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035771 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035771 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035772, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035772 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array_b"
        "asic_type.std140.column_major_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035772 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035772 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035773, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035773 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array"
        "_basic_type.std140.column_major_mat4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035773 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035773 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035774, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035774 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_a"
        "rray_basic_type.std140.mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035774 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035774 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035775, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035775 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_ar"
        "ray_basic_type.std140.mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035775 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035775 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035776, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035776 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_"
        "array_basic_type.std140.mat2x3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035776 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035776 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035777, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035777 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array_"
        "basic_type.std140.row_major_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035777 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035777 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035778, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035778 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array_b"
        "asic_type.std140.row_major_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035778 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035778 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035779, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035779 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array"
        "_basic_type.std140.row_major_mat2x3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035779 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035779 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035780, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035780 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array_b"
        "asic_type.std140.column_major_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035780 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035780 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035781, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035781 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array_ba"
        "sic_type.std140.column_major_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035781 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035781 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035782, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035782 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array_"
        "basic_type.std140.column_major_mat2x3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035782 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035782 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035783, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035783 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_a"
        "rray_basic_type.std140.mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035783 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035783 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035784, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035784 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_ar"
        "ray_basic_type.std140.mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035784 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035784 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035785, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035785 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_"
        "array_basic_type.std140.mat2x4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035785 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035785 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035786, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035786 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array_"
        "basic_type.std140.row_major_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035786 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035786 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035787, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035787 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array_b"
        "asic_type.std140.row_major_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035787 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035787 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035788, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035788 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array"
        "_basic_type.std140.row_major_mat2x4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035788 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035788 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035789, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035789 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array_b"
        "asic_type.std140.column_major_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035789 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035789 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035790, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035790 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array_ba"
        "sic_type.std140.column_major_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035790 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035790 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035791, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035791 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array_"
        "basic_type.std140.column_major_mat2x4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035791 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035791 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035792, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035792 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_a"
        "rray_basic_type.std140.mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035792 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035792 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035793, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035793 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_ar"
        "ray_basic_type.std140.mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035793 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035793 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035794, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035794 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_"
        "array_basic_type.std140.mat3x2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035794 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035794 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035795, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035795 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array_"
        "basic_type.std140.row_major_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035795 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035795 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035796, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035796 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array_b"
        "asic_type.std140.row_major_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035796 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035796 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035797, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035797 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array"
        "_basic_type.std140.row_major_mat3x2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035797 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035797 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035798, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035798 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array_b"
        "asic_type.std140.column_major_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035798 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035798 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035799, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035799 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array_ba"
        "sic_type.std140.column_major_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035799 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035799 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035800, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035800 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array_"
        "basic_type.std140.column_major_mat3x2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035800 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035800 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035801, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035801 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_a"
        "rray_basic_type.std140.mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035801 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035801 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035802, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035802 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_ar"
        "ray_basic_type.std140.mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035802 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035802 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035803, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035803 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_"
        "array_basic_type.std140.mat3x4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035803 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035803 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035804, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035804 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array_"
        "basic_type.std140.row_major_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035804 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035804 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035805, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035805 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array_b"
        "asic_type.std140.row_major_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035805 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035805 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035806, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035806 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array"
        "_basic_type.std140.row_major_mat3x4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035806 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035806 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035807, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035807 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array_b"
        "asic_type.std140.column_major_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035807 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035807 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035808, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035808 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array_ba"
        "sic_type.std140.column_major_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035808 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035808 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035809, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035809 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array_"
        "basic_type.std140.column_major_mat3x4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035809 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035809 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035810, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035810 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_a"
        "rray_basic_type.std140.mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035810 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035810 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035811, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035811 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_ar"
        "ray_basic_type.std140.mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035811 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035811 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035812, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035812 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_"
        "array_basic_type.std140.mat4x2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035812 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035812 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035813, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035813 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array_"
        "basic_type.std140.row_major_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035813 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035813 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035814, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035814 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array_b"
        "asic_type.std140.row_major_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035814 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035814 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035815, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035815 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array"
        "_basic_type.std140.row_major_mat4x2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035815 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035815 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035816, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035816 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array_b"
        "asic_type.std140.column_major_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035816 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035816 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035817, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035817 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array_ba"
        "sic_type.std140.column_major_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035817 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035817 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035818, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035818 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array_"
        "basic_type.std140.column_major_mat4x2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035818 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035818 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035819, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035819 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_a"
        "rray_basic_type.std140.mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035819 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035819 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035820, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035820 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_ar"
        "ray_basic_type.std140.mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035820 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035820 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035821, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035821 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_"
        "array_basic_type.std140.mat4x3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035821 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035821 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035822, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035822 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array_"
        "basic_type.std140.row_major_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035822 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035822 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035823, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035823 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array_b"
        "asic_type.std140.row_major_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035823 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035823 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035824, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035824 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array"
        "_basic_type.std140.row_major_mat4x3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035824 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035824 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035825, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035825 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array_b"
        "asic_type.std140.column_major_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035825 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035825 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035826, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035826 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array_ba"
        "sic_type.std140.column_major_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035826 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035826 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035827, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035827 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.instance_array_"
        "basic_type.std140.column_major_mat4x3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035827 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035827 end";
}
