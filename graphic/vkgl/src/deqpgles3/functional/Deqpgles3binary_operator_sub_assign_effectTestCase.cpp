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
#include "../ActsDeqpgles30010TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009686, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009686 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.sub_assign_effect.lowp_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009686 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009686 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009687, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009687 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.sub_assign_effect.lowp_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009687 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009687 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009688, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009688 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.sub_assign_effect.mediump_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009688 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009688 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009689, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009689 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.sub_assign_effect.mediump_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009689 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009689 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009690, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009690 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.sub_assign_effect.highp_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009690 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009690 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009691, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009691 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.sub_assign_effect.highp_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009691 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009691 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009692, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009692 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.sub_assign_effect.lowp_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009692 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009692 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009693, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009693 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.sub_assign_effect.lowp_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009693 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009693 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009694, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009694 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.sub_assign_effect.mediump_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009694 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009694 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009695, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009695 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.sub_assign_effect.mediump_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009695 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009695 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009696, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009696 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.sub_assign_effect.highp_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009696 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009696 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009697, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009697 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.sub_assign_effect.highp_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009697 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009697 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009698, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009698 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.sub_assign_effect.lowp_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009698 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009698 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009699, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009699 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.sub_assign_effect.lowp_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009699 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009699 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009700, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009700 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.sub_assign_effect.mediump_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009700 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009700 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009701, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009701 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.sub_assign_effect.mediump_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009701 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009701 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009702, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009702 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.sub_assign_effect.highp_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009702 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009702 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009703, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009703 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.sub_assign_effect.highp_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009703 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009703 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009704, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009704 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.sub_assign_effect.lowp_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009704 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009704 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009705, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009705 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.sub_assign_effect.lowp_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009705 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009705 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009706, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009706 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.sub_assign_effect.mediump_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009706 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009706 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009707, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009707 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.sub_assign_effect.mediump_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009707 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009707 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009708, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009708 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.sub_assign_effect.highp_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009708 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009708 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009709, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009709 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.sub_assign_effect.highp_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009709 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009709 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009710, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009710 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.sub_assign_effect.lowp_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009710 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009710 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009711, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009711 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.sub_assign_effect.lowp_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009711 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009711 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009712, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009712 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.sub_assign_effect.mediump_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009712 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009712 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009713, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009713 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.sub_assign_effect.mediump_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009713 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009713 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009714, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009714 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.sub_assign_effect.lowp_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009714 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009714 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009715, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009715 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.sub_assign_effect.lowp_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009715 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009715 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009716, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009716 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.sub_assign_effect.mediump_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009716 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009716 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009717, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009717 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.sub_assign_effect.mediump_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009717 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009717 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009718, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009718 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.sub_assign_effect.lowp_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009718 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009718 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009719, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009719 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.sub_assign_effect.lowp_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009719 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009719 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009720, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009720 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.sub_assign_effect.mediump_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009720 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009720 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009721, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009721 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.sub_assign_effect.mediump_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009721 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009721 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009722, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009722 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.sub_assign_effect.lowp_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009722 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009722 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009723, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009723 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.sub_assign_effect.lowp_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009723 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009723 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009724, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009724 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.sub_assign_effect.mediump_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009724 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009724 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009725, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009725 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.sub_assign_effect.mediump_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009725 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009725 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009726, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009726 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.sub_assign_effect.highp_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009726 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009726 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009727, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009727 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.sub_assign_effect.highp_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009727 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009727 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009728, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009728 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.sub_assign_effect.highp_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009728 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009728 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009729, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009729 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.sub_assign_effect.highp_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009729 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009729 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009730, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009730 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.sub_assign_effect.highp_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009730 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009730 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009731, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009731 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.sub_assign_effect.highp_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009731 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009731 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009732, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009732 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.sub_assign_effect.highp_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009732 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009732 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009733, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009733 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.sub_assign_effect.highp_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009733 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009733 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009734, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009734 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.sub_assign_effect.lowp_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009734 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009734 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009735, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009735 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.sub_assign_effect.lowp_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009735 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009735 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009736, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009736 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.sub_assign_effect.mediump_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009736 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009736 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009737, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009737 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.sub_assign_effect.mediump_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009737 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009737 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009738, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009738 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.sub_assign_effect.lowp_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009738 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009738 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009739, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009739 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.sub_assign_effect.lowp_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009739 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009739 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009740, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009740 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.sub_assign_effect.mediump_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009740 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009740 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009741, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009741 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.sub_assign_effect.mediump_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009741 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009741 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009742, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009742 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.sub_assign_effect.lowp_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009742 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009742 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009743, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009743 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.sub_assign_effect.lowp_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009743 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009743 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009744, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009744 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.sub_assign_effect.mediump_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009744 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009744 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009745, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009745 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.sub_assign_effect.mediump_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009745 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009745 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009746, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009746 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.sub_assign_effect.lowp_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009746 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009746 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009747, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009747 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.sub_assign_effect.lowp_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009747 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009747 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009748, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009748 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.sub_assign_effect.mediump_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009748 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009748 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009749, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009749 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.sub_assign_effect.mediump_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009749 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009749 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009750, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009750 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.sub_assign_effect.highp_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009750 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009750 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009751, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009751 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.sub_assign_effect.highp_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009751 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009751 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009752, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009752 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.sub_assign_effect.highp_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009752 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009752 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009753, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009753 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.sub_assign_effect.highp_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009753 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009753 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009754, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009754 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.sub_assign_effect.highp_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009754 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009754 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009755, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009755 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.sub_assign_effect.highp_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009755 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009755 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009756, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009756 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.sub_assign_effect.highp_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009756 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009756 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009757, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009757 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.sub_assign_effect.highp_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009757 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009757 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009758, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009758 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.sub_assign_effect.lowp_vec2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009758 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009758 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009759, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009759 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.sub_assign_effect.lowp_vec2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009759 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009759 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009760, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009760 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.sub_assign_effect.mediump_vec2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009760 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009760 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009761, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009761 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.sub_assign_effect.mediump_vec2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009761 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009761 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009762, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009762 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.sub_assign_effect.highp_vec2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009762 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009762 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009763, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009763 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.sub_assign_effect.highp_vec2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009763 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009763 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009764, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009764 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.sub_assign_effect.lowp_vec3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009764 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009764 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009765, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009765 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.sub_assign_effect.lowp_vec3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009765 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009765 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009766, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009766 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.sub_assign_effect.mediump_vec3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009766 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009766 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009767, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009767 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.sub_assign_effect.mediump_vec3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009767 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009767 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009768, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009768 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.sub_assign_effect.highp_vec3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009768 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009768 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009769, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009769 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.sub_assign_effect.highp_vec3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009769 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009769 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009770, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009770 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.sub_assign_effect.lowp_vec4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009770 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009770 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009771, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009771 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.sub_assign_effect.lowp_vec4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009771 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009771 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009772, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009772 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.sub_assign_effect.mediump_vec4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009772 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009772 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009773, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009773 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.sub_assign_effect.mediump_vec4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009773 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009773 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009774, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009774 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.sub_assign_effect.highp_vec4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009774 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009774 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009775, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009775 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.sub_assign_effect.highp_vec4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009775 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009775 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009776, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009776 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.sub_assign_effect.lowp_ivec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009776 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009776 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009777, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009777 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.sub_assign_effect.lowp_ivec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009777 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009777 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009778, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009778 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.sub_assign_effect.mediump_ivec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009778 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009778 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009779, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009779 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.sub_assign_effect.mediump_ivec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009779 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009779 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009780, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009780 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.sub_assign_effect.lowp_ivec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009780 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009780 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009781, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009781 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.sub_assign_effect.lowp_ivec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009781 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009781 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009782, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009782 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.sub_assign_effect.mediump_ivec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009782 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009782 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009783, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009783 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.sub_assign_effect.mediump_ivec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009783 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009783 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009784, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009784 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.sub_assign_effect.lowp_ivec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009784 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009784 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009785, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009785 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.sub_assign_effect.lowp_ivec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009785 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009785 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009786, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009786 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.sub_assign_effect.mediump_ivec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009786 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009786 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009787, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009787 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.sub_assign_effect.mediump_ivec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009787 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009787 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009788, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009788 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.sub_assign_effect.highp_ivec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009788 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009788 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009789, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009789 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.sub_assign_effect.highp_ivec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009789 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009789 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009790, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009790 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.sub_assign_effect.highp_ivec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009790 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009790 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009791, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009791 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.sub_assign_effect.highp_ivec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009791 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009791 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009792, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009792 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.sub_assign_effect.highp_ivec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009792 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009792 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009793, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009793 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.sub_assign_effect.highp_ivec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009793 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009793 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009794, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009794 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.sub_assign_effect.lowp_uvec2_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009794 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009794 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009795, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009795 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.sub_assign_effect.lowp_uvec2_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009795 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009795 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009796, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009796 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.sub_assign_effect.mediump_uvec2_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009796 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009796 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009797, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009797 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.sub_assign_effect.mediump_uvec2_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009797 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009797 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009798, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009798 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.sub_assign_effect.lowp_uvec3_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009798 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009798 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009799, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009799 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.sub_assign_effect.lowp_uvec3_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009799 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009799 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009800, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009800 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.sub_assign_effect.mediump_uvec3_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009800 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009800 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009801, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009801 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.sub_assign_effect.mediump_uvec3_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009801 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009801 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009802, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009802 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.sub_assign_effect.lowp_uvec4_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009802 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009802 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009803, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009803 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.sub_assign_effect.lowp_uvec4_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009803 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009803 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009804, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009804 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.sub_assign_effect.mediump_uvec4_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009804 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009804 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009805, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009805 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.sub_assign_effect.mediump_uvec4_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009805 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009805 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009806, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009806 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.sub_assign_effect.highp_uvec2_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009806 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009806 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009807, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009807 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.sub_assign_effect.highp_uvec2_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009807 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009807 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009808, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009808 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.sub_assign_effect.highp_uvec3_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009808 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009808 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009809, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009809 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.sub_assign_effect.highp_uvec3_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009809 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009809 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009810, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009810 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.sub_assign_effect.highp_uvec4_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009810 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009810 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009811, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009811 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.sub_assign_effect.highp_uvec4_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009811 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009811 end";
}
