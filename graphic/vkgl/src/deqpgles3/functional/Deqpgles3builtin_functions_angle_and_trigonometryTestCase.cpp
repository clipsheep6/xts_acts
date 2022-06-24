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
#include "../ActsDeqpgles30020TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019686, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019686 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.constant_expressions.bui"
        "ltin_functions.angle_and_trigonometry.sin_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019686 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019686 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019687, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019687 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.constant_expressions.buil"
        "tin_functions.angle_and_trigonometry.sin_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019687 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019687 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019688, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019688 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.constant_expressions.bu"
        "iltin_functions.angle_and_trigonometry.sin_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019688 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019688 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019689, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019689 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.constant_expressions.bui"
        "ltin_functions.angle_and_trigonometry.sin_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019689 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019689 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019690, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019690 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.constant_expressions.bu"
        "iltin_functions.angle_and_trigonometry.sin_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019690 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019690 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019691, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019691 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.constant_expressions.bui"
        "ltin_functions.angle_and_trigonometry.sin_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019691 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019691 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019692, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019692 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.constant_expressions.bu"
        "iltin_functions.angle_and_trigonometry.sin_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019692 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019692 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019693, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019693 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.constant_expressions.bui"
        "ltin_functions.angle_and_trigonometry.sin_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019693 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019693 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019694, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019694 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.constant_expressions.bui"
        "ltin_functions.angle_and_trigonometry.cos_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019694 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019694 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019695, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019695 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.constant_expressions.buil"
        "tin_functions.angle_and_trigonometry.cos_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019695 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019695 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019696, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019696 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.constant_expressions.bu"
        "iltin_functions.angle_and_trigonometry.cos_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019696 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019696 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019697, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019697 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.constant_expressions.bui"
        "ltin_functions.angle_and_trigonometry.cos_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019697 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019697 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019698, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019698 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.constant_expressions.bu"
        "iltin_functions.angle_and_trigonometry.cos_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019698 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019698 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019699, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019699 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.constant_expressions.bui"
        "ltin_functions.angle_and_trigonometry.cos_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019699 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019699 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019700, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019700 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.constant_expressions.bu"
        "iltin_functions.angle_and_trigonometry.cos_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019700 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019700 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019701, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019701 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.constant_expressions.bui"
        "ltin_functions.angle_and_trigonometry.cos_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019701 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019701 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019702, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019702 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.constant_expressions.bui"
        "ltin_functions.angle_and_trigonometry.asin_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019702 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019702 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019703, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019703 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.constant_expressions.buil"
        "tin_functions.angle_and_trigonometry.asin_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019703 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019703 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019704, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019704 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.constant_expressions.bui"
        "ltin_functions.angle_and_trigonometry.asin_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019704 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019704 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019705, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019705 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.constant_expressions.buil"
        "tin_functions.angle_and_trigonometry.asin_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019705 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019705 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019706, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019706 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.constant_expressions.bui"
        "ltin_functions.angle_and_trigonometry.asin_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019706 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019706 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019707, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019707 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.constant_expressions.buil"
        "tin_functions.angle_and_trigonometry.asin_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019707 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019707 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019708, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019708 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.constant_expressions.bui"
        "ltin_functions.angle_and_trigonometry.asin_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019708 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019708 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019709, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019709 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.constant_expressions.buil"
        "tin_functions.angle_and_trigonometry.asin_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019709 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019709 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019710, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019710 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.constant_expressions.bui"
        "ltin_functions.angle_and_trigonometry.acos_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019710 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019710 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019711, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019711 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.constant_expressions.buil"
        "tin_functions.angle_and_trigonometry.acos_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019711 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019711 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019712, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019712 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.constant_expressions.bui"
        "ltin_functions.angle_and_trigonometry.acos_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019712 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019712 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019713, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019713 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.constant_expressions.buil"
        "tin_functions.angle_and_trigonometry.acos_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019713 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019713 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019714, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019714 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.constant_expressions.bui"
        "ltin_functions.angle_and_trigonometry.acos_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019714 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019714 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019715, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019715 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.constant_expressions.buil"
        "tin_functions.angle_and_trigonometry.acos_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019715 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019715 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019716, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019716 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.constant_expressions.bui"
        "ltin_functions.angle_and_trigonometry.acos_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019716 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019716 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019717, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019717 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.constant_expressions.buil"
        "tin_functions.angle_and_trigonometry.acos_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019717 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019717 end";
}
