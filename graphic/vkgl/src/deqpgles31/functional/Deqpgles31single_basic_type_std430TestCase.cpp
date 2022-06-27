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
#include "../ActsDeqpgles310009TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008695, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008695 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.std430.lowp_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008695 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008695 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008696, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008696 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.s"
        "ingle_basic_type.std430.mediump_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008696 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008696 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008697, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008697 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.std430.highp_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008697 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008697 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008698, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008698 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".single_basic_type.std430.lowp_vec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008698 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008698 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008699, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008699 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.s"
        "ingle_basic_type.std430.mediump_vec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008699 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008699 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008700, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008700 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.std430.highp_vec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008700 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008700 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008701, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008701 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".single_basic_type.std430.lowp_vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008701 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008701 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008702, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008702 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.s"
        "ingle_basic_type.std430.mediump_vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008702 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008702 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008703, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008703 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.std430.highp_vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008703 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008703 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008704, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008704 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".single_basic_type.std430.lowp_vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008704 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008704 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008705, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008705 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.s"
        "ingle_basic_type.std430.mediump_vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008705 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008705 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008706, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008706 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.std430.highp_vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008706 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008706 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008707, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008707 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".single_basic_type.std430.lowp_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008707 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008707 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008708, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008708 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.std430.mediump_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008708 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008708 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008709, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008709 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".single_basic_type.std430.highp_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008709 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008709 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008710, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008710 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.std430.lowp_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008710 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008710 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008711, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008711 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.s"
        "ingle_basic_type.std430.mediump_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008711 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008711 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008712, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008712 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.std430.highp_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008712 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008712 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008713, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008713 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.std430.lowp_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008713 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008713 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008714, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008714 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.s"
        "ingle_basic_type.std430.mediump_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008714 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008714 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008715, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008715 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.std430.highp_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008715 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008715 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008716, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008716 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.std430.lowp_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008716 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008716 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008717, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008717 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.s"
        "ingle_basic_type.std430.mediump_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008717 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008717 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008718, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008718 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.std430.highp_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008718 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008718 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008719, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008719 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".single_basic_type.std430.lowp_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008719 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008719 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008720, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008720 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.s"
        "ingle_basic_type.std430.mediump_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008720 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008720 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008721, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008721 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.std430.highp_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008721 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008721 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008722, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008722 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.std430.lowp_uvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008722 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008722 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008723, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008723 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.s"
        "ingle_basic_type.std430.mediump_uvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008723 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008723 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008724, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008724 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.std430.highp_uvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008724 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008724 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008725, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008725 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.std430.lowp_uvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008725 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008725 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008726, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008726 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.s"
        "ingle_basic_type.std430.mediump_uvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008726 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008726 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008727, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008727 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.std430.highp_uvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008727 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008727 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008728, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008728 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.std430.lowp_uvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008728 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008728 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008729, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008729 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.s"
        "ingle_basic_type.std430.mediump_uvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008729 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008729 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008730, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008730 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.std430.highp_uvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008730 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008730 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008731, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008731 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layo"
        "ut.single_basic_type.std430.bool",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008731 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008731 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008732, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008732 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layo"
        "ut.single_basic_type.std430.bvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008732 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008732 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008733, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008733 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layo"
        "ut.single_basic_type.std430.bvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008733 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008733 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008734, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008734 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layo"
        "ut.single_basic_type.std430.bvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008734 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008734 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008735, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008735 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".single_basic_type.std430.lowp_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008735 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008735 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008736, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008736 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.s"
        "ingle_basic_type.std430.mediump_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008736 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008736 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008737, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008737 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.std430.highp_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008737 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008737 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008738, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008738 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.sing"
        "le_basic_type.std430.row_major_lowp_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008738 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008738 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008739, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008739 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single"
        "_basic_type.std430.row_major_mediump_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008739 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008739 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008740, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008740 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.singl"
        "e_basic_type.std430.row_major_highp_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008740 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008740 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008741, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008741 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single"
        "_basic_type.std430.column_major_lowp_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008741 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008741 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008742, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008742 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_"
        "basic_type.std430.column_major_mediump_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008742 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008742 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008743, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008743 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single"
        "_basic_type.std430.column_major_highp_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008743 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008743 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008744, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008744 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".single_basic_type.std430.lowp_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008744 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008744 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008745, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008745 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.s"
        "ingle_basic_type.std430.mediump_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008745 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008745 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008746, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008746 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.std430.highp_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008746 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008746 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008747, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008747 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.sing"
        "le_basic_type.std430.row_major_lowp_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008747 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008747 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008748, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008748 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single"
        "_basic_type.std430.row_major_mediump_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008748 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008748 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008749, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008749 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.singl"
        "e_basic_type.std430.row_major_highp_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008749 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008749 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008750, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008750 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single"
        "_basic_type.std430.column_major_lowp_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008750 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008750 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008751, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008751 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_"
        "basic_type.std430.column_major_mediump_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008751 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008751 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008752, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008752 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single"
        "_basic_type.std430.column_major_highp_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008752 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008752 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008753, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008753 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".single_basic_type.std430.lowp_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008753 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008753 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008754, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008754 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.s"
        "ingle_basic_type.std430.mediump_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008754 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008754 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008755, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008755 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.std430.highp_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008755 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008755 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008756, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008756 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.sing"
        "le_basic_type.std430.row_major_lowp_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008756 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008756 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008757, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008757 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single"
        "_basic_type.std430.row_major_mediump_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008757 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008757 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008758, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008758 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.singl"
        "e_basic_type.std430.row_major_highp_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008758 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008758 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008759, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008759 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single"
        "_basic_type.std430.column_major_lowp_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008759 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008759 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008760, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008760 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_"
        "basic_type.std430.column_major_mediump_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008760 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008760 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008761, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008761 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single"
        "_basic_type.std430.column_major_highp_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008761 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008761 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008762, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008762 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.std430.lowp_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008762 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008762 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008763, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008763 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.si"
        "ngle_basic_type.std430.mediump_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008763 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008763 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008764, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008764 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.s"
        "ingle_basic_type.std430.highp_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008764 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008764 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008765, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008765 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.singl"
        "e_basic_type.std430.row_major_lowp_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008765 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008765 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008766, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008766 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_"
        "basic_type.std430.row_major_mediump_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008766 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008766 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008767, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008767 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single"
        "_basic_type.std430.row_major_highp_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008767 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008767 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008768, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008768 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_"
        "basic_type.std430.column_major_lowp_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008768 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008768 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008769, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008769 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_b"
        "asic_type.std430.column_major_mediump_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008769 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008769 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008770, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008770 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_"
        "basic_type.std430.column_major_highp_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008770 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008770 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008771, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008771 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.std430.lowp_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008771 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008771 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008772, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008772 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.si"
        "ngle_basic_type.std430.mediump_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008772 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008772 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008773, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008773 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.s"
        "ingle_basic_type.std430.highp_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008773 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008773 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008774, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008774 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.singl"
        "e_basic_type.std430.row_major_lowp_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008774 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008774 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008775, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008775 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_"
        "basic_type.std430.row_major_mediump_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008775 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008775 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008776, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008776 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single"
        "_basic_type.std430.row_major_highp_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008776 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008776 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008777, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008777 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_"
        "basic_type.std430.column_major_lowp_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008777 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008777 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008778, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008778 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_b"
        "asic_type.std430.column_major_mediump_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008778 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008778 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008779, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008779 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_"
        "basic_type.std430.column_major_highp_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008779 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008779 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008780, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008780 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.std430.lowp_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008780 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008780 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008781, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008781 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.si"
        "ngle_basic_type.std430.mediump_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008781 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008781 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008782, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008782 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.s"
        "ingle_basic_type.std430.highp_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008782 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008782 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008783, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008783 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.singl"
        "e_basic_type.std430.row_major_lowp_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008783 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008783 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008784, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008784 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_"
        "basic_type.std430.row_major_mediump_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008784 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008784 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008785, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008785 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single"
        "_basic_type.std430.row_major_highp_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008785 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008785 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008786, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008786 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_"
        "basic_type.std430.column_major_lowp_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008786 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008786 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008787, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008787 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_b"
        "asic_type.std430.column_major_mediump_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008787 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008787 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008788, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008788 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_"
        "basic_type.std430.column_major_highp_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008788 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008788 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008789, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008789 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.std430.lowp_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008789 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008789 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008790, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008790 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.si"
        "ngle_basic_type.std430.mediump_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008790 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008790 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008791, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008791 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.s"
        "ingle_basic_type.std430.highp_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008791 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008791 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008792, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008792 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.singl"
        "e_basic_type.std430.row_major_lowp_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008792 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008792 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008793, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008793 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_"
        "basic_type.std430.row_major_mediump_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008793 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008793 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008794, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008794 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single"
        "_basic_type.std430.row_major_highp_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008794 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008794 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008795, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008795 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_"
        "basic_type.std430.column_major_lowp_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008795 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008795 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008796, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008796 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_b"
        "asic_type.std430.column_major_mediump_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008796 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008796 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008797, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008797 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_"
        "basic_type.std430.column_major_highp_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008797 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008797 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008798, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008798 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.std430.lowp_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008798 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008798 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008799, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008799 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.si"
        "ngle_basic_type.std430.mediump_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008799 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008799 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008800, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008800 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.s"
        "ingle_basic_type.std430.highp_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008800 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008800 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008801, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008801 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.singl"
        "e_basic_type.std430.row_major_lowp_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008801 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008801 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008802, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008802 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_"
        "basic_type.std430.row_major_mediump_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008802 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008802 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008803, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008803 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single"
        "_basic_type.std430.row_major_highp_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008803 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008803 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008804, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008804 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_"
        "basic_type.std430.column_major_lowp_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008804 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008804 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008805, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008805 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_b"
        "asic_type.std430.column_major_mediump_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008805 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008805 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008806, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008806 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_"
        "basic_type.std430.column_major_highp_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008806 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008806 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008807, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008807 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.std430.lowp_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008807 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008807 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008808, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008808 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.si"
        "ngle_basic_type.std430.mediump_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008808 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008808 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008809, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008809 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.s"
        "ingle_basic_type.std430.highp_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008809 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008809 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008810, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008810 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.singl"
        "e_basic_type.std430.row_major_lowp_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008810 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008810 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008811, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008811 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_"
        "basic_type.std430.row_major_mediump_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008811 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008811 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008812, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008812 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single"
        "_basic_type.std430.row_major_highp_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008812 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008812 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008813, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008813 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_"
        "basic_type.std430.column_major_lowp_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008813 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008813 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008814, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008814 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_b"
        "asic_type.std430.column_major_mediump_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008814 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008814 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008815, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008815 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_"
        "basic_type.std430.column_major_highp_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008815 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008815 end";
}
