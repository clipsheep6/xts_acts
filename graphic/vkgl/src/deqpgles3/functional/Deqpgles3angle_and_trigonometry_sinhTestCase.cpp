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

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012318, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012318 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.angl"
        "e_and_trigonometry.sinh.mediump_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012318 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012318 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012319, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012319 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.angle"
        "_and_trigonometry.sinh.mediump_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012319 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012319 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012320, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012320 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.ang"
        "le_and_trigonometry.sinh.highp_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012320 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012320 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012321, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012321 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.angl"
        "e_and_trigonometry.sinh.highp_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012321 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012321 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012322, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012322 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.angl"
        "e_and_trigonometry.sinh.mediump_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012322 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012322 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012323, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012323 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.angle"
        "_and_trigonometry.sinh.mediump_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012323 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012323 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012324, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012324 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.ang"
        "le_and_trigonometry.sinh.highp_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012324 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012324 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012325, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012325 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.angl"
        "e_and_trigonometry.sinh.highp_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012325 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012325 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012326, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012326 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.angl"
        "e_and_trigonometry.sinh.mediump_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012326 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012326 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012327, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012327 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.angle"
        "_and_trigonometry.sinh.mediump_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012327 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012327 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012328, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012328 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.ang"
        "le_and_trigonometry.sinh.highp_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012328 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012328 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012329, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012329 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.angl"
        "e_and_trigonometry.sinh.highp_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012329 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012329 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012330, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012330 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.angl"
        "e_and_trigonometry.sinh.mediump_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012330 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012330 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012331, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012331 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.angle"
        "_and_trigonometry.sinh.mediump_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012331 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012331 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012332, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012332 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.ang"
        "le_and_trigonometry.sinh.highp_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012332 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012332 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012333, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012333 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.angl"
        "e_and_trigonometry.sinh.highp_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012333 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012333 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012334, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012334 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.ang"
        "le_and_trigonometry.sinh.lowp_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012334 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012334 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012335, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012335 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.angl"
        "e_and_trigonometry.sinh.lowp_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012335 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012335 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012336, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012336 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.an"
        "gle_and_trigonometry.sinh.lowp_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012336 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012336 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012337, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012337 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.ang"
        "le_and_trigonometry.sinh.lowp_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012337 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012337 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012338, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012338 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.an"
        "gle_and_trigonometry.sinh.lowp_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012338 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012338 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012339, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012339 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.ang"
        "le_and_trigonometry.sinh.lowp_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012339 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012339 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012340, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012340 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.an"
        "gle_and_trigonometry.sinh.lowp_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012340 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012340 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012341, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012341 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.ang"
        "le_and_trigonometry.sinh.lowp_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012341 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012341 end";
}
