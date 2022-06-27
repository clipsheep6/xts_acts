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
#include "../ActsDeqpgles30013TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012150, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012150 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.angle_"
        "and_trigonometry.radians.mediump_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012150 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012150 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012151, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012151 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.angle_a"
        "nd_trigonometry.radians.mediump_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012151 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012151 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012152, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012152 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.angle"
        "_and_trigonometry.radians.highp_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012152 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012152 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012153, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012153 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.angle_"
        "and_trigonometry.radians.highp_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012153 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012153 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012154, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012154 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.angle"
        "_and_trigonometry.radians.mediump_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012154 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012154 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012155, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012155 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.angle_"
        "and_trigonometry.radians.mediump_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012155 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012155 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012156, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012156 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.angl"
        "e_and_trigonometry.radians.highp_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012156 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012156 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012157, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012157 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.angle"
        "_and_trigonometry.radians.highp_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012157 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012157 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012158, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012158 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.angle"
        "_and_trigonometry.radians.mediump_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012158 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012158 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012159, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012159 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.angle_"
        "and_trigonometry.radians.mediump_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012159 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012159 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012160, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012160 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.angl"
        "e_and_trigonometry.radians.highp_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012160 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012160 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012161, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012161 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.angle"
        "_and_trigonometry.radians.highp_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012161 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012161 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012162, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012162 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.angle"
        "_and_trigonometry.radians.mediump_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012162 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012162 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012163, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012163 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.angle_"
        "and_trigonometry.radians.mediump_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012163 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012163 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012164, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012164 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.angl"
        "e_and_trigonometry.radians.highp_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012164 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012164 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012165, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012165 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.angle"
        "_and_trigonometry.radians.highp_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012165 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012165 end";
}
