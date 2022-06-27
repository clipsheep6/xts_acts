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

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034247, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034247 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.packed.lowp_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034247 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034247 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034248, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034248 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.packed.lowp_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034248 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034248 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034249, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034249 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.packed.mediump_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034249 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034249 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034250, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034250 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.packed.mediump_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034250 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034250 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034251, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034251 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.packed.highp_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034251 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034251 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034252, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034252 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.packed.highp_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034252 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034252 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034253, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034253 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_type.packed.lowp_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034253 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034253 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034254, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034254 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.packed.lowp_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034254 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034254 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034255, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034255 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.packed.mediump_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034255 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034255 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034256, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034256 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.packed.mediump_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034256 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034256 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034257, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034257 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.packed.highp_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034257 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034257 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034258, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034258 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.packed.highp_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034258 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034258 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034259, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034259 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_type.packed.lowp_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034259 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034259 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034260, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034260 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.packed.lowp_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034260 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034260 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034261, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034261 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.packed.mediump_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034261 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034261 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034262, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034262 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.packed.mediump_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034262 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034262 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034263, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034263 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.packed.highp_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034263 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034263 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034264, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034264 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.packed.highp_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034264 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034264 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034265, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034265 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_type.packed.lowp_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034265 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034265 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034266, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034266 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.packed.lowp_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034266 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034266 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034267, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034267 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.packed.mediump_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034267 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034267 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034268, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034268 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.packed.mediump_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034268 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034268 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034269, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034269 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.packed.highp_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034269 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034269 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034270, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034270 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.packed.highp_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034270 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034270 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034271, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034271 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_type.packed.lowp_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034271 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034271 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034272, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034272 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.packed.lowp_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034272 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034272 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034273, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034273 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.packed.mediump_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034273 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034273 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034274, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034274 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.packed.mediump_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034274 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034274 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034275, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034275 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_type.packed.highp_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034275 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034275 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034276, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034276 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.packed.highp_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034276 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034276 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034277, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034277 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.packed.lowp_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034277 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034277 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034278, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034278 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.packed.lowp_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034278 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034278 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034279, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034279 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.packed.mediump_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034279 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034279 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034280, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034280 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.packed.mediump_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034280 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034280 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034281, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034281 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.packed.highp_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034281 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034281 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034282, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034282 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.packed.highp_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034282 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034282 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034283, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034283 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.packed.lowp_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034283 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034283 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034284, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034284 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.packed.lowp_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034284 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034284 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034285, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034285 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.packed.mediump_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034285 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034285 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034286, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034286 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.packed.mediump_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034286 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034286 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034287, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034287 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.packed.highp_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034287 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034287 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034288, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034288 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.packed.highp_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034288 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034288 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034289, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034289 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.packed.lowp_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034289 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034289 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034290, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034290 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.packed.lowp_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034290 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034290 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034291, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034291 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.packed.mediump_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034291 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034291 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034292, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034292 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.packed.mediump_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034292 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034292 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034293, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034293 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.packed.highp_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034293 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034293 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034294, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034294 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.packed.highp_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034294 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034294 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034295, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034295 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_type.packed.lowp_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034295 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034295 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034296, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034296 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.packed.lowp_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034296 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034296 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034297, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034297 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.packed.mediump_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034297 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034297 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034298, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034298 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.packed.mediump_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034298 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034298 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034299, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034299 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.packed.highp_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034299 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034299 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034300, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034300 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.packed.highp_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034300 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034300 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034301, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034301 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.packed.lowp_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034301 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034301 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034302, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034302 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.packed.lowp_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034302 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034302 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034303, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034303 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.packed.mediump_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034303 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034303 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034304, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034304 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.packed.mediump_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034304 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034304 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034305, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034305 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.packed.highp_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034305 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034305 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034306, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034306 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.packed.highp_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034306 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034306 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034307, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034307 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.packed.lowp_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034307 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034307 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034308, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034308 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.packed.lowp_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034308 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034308 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034309, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034309 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.packed.mediump_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034309 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034309 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034310, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034310 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.packed.mediump_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034310 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034310 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034311, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034311 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.packed.highp_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034311 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034311 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034312, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034312 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.packed.highp_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034312 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034312 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034313, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034313 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.packed.lowp_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034313 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034313 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034314, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034314 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.packed.lowp_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034314 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034314 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034315, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034315 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.packed.mediump_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034315 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034315 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034316, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034316 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.packed.mediump_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034316 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034316 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034317, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034317 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.packed.highp_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034317 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034317 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034318, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034318 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.packed.highp_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034318 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034318 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034319, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034319 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_type.packed.bool_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034319 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034319 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034320, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034320 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_type.packed.bool_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034320 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034320 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034321, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034321 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_type.packed.bvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034321 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034321 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034322, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034322 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_type.packed.bvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034322 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034322 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034323, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034323 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_type.packed.bvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034323 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034323 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034324, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034324 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_type.packed.bvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034324 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034324 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034325, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034325 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_type.packed.bvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034325 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034325 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034326, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034326 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_type.packed.bvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034326 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034326 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034327, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034327 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_type.packed.lowp_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034327 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034327 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034328, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034328 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.packed.lowp_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034328 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034328 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034329, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034329 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.packed.mediump_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034329 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034329 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034330, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034330 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.packed.mediump_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034330 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034330 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034331, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034331 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.packed.highp_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034331 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034331 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034332, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034332 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.packed.highp_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034332 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034332 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034333, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034333 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic"
        "_type.packed.row_major_lowp_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034333 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034333 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034334, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034334 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "type.packed.row_major_lowp_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034334 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034334 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034335, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034335 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.packed.row_major_mediump_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034335 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034335 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034336, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034336 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.packed.row_major_mediump_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034336 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034336 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034337, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034337 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "type.packed.row_major_highp_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034337 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034337 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034338, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034338 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.packed.row_major_highp_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034338 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034338 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034339, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034339 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.packed.column_major_lowp_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034339 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034339 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034340, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034340 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.packed.column_major_lowp_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034340 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034340 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034341, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034341 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.packed.column_major_mediump_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034341 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034341 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034342, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034342 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.packed.column_major_mediump_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034342 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034342 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034343, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034343 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.packed.column_major_highp_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034343 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034343 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034344, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034344 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.packed.column_major_highp_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034344 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034344 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034345, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034345 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_type.packed.lowp_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034345 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034345 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034346, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034346 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.packed.lowp_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034346 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034346 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034347, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034347 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.packed.mediump_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034347 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034347 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034348, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034348 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.packed.mediump_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034348 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034348 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034349, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034349 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.packed.highp_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034349 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034349 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034350, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034350 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.packed.highp_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034350 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034350 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034351, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034351 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic"
        "_type.packed.row_major_lowp_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034351 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034351 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034352, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034352 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "type.packed.row_major_lowp_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034352 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034352 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034353, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034353 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.packed.row_major_mediump_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034353 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034353 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034354, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034354 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.packed.row_major_mediump_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034354 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034354 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034355, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034355 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "type.packed.row_major_highp_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034355 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034355 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034356, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034356 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.packed.row_major_highp_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034356 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034356 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034357, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034357 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.packed.column_major_lowp_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034357 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034357 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034358, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034358 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.packed.column_major_lowp_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034358 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034358 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034359, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034359 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.packed.column_major_mediump_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034359 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034359 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034360, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034360 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.packed.column_major_mediump_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034360 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034360 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034361, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034361 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.packed.column_major_highp_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034361 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034361 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034362, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034362 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.packed.column_major_highp_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034362 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034362 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034363, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034363 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_type.packed.lowp_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034363 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034363 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034364, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034364 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.packed.lowp_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034364 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034364 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034365, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034365 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.packed.mediump_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034365 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034365 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034366, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034366 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.packed.mediump_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034366 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034366 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034367, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034367 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.packed.highp_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034367 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034367 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034368, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034368 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.packed.highp_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034368 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034368 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034369, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034369 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic"
        "_type.packed.row_major_lowp_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034369 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034369 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034370, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034370 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "type.packed.row_major_lowp_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034370 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034370 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034371, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034371 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.packed.row_major_mediump_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034371 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034371 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034372, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034372 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.packed.row_major_mediump_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034372 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034372 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034373, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034373 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "type.packed.row_major_highp_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034373 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034373 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034374, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034374 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.packed.row_major_highp_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034374 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034374 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034375, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034375 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.packed.column_major_lowp_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034375 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034375 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034376, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034376 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.packed.column_major_lowp_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034376 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034376 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034377, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034377 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.packed.column_major_mediump_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034377 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034377 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034378, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034378 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.packed.column_major_mediump_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034378 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034378 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034379, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034379 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.packed.column_major_highp_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034379 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034379 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034380, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034380 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.packed.column_major_highp_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034380 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034380 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034381, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034381 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.packed.lowp_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034381 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034381 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034382, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034382 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.packed.lowp_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034382 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034382 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034383, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034383 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.packed.mediump_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034383 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034383 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034384, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034384 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basi"
        "c_type.packed.mediump_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034384 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034384 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034385, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034385 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.packed.highp_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034385 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034385 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034386, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034386 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.packed.highp_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034386 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034386 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034387, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034387 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "type.packed.row_major_lowp_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034387 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034387 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034388, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034388 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.packed.row_major_lowp_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034388 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034388 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034389, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034389 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.packed.row_major_mediump_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034389 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034389 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034390, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034390 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.packed.row_major_mediump_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034390 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034390 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034391, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034391 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.packed.row_major_highp_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034391 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034391 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034392, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034392 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.packed.row_major_highp_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034392 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034392 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034393, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034393 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.packed.column_major_lowp_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034393 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034393 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034394, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034394 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.packed.column_major_lowp_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034394 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034394 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034395, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034395 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.packed.column_major_mediump_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034395 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034395 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034396, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034396 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_type"
        ".packed.column_major_mediump_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034396 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034396 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034397, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034397 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.packed.column_major_highp_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034397 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034397 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034398, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034398 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.packed.column_major_highp_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034398 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034398 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034399, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034399 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.packed.lowp_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034399 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034399 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034400, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034400 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.packed.lowp_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034400 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034400 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034401, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034401 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.packed.mediump_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034401 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034401 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034402, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034402 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basi"
        "c_type.packed.mediump_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034402 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034402 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034403, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034403 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.packed.highp_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034403 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034403 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034404, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034404 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.packed.highp_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034404 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034404 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034405, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034405 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "type.packed.row_major_lowp_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034405 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034405 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034406, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034406 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.packed.row_major_lowp_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034406 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034406 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034407, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034407 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.packed.row_major_mediump_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034407 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034407 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034408, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034408 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.packed.row_major_mediump_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034408 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034408 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034409, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034409 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.packed.row_major_highp_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034409 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034409 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034410, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034410 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.packed.row_major_highp_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034410 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034410 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034411, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034411 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.packed.column_major_lowp_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034411 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034411 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034412, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034412 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.packed.column_major_lowp_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034412 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034412 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034413, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034413 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.packed.column_major_mediump_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034413 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034413 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034414, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034414 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_type"
        ".packed.column_major_mediump_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034414 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034414 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034415, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034415 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.packed.column_major_highp_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034415 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034415 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034416, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034416 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.packed.column_major_highp_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034416 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034416 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034417, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034417 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.packed.lowp_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034417 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034417 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034418, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034418 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.packed.lowp_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034418 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034418 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034419, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034419 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.packed.mediump_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034419 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034419 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034420, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034420 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basi"
        "c_type.packed.mediump_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034420 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034420 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034421, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034421 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.packed.highp_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034421 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034421 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034422, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034422 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.packed.highp_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034422 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034422 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034423, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034423 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "type.packed.row_major_lowp_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034423 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034423 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034424, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034424 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.packed.row_major_lowp_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034424 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034424 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034425, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034425 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.packed.row_major_mediump_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034425 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034425 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034426, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034426 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.packed.row_major_mediump_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034426 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034426 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034427, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034427 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.packed.row_major_highp_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034427 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034427 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034428, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034428 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.packed.row_major_highp_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034428 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034428 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034429, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034429 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.packed.column_major_lowp_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034429 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034429 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034430, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034430 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.packed.column_major_lowp_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034430 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034430 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034431, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034431 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.packed.column_major_mediump_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034431 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034431 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034432, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034432 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_type"
        ".packed.column_major_mediump_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034432 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034432 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034433, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034433 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.packed.column_major_highp_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034433 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034433 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034434, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034434 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.packed.column_major_highp_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034434 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034434 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034435, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034435 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.packed.lowp_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034435 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034435 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034436, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034436 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.packed.lowp_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034436 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034436 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034437, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034437 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.packed.mediump_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034437 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034437 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034438, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034438 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basi"
        "c_type.packed.mediump_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034438 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034438 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034439, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034439 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.packed.highp_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034439 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034439 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034440, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034440 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.packed.highp_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034440 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034440 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034441, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034441 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "type.packed.row_major_lowp_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034441 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034441 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034442, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034442 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.packed.row_major_lowp_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034442 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034442 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034443, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034443 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.packed.row_major_mediump_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034443 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034443 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034444, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034444 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.packed.row_major_mediump_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034444 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034444 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034445, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034445 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.packed.row_major_highp_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034445 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034445 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034446, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034446 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.packed.row_major_highp_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034446 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034446 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034447, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034447 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.packed.column_major_lowp_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034447 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034447 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034448, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034448 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.packed.column_major_lowp_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034448 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034448 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034449, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034449 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.packed.column_major_mediump_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034449 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034449 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034450, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034450 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_type"
        ".packed.column_major_mediump_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034450 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034450 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034451, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034451 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.packed.column_major_highp_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034451 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034451 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034452, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034452 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.packed.column_major_highp_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034452 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034452 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034453, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034453 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.packed.lowp_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034453 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034453 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034454, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034454 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.packed.lowp_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034454 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034454 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034455, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034455 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.packed.mediump_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034455 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034455 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034456, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034456 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basi"
        "c_type.packed.mediump_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034456 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034456 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034457, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034457 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.packed.highp_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034457 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034457 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034458, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034458 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.packed.highp_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034458 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034458 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034459, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034459 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "type.packed.row_major_lowp_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034459 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034459 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034460, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034460 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.packed.row_major_lowp_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034460 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034460 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034461, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034461 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.packed.row_major_mediump_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034461 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034461 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034462, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034462 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.packed.row_major_mediump_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034462 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034462 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034463, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034463 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.packed.row_major_highp_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034463 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034463 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034464, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034464 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.packed.row_major_highp_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034464 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034464 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034465, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034465 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.packed.column_major_lowp_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034465 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034465 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034466, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034466 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.packed.column_major_lowp_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034466 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034466 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034467, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034467 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.packed.column_major_mediump_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034467 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034467 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034468, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034468 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_type"
        ".packed.column_major_mediump_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034468 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034468 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034469, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034469 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.packed.column_major_highp_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034469 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034469 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034470, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034470 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.packed.column_major_highp_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034470 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034470 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034471, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034471 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.packed.lowp_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034471 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034471 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034472, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034472 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.packed.lowp_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034472 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034472 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034473, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034473 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.packed.mediump_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034473 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034473 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034474, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034474 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basi"
        "c_type.packed.mediump_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034474 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034474 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034475, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034475 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.packed.highp_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034475 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034475 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034476, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034476 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.packed.highp_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034476 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034476 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034477, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034477 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "type.packed.row_major_lowp_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034477 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034477 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034478, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034478 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.packed.row_major_lowp_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034478 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034478 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034479, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034479 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.packed.row_major_mediump_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034479 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034479 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034480, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034480 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.packed.row_major_mediump_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034480 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034480 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034481, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034481 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.packed.row_major_highp_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034481 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034481 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034482, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034482 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.packed.row_major_highp_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034482 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034482 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034483, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034483 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.packed.column_major_lowp_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034483 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034483 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034484, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034484 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.packed.column_major_lowp_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034484 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034484 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034485, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034485 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.packed.column_major_mediump_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034485 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034485 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034486, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034486 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_type"
        ".packed.column_major_mediump_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034486 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034486 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034487, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034487 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.packed.column_major_highp_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034487 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034487 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034488, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034488 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.packed.column_major_highp_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034488 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034488 end";
}
