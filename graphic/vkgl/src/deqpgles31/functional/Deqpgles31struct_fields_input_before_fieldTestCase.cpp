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

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005675, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005675 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es"
        "31.struct_fields.input_before_field.int_to_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005675 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005675 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005676, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005676 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "1.struct_fields.input_before_field.int_to_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005676 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005676 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005677, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005677 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es"
        "31.struct_fields.input_before_field.int_to_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005677 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005677 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005678, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005678 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "1.struct_fields.input_before_field.int_to_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005678 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005678 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005679, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005679 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es"
        "31.struct_fields.input_before_field.int_to_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005679 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005679 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005680, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005680 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "1.struct_fields.input_before_field.int_to_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005680 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005680 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005681, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005681 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es"
        "31.struct_fields.input_before_field.int_to_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005681 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005681 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005682, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005682 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "1.struct_fields.input_before_field.int_to_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005682 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005682 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005683, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005683 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es"
        "31.struct_fields.input_before_field.int_to_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005683 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005683 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005684, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005684 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "1.struct_fields.input_before_field.int_to_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005684 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005684 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005685, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005685 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es"
        "31.struct_fields.input_before_field.int_to_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005685 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005685 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005686, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005686 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "1.struct_fields.input_before_field.int_to_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005686 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005686 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005687, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005687 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es"
        "31.struct_fields.input_before_field.int_to_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005687 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005687 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005688, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005688 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "1.struct_fields.input_before_field.int_to_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005688 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005688 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005689, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005689 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es"
        "31.struct_fields.input_before_field.int_to_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005689 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005689 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005690, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005690 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "1.struct_fields.input_before_field.int_to_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005690 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005690 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005691, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005691 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "1.struct_fields.input_before_field.uint_to_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005691 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005691 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005692, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005692 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
        ".struct_fields.input_before_field.uint_to_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005692 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005692 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005693, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005693 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es"
        "31.struct_fields.input_before_field.uint_to_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005693 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005693 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005694, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005694 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "1.struct_fields.input_before_field.uint_to_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005694 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005694 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005695, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005695 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es"
        "31.struct_fields.input_before_field.uint_to_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005695 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005695 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005696, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005696 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "1.struct_fields.input_before_field.uint_to_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005696 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005696 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005697, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005697 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es"
        "31.struct_fields.input_before_field.uint_to_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005697 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005697 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005698, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005698 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "1.struct_fields.input_before_field.uint_to_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005698 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005698 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005699, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005699 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "1.struct_fields.input_before_field.ivec2_to_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005699 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005699 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005700, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005700 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
        ".struct_fields.input_before_field.ivec2_to_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005700 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005700 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005701, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005701 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "1.struct_fields.input_before_field.ivec2_to_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005701 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005701 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005702, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005702 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
        ".struct_fields.input_before_field.ivec2_to_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005702 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005702 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005703, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005703 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "1.struct_fields.input_before_field.uvec2_to_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005703 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005703 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005704, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005704 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
        ".struct_fields.input_before_field.uvec2_to_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005704 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005704 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005705, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005705 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "1.struct_fields.input_before_field.ivec3_to_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005705 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005705 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005706, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005706 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
        ".struct_fields.input_before_field.ivec3_to_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005706 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005706 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005707, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005707 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "1.struct_fields.input_before_field.ivec3_to_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005707 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005707 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005708, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005708 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
        ".struct_fields.input_before_field.ivec3_to_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005708 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005708 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005709, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005709 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "1.struct_fields.input_before_field.uvec3_to_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005709 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005709 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005710, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005710 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
        ".struct_fields.input_before_field.uvec3_to_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005710 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005710 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005711, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005711 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "1.struct_fields.input_before_field.ivec4_to_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005711 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005711 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005712, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005712 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
        ".struct_fields.input_before_field.ivec4_to_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005712 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005712 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005713, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005713 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "1.struct_fields.input_before_field.ivec4_to_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005713 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005713 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005714, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005714 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
        ".struct_fields.input_before_field.ivec4_to_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005714 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005714 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005715, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005715 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "1.struct_fields.input_before_field.uvec4_to_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005715 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005715 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005716, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005716 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
        ".struct_fields.input_before_field.uvec4_to_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005716 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005716 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006709, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006709 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es"
        "32.struct_fields.input_before_field.int_to_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006709 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006709 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006710, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006710 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "2.struct_fields.input_before_field.int_to_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006710 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006710 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006711, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006711 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es"
        "32.struct_fields.input_before_field.int_to_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006711 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006711 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006712, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006712 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "2.struct_fields.input_before_field.int_to_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006712 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006712 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006713, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006713 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es"
        "32.struct_fields.input_before_field.int_to_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006713 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006713 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006714, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006714 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "2.struct_fields.input_before_field.int_to_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006714 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006714 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006715, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006715 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es"
        "32.struct_fields.input_before_field.int_to_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006715 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006715 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006716, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006716 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "2.struct_fields.input_before_field.int_to_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006716 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006716 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006717, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006717 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es"
        "32.struct_fields.input_before_field.int_to_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006717 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006717 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006718, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006718 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "2.struct_fields.input_before_field.int_to_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006718 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006718 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006719, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006719 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es"
        "32.struct_fields.input_before_field.int_to_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006719 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006719 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006720, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006720 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "2.struct_fields.input_before_field.int_to_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006720 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006720 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006721, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006721 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es"
        "32.struct_fields.input_before_field.int_to_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006721 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006721 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006722, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006722 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "2.struct_fields.input_before_field.int_to_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006722 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006722 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006723, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006723 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es"
        "32.struct_fields.input_before_field.int_to_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006723 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006723 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006724, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006724 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "2.struct_fields.input_before_field.int_to_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006724 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006724 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006725, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006725 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "2.struct_fields.input_before_field.uint_to_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006725 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006725 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006726, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006726 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
        ".struct_fields.input_before_field.uint_to_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006726 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006726 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006727, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006727 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es"
        "32.struct_fields.input_before_field.uint_to_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006727 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006727 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006728, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006728 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "2.struct_fields.input_before_field.uint_to_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006728 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006728 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006729, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006729 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es"
        "32.struct_fields.input_before_field.uint_to_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006729 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006729 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006730, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006730 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "2.struct_fields.input_before_field.uint_to_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006730 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006730 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006731, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006731 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es"
        "32.struct_fields.input_before_field.uint_to_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006731 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006731 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006732, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006732 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "2.struct_fields.input_before_field.uint_to_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006732 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006732 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006733, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006733 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "2.struct_fields.input_before_field.ivec2_to_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006733 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006733 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006734, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006734 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
        ".struct_fields.input_before_field.ivec2_to_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006734 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006734 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006735, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006735 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "2.struct_fields.input_before_field.ivec2_to_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006735 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006735 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006736, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006736 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
        ".struct_fields.input_before_field.ivec2_to_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006736 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006736 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006737, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006737 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "2.struct_fields.input_before_field.uvec2_to_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006737 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006737 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006738, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006738 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
        ".struct_fields.input_before_field.uvec2_to_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006738 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006738 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006739, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006739 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "2.struct_fields.input_before_field.ivec3_to_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006739 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006739 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006740, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006740 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
        ".struct_fields.input_before_field.ivec3_to_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006740 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006740 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006741, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006741 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "2.struct_fields.input_before_field.ivec3_to_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006741 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006741 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006742, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006742 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
        ".struct_fields.input_before_field.ivec3_to_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006742 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006742 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006743, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006743 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "2.struct_fields.input_before_field.uvec3_to_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006743 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006743 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006744, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006744 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
        ".struct_fields.input_before_field.uvec3_to_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006744 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006744 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006745, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006745 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "2.struct_fields.input_before_field.ivec4_to_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006745 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006745 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006746, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006746 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
        ".struct_fields.input_before_field.ivec4_to_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006746 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006746 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006747, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006747 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "2.struct_fields.input_before_field.ivec4_to_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006747 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006747 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006748, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006748 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
        ".struct_fields.input_before_field.ivec4_to_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006748 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006748 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006749, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006749 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "2.struct_fields.input_before_field.uvec4_to_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006749 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006749 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006750, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006750 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
        ".struct_fields.input_before_field.uvec4_to_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006750 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006750 end";
}
