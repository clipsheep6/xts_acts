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
#include "../ActsDeqpgles30006TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005158, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005158 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_float_int_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005158 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005158 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005159, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005159 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_float_int_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005159 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005159 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005160, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005160 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.add_float_int_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005160 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005160 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005161, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005161 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_float_int_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005161 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005161 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005162, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005162 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_float_ivec2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005162 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005162 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005163, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005163 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.add_float_ivec2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005163 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005163 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005164, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005164 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_float_ivec2_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005164 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005164 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005165, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005165 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.add_float_ivec2_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005165 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005165 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005166, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005166 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_float_ivec3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005166 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005166 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005167, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005167 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.add_float_ivec3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005167 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005167 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005168, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005168 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_float_ivec3_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005168 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005168 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005169, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005169 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.add_float_ivec3_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005169 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005169 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005170, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005170 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_float_ivec4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005170 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005170 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005171, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005171 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.add_float_ivec4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005171 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005171 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005172, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005172 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_float_ivec4_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005172 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005172 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005173, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005173 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.add_float_ivec4_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005173 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005173 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005174, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005174 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.add_vec2_int_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005174 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005174 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005175, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005175 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec2_int_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005175 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005175 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005176, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005176 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversi"
        "ons.invalid_implicit_conversions.add_vec2_int_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005176 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005176 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005177, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005177 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.add_vec2_int_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005177 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005177 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005178, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005178 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec2_ivec2_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005178 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005178 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005179, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005179 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec2_ivec2_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005179 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005179 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005180, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005180 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec2_ivec2_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005180 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005180 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005181, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005181 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec2_ivec2_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005181 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005181 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005182, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005182 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec2_ivec3_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005182 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005182 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005183, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005183 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec2_ivec3_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005183 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005183 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005184, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005184 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec2_ivec3_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005184 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005184 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005185, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005185 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec2_ivec3_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005185 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005185 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005186, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005186 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec2_ivec4_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005186 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005186 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005187, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005187 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec2_ivec4_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005187 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005187 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005188, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005188 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec2_ivec4_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005188 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005188 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005189, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005189 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec2_ivec4_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005189 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005189 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005190, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005190 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.add_vec3_int_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005190 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005190 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005191, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005191 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec3_int_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005191 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005191 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005192, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005192 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversi"
        "ons.invalid_implicit_conversions.add_vec3_int_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005192 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005192 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005193, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005193 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.add_vec3_int_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005193 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005193 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005194, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005194 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec3_ivec2_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005194 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005194 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005195, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005195 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec3_ivec2_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005195 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005195 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005196, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005196 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec3_ivec2_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005196 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005196 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005197, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005197 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec3_ivec2_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005197 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005197 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005198, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005198 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec3_ivec3_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005198 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005198 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005199, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005199 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec3_ivec3_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005199 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005199 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005200, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005200 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec3_ivec3_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005200 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005200 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005201, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005201 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec3_ivec3_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005201 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005201 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005202, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005202 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec3_ivec4_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005202 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005202 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005203, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005203 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec3_ivec4_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005203 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005203 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005204, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005204 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec3_ivec4_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005204 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005204 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005205, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005205 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec3_ivec4_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005205 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005205 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005206, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005206 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.add_vec4_int_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005206 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005206 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005207, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005207 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec4_int_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005207 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005207 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005208, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005208 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversi"
        "ons.invalid_implicit_conversions.add_vec4_int_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005208 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005208 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005209, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005209 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.add_vec4_int_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005209 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005209 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005210, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005210 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec4_ivec2_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005210 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005210 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005211, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005211 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec4_ivec2_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005211 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005211 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005212, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005212 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec4_ivec2_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005212 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005212 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005213, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005213 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec4_ivec2_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005213 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005213 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005214, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005214 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec4_ivec3_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005214 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005214 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005215, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005215 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec4_ivec3_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005215 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005215 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005216, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005216 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec4_ivec3_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005216 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005216 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005217, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005217 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec4_ivec3_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005217 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005217 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005218, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005218 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec4_ivec4_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005218 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005218 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005219, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005219 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec4_ivec4_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005219 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005219 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005220, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005220 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec4_ivec4_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005220 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005220 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005221, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005221 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec4_ivec4_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005221 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005221 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005222, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005222 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_float_uint_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005222 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005222 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005223, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005223 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_float_uint_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005223 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005223 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005224, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005224 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_float_uint_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005224 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005224 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005225, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005225 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_float_uint_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005225 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005225 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005226, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005226 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_float_uvec2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005226 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005226 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005227, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005227 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.add_float_uvec2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005227 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005227 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005228, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005228 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_float_uvec2_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005228 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005228 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005229, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005229 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.add_float_uvec2_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005229 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005229 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005230, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005230 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_float_uvec3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005230 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005230 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005231, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005231 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.add_float_uvec3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005231 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005231 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005232, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005232 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_float_uvec3_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005232 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005232 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005233, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005233 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.add_float_uvec3_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005233 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005233 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005234, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005234 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_float_uvec4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005234 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005234 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005235, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005235 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.add_float_uvec4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005235 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005235 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005236, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005236 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_float_uvec4_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005236 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005236 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005237, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005237 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.add_float_uvec4_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005237 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005237 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005238, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005238 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.add_vec2_uint_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005238 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005238 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005239, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005239 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec2_uint_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005239 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005239 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005240, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005240 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.add_vec2_uint_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005240 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005240 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005241, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005241 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec2_uint_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005241 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005241 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005242, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005242 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec2_uvec2_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005242 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005242 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005243, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005243 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec2_uvec2_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005243 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005243 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005244, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005244 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec2_uvec2_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005244 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005244 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005245, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005245 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec2_uvec2_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005245 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005245 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005246, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005246 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec2_uvec3_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005246 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005246 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005247, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005247 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec2_uvec3_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005247 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005247 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005248, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005248 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec2_uvec3_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005248 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005248 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005249, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005249 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec2_uvec3_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005249 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005249 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005250, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005250 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec2_uvec4_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005250 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005250 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005251, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005251 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec2_uvec4_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005251 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005251 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005252, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005252 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec2_uvec4_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005252 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005252 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005253, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005253 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec2_uvec4_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005253 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005253 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005254, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005254 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.add_vec3_uint_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005254 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005254 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005255, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005255 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec3_uint_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005255 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005255 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005256, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005256 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.add_vec3_uint_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005256 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005256 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005257, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005257 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec3_uint_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005257 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005257 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005258, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005258 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec3_uvec2_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005258 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005258 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005259, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005259 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec3_uvec2_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005259 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005259 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005260, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005260 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec3_uvec2_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005260 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005260 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005261, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005261 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec3_uvec2_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005261 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005261 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005262, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005262 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec3_uvec3_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005262 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005262 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005263, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005263 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec3_uvec3_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005263 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005263 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005264, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005264 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec3_uvec3_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005264 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005264 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005265, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005265 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec3_uvec3_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005265 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005265 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005266, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005266 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec3_uvec4_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005266 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005266 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005267, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005267 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec3_uvec4_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005267 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005267 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005268, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005268 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec3_uvec4_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005268 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005268 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005269, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005269 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec3_uvec4_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005269 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005269 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005270, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005270 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.add_vec4_uint_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005270 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005270 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005271, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005271 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec4_uint_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005271 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005271 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005272, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005272 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.add_vec4_uint_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005272 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005272 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005273, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005273 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec4_uint_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005273 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005273 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005274, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005274 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec4_uvec2_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005274 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005274 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005275, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005275 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec4_uvec2_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005275 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005275 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005276, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005276 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec4_uvec2_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005276 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005276 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005277, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005277 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec4_uvec2_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005277 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005277 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005278, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005278 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec4_uvec3_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005278 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005278 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005279, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005279 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec4_uvec3_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005279 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005279 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005280, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005280 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec4_uvec3_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005280 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005280 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005281, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005281 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec4_uvec3_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005281 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005281 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005282, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005282 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec4_uvec4_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005282 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005282 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005283, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005283 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec4_uvec4_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005283 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005283 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005284, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005284 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec4_uvec4_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005284 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005284 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005285, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005285 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec4_uvec4_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005285 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005285 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005286, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005286 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversi"
        "ons.invalid_implicit_conversions.add_int_uint_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005286 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005286 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005287, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005287 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.add_int_uint_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005287 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005287 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005288, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005288 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.add_int_uint_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005288 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005288 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005289, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005289 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_int_uint_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005289 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005289 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005290, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005290 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.add_int_uvec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005290 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005290 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005291, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005291 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_int_uvec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005291 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005291 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005292, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005292 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_int_uvec2_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005292 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005292 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005293, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005293 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_int_uvec2_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005293 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005293 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005294, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005294 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.add_int_uvec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005294 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005294 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005295, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005295 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_int_uvec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005295 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005295 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005296, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005296 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_int_uvec3_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005296 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005296 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005297, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005297 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_int_uvec3_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005297 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005297 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005298, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005298 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.add_int_uvec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005298 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005298 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005299, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005299 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_int_uvec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005299 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005299 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005300, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005300 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_int_uvec4_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005300 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005300 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005301, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005301 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_int_uvec4_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005301 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005301 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005302, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005302 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_ivec2_uint_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005302 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005302 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005303, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005303 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_ivec2_uint_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005303 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005303 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005304, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005304 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_ivec2_uint_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005304 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005304 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005305, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005305 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_ivec2_uint_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005305 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005305 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005306, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005306 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_ivec2_uvec2_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005306 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005306 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005307, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005307 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.add_ivec2_uvec2_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005307 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005307 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005308, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005308 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_ivec2_uvec2_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005308 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005308 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005309, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005309 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.add_ivec2_uvec2_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005309 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005309 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005310, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005310 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_ivec2_uvec3_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005310 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005310 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005311, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005311 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.add_ivec2_uvec3_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005311 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005311 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005312, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005312 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_ivec2_uvec3_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005312 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005312 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005313, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005313 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.add_ivec2_uvec3_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005313 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005313 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005314, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005314 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_ivec2_uvec4_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005314 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005314 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005315, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005315 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.add_ivec2_uvec4_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005315 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005315 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005316, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005316 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_ivec2_uvec4_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005316 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005316 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005317, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005317 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.add_ivec2_uvec4_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005317 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005317 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005318, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005318 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_ivec3_uint_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005318 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005318 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005319, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005319 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_ivec3_uint_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005319 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005319 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005320, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005320 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_ivec3_uint_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005320 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005320 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005321, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005321 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_ivec3_uint_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005321 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005321 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005322, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005322 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_ivec3_uvec2_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005322 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005322 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005323, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005323 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.add_ivec3_uvec2_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005323 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005323 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005324, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005324 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_ivec3_uvec2_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005324 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005324 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005325, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005325 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.add_ivec3_uvec2_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005325 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005325 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005326, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005326 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_ivec3_uvec3_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005326 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005326 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005327, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005327 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.add_ivec3_uvec3_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005327 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005327 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005328, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005328 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_ivec3_uvec3_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005328 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005328 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005329, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005329 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.add_ivec3_uvec3_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005329 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005329 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005330, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005330 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_ivec3_uvec4_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005330 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005330 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005331, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005331 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.add_ivec3_uvec4_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005331 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005331 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005332, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005332 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_ivec3_uvec4_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005332 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005332 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005333, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005333 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.add_ivec3_uvec4_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005333 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005333 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005334, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005334 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_ivec4_uint_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005334 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005334 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005335, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005335 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_ivec4_uint_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005335 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005335 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005336, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005336 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_ivec4_uint_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005336 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005336 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005337, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005337 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_ivec4_uint_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005337 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005337 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005338, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005338 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_ivec4_uvec2_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005338 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005338 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005339, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005339 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.add_ivec4_uvec2_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005339 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005339 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005340, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005340 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_ivec4_uvec2_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005340 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005340 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005341, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005341 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.add_ivec4_uvec2_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005341 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005341 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005342, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005342 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_ivec4_uvec3_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005342 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005342 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005343, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005343 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.add_ivec4_uvec3_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005343 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005343 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005344, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005344 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_ivec4_uvec3_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005344 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005344 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005345, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005345 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.add_ivec4_uvec3_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005345 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005345 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005346, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005346 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_ivec4_uvec4_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005346 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005346 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005347, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005347 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.add_ivec4_uvec4_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005347 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005347 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005348, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005348 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_ivec4_uvec4_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005348 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005348 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005349, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005349 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.add_ivec4_uvec4_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005349 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005349 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005350, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005350 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_float_int_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005350 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005350 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005351, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005351 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_float_int_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005351 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005351 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005352, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005352 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.mul_float_int_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005352 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005352 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005353, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005353 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_float_int_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005353 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005353 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005354, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005354 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_float_ivec2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005354 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005354 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005355, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005355 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.mul_float_ivec2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005355 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005355 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005356, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005356 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_float_ivec2_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005356 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005356 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005357, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005357 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.mul_float_ivec2_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005357 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005357 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005358, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005358 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_float_ivec3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005358 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005358 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005359, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005359 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.mul_float_ivec3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005359 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005359 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005360, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005360 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_float_ivec3_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005360 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005360 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005361, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005361 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.mul_float_ivec3_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005361 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005361 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005362, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005362 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_float_ivec4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005362 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005362 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005363, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005363 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.mul_float_ivec4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005363 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005363 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005364, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005364 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_float_ivec4_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005364 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005364 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005365, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005365 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.mul_float_ivec4_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005365 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005365 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005366, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005366 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.mul_vec2_int_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005366 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005366 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005367, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005367 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_vec2_int_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005367 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005367 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005368, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005368 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversi"
        "ons.invalid_implicit_conversions.mul_vec2_int_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005368 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005368 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005369, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005369 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.mul_vec2_int_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005369 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005369 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005370, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005370 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_vec2_ivec2_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005370 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005370 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005371, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005371 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_vec2_ivec2_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005371 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005371 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005372, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005372 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_vec2_ivec2_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005372 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005372 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005373, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005373 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_vec2_ivec2_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005373 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005373 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005374, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005374 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_vec2_ivec3_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005374 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005374 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005375, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005375 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_vec2_ivec3_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005375 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005375 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005376, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005376 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_vec2_ivec3_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005376 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005376 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005377, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005377 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_vec2_ivec3_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005377 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005377 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005378, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005378 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_vec2_ivec4_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005378 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005378 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005379, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005379 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_vec2_ivec4_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005379 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005379 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005380, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005380 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_vec2_ivec4_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005380 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005380 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005381, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005381 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_vec2_ivec4_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005381 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005381 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005382, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005382 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.mul_vec3_int_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005382 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005382 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005383, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005383 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_vec3_int_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005383 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005383 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005384, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005384 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversi"
        "ons.invalid_implicit_conversions.mul_vec3_int_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005384 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005384 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005385, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005385 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.mul_vec3_int_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005385 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005385 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005386, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005386 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_vec3_ivec2_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005386 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005386 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005387, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005387 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_vec3_ivec2_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005387 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005387 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005388, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005388 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_vec3_ivec2_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005388 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005388 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005389, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005389 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_vec3_ivec2_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005389 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005389 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005390, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005390 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_vec3_ivec3_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005390 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005390 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005391, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005391 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_vec3_ivec3_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005391 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005391 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005392, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005392 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_vec3_ivec3_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005392 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005392 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005393, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005393 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_vec3_ivec3_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005393 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005393 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005394, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005394 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_vec3_ivec4_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005394 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005394 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005395, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005395 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_vec3_ivec4_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005395 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005395 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005396, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005396 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_vec3_ivec4_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005396 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005396 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005397, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005397 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_vec3_ivec4_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005397 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005397 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005398, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005398 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.mul_vec4_int_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005398 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005398 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005399, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005399 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_vec4_int_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005399 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005399 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005400, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005400 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversi"
        "ons.invalid_implicit_conversions.mul_vec4_int_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005400 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005400 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005401, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005401 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.mul_vec4_int_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005401 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005401 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005402, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005402 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_vec4_ivec2_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005402 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005402 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005403, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005403 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_vec4_ivec2_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005403 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005403 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005404, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005404 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_vec4_ivec2_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005404 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005404 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005405, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005405 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_vec4_ivec2_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005405 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005405 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005406, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005406 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_vec4_ivec3_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005406 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005406 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005407, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005407 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_vec4_ivec3_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005407 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005407 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005408, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005408 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_vec4_ivec3_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005408 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005408 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005409, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005409 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_vec4_ivec3_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005409 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005409 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005410, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005410 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_vec4_ivec4_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005410 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005410 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005411, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005411 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_vec4_ivec4_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005411 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005411 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005412, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005412 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_vec4_ivec4_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005412 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005412 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005413, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005413 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_vec4_ivec4_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005413 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005413 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005414, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005414 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_float_uint_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005414 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005414 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005415, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005415 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_float_uint_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005415 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005415 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005416, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005416 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_float_uint_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005416 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005416 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005417, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005417 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_float_uint_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005417 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005417 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005418, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005418 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_float_uvec2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005418 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005418 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005419, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005419 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.mul_float_uvec2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005419 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005419 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005420, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005420 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_float_uvec2_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005420 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005420 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005421, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005421 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.mul_float_uvec2_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005421 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005421 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005422, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005422 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_float_uvec3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005422 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005422 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005423, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005423 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.mul_float_uvec3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005423 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005423 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005424, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005424 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_float_uvec3_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005424 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005424 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005425, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005425 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.mul_float_uvec3_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005425 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005425 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005426, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005426 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_float_uvec4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005426 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005426 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005427, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005427 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.mul_float_uvec4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005427 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005427 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005428, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005428 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_float_uvec4_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005428 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005428 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005429, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005429 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.mul_float_uvec4_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005429 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005429 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005430, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005430 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.mul_vec2_uint_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005430 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005430 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005431, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005431 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_vec2_uint_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005431 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005431 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005432, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005432 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.mul_vec2_uint_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005432 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005432 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005433, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005433 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_vec2_uint_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005433 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005433 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005434, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005434 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_vec2_uvec2_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005434 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005434 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005435, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005435 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_vec2_uvec2_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005435 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005435 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005436, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005436 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_vec2_uvec2_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005436 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005436 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005437, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005437 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_vec2_uvec2_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005437 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005437 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005438, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005438 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_vec2_uvec3_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005438 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005438 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005439, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005439 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_vec2_uvec3_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005439 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005439 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005440, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005440 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_vec2_uvec3_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005440 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005440 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005441, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005441 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_vec2_uvec3_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005441 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005441 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005442, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005442 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_vec2_uvec4_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005442 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005442 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005443, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005443 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_vec2_uvec4_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005443 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005443 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005444, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005444 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_vec2_uvec4_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005444 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005444 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005445, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005445 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_vec2_uvec4_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005445 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005445 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005446, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005446 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.mul_vec3_uint_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005446 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005446 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005447, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005447 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_vec3_uint_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005447 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005447 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005448, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005448 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.mul_vec3_uint_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005448 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005448 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005449, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005449 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_vec3_uint_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005449 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005449 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005450, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005450 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_vec3_uvec2_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005450 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005450 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005451, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005451 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_vec3_uvec2_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005451 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005451 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005452, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005452 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_vec3_uvec2_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005452 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005452 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005453, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005453 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_vec3_uvec2_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005453 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005453 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005454, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005454 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_vec3_uvec3_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005454 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005454 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005455, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005455 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_vec3_uvec3_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005455 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005455 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005456, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005456 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_vec3_uvec3_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005456 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005456 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005457, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005457 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_vec3_uvec3_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005457 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005457 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005458, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005458 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_vec3_uvec4_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005458 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005458 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005459, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005459 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_vec3_uvec4_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005459 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005459 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005460, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005460 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_vec3_uvec4_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005460 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005460 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005461, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005461 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_vec3_uvec4_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005461 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005461 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005462, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005462 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.mul_vec4_uint_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005462 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005462 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005463, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005463 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_vec4_uint_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005463 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005463 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005464, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005464 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.mul_vec4_uint_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005464 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005464 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005465, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005465 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_vec4_uint_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005465 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005465 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005466, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005466 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_vec4_uvec2_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005466 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005466 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005467, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005467 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_vec4_uvec2_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005467 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005467 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005468, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005468 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_vec4_uvec2_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005468 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005468 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005469, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005469 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_vec4_uvec2_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005469 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005469 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005470, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005470 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_vec4_uvec3_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005470 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005470 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005471, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005471 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_vec4_uvec3_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005471 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005471 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005472, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005472 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_vec4_uvec3_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005472 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005472 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005473, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005473 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_vec4_uvec3_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005473 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005473 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005474, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005474 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_vec4_uvec4_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005474 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005474 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005475, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005475 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_vec4_uvec4_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005475 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005475 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005476, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005476 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_vec4_uvec4_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005476 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005476 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005477, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005477 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_vec4_uvec4_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005477 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005477 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005478, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005478 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversi"
        "ons.invalid_implicit_conversions.mul_int_uint_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005478 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005478 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005479, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005479 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.mul_int_uint_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005479 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005479 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005480, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005480 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.mul_int_uint_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005480 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005480 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005481, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005481 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_int_uint_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005481 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005481 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005482, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005482 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.mul_int_uvec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005482 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005482 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005483, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005483 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_int_uvec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005483 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005483 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005484, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005484 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_int_uvec2_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005484 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005484 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005485, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005485 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_int_uvec2_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005485 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005485 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005486, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005486 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.mul_int_uvec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005486 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005486 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005487, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005487 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_int_uvec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005487 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005487 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005488, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005488 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_int_uvec3_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005488 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005488 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005489, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005489 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_int_uvec3_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005489 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005489 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005490, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005490 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.mul_int_uvec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005490 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005490 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005491, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005491 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_int_uvec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005491 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005491 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005492, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005492 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_int_uvec4_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005492 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005492 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005493, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005493 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_int_uvec4_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005493 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005493 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005494, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005494 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_ivec2_uint_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005494 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005494 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005495, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005495 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_ivec2_uint_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005495 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005495 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005496, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005496 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_ivec2_uint_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005496 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005496 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005497, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005497 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_ivec2_uint_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005497 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005497 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005498, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005498 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_ivec2_uvec2_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005498 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005498 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005499, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005499 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.mul_ivec2_uvec2_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005499 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005499 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005500, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005500 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_ivec2_uvec2_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005500 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005500 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005501, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005501 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.mul_ivec2_uvec2_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005501 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005501 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005502, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005502 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_ivec2_uvec3_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005502 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005502 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005503, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005503 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.mul_ivec2_uvec3_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005503 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005503 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005504, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005504 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_ivec2_uvec3_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005504 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005504 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005505, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005505 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.mul_ivec2_uvec3_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005505 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005505 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005506, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005506 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_ivec2_uvec4_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005506 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005506 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005507, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005507 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.mul_ivec2_uvec4_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005507 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005507 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005508, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005508 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_ivec2_uvec4_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005508 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005508 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005509, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005509 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.mul_ivec2_uvec4_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005509 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005509 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005510, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005510 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_ivec3_uint_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005510 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005510 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005511, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005511 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_ivec3_uint_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005511 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005511 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005512, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005512 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_ivec3_uint_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005512 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005512 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005513, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005513 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_ivec3_uint_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005513 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005513 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005514, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005514 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_ivec3_uvec2_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005514 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005514 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005515, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005515 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.mul_ivec3_uvec2_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005515 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005515 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005516, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005516 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_ivec3_uvec2_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005516 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005516 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005517, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005517 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.mul_ivec3_uvec2_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005517 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005517 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005518, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005518 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_ivec3_uvec3_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005518 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005518 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005519, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005519 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.mul_ivec3_uvec3_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005519 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005519 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005520, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005520 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_ivec3_uvec3_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005520 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005520 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005521, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005521 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.mul_ivec3_uvec3_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005521 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005521 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005522, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005522 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_ivec3_uvec4_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005522 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005522 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005523, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005523 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.mul_ivec3_uvec4_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005523 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005523 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005524, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005524 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_ivec3_uvec4_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005524 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005524 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005525, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005525 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.mul_ivec3_uvec4_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005525 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005525 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005526, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005526 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_ivec4_uint_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005526 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005526 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005527, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005527 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_ivec4_uint_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005527 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005527 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005528, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005528 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.mul_ivec4_uint_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005528 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005528 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005529, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005529 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_ivec4_uint_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005529 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005529 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005530, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005530 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_ivec4_uvec2_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005530 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005530 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005531, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005531 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.mul_ivec4_uvec2_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005531 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005531 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005532, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005532 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_ivec4_uvec2_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005532 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005532 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005533, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005533 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.mul_ivec4_uvec2_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005533 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005533 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005534, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005534 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_ivec4_uvec3_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005534 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005534 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005535, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005535 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.mul_ivec4_uvec3_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005535 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005535 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005536, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005536 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_ivec4_uvec3_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005536 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005536 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005537, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005537 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.mul_ivec4_uvec3_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005537 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005537 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005538, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005538 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_ivec4_uvec4_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005538 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005538 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005539, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005539 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.mul_ivec4_uvec4_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005539 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005539 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005540, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005540 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.mul_ivec4_uvec4_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005540 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005540 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005541, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005541 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.mul_ivec4_uvec4_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005541 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005541 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005542, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005542 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_float_int_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005542 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005542 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005543, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005543 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_float_int_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005543 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005543 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005544, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005544 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.sub_float_int_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005544 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005544 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005545, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005545 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_float_int_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005545 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005545 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005546, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005546 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_float_ivec2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005546 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005546 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005547, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005547 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.sub_float_ivec2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005547 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005547 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005548, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005548 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_float_ivec2_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005548 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005548 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005549, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005549 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.sub_float_ivec2_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005549 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005549 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005550, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005550 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_float_ivec3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005550 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005550 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005551, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005551 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.sub_float_ivec3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005551 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005551 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005552, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005552 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_float_ivec3_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005552 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005552 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005553, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005553 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.sub_float_ivec3_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005553 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005553 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005554, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005554 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_float_ivec4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005554 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005554 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005555, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005555 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.sub_float_ivec4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005555 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005555 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005556, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005556 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_float_ivec4_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005556 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005556 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005557, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005557 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.sub_float_ivec4_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005557 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005557 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005558, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005558 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.sub_vec2_int_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005558 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005558 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005559, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005559 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_vec2_int_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005559 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005559 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005560, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005560 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversi"
        "ons.invalid_implicit_conversions.sub_vec2_int_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005560 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005560 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005561, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005561 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.sub_vec2_int_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005561 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005561 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005562, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005562 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_vec2_ivec2_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005562 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005562 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005563, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005563 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_vec2_ivec2_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005563 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005563 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005564, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005564 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_vec2_ivec2_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005564 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005564 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005565, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005565 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_vec2_ivec2_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005565 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005565 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005566, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005566 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_vec2_ivec3_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005566 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005566 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005567, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005567 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_vec2_ivec3_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005567 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005567 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005568, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005568 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_vec2_ivec3_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005568 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005568 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005569, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005569 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_vec2_ivec3_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005569 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005569 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005570, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005570 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_vec2_ivec4_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005570 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005570 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005571, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005571 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_vec2_ivec4_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005571 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005571 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005572, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005572 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_vec2_ivec4_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005572 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005572 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005573, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005573 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_vec2_ivec4_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005573 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005573 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005574, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005574 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.sub_vec3_int_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005574 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005574 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005575, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005575 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_vec3_int_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005575 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005575 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005576, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005576 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversi"
        "ons.invalid_implicit_conversions.sub_vec3_int_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005576 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005576 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005577, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005577 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.sub_vec3_int_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005577 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005577 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005578, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005578 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_vec3_ivec2_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005578 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005578 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005579, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005579 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_vec3_ivec2_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005579 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005579 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005580, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005580 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_vec3_ivec2_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005580 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005580 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005581, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005581 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_vec3_ivec2_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005581 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005581 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005582, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005582 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_vec3_ivec3_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005582 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005582 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005583, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005583 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_vec3_ivec3_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005583 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005583 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005584, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005584 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_vec3_ivec3_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005584 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005584 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005585, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005585 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_vec3_ivec3_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005585 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005585 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005586, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005586 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_vec3_ivec4_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005586 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005586 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005587, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005587 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_vec3_ivec4_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005587 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005587 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005588, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005588 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_vec3_ivec4_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005588 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005588 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005589, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005589 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_vec3_ivec4_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005589 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005589 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005590, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005590 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.sub_vec4_int_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005590 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005590 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005591, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005591 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_vec4_int_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005591 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005591 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005592, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005592 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversi"
        "ons.invalid_implicit_conversions.sub_vec4_int_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005592 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005592 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005593, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005593 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.sub_vec4_int_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005593 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005593 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005594, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005594 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_vec4_ivec2_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005594 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005594 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005595, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005595 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_vec4_ivec2_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005595 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005595 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005596, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005596 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_vec4_ivec2_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005596 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005596 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005597, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005597 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_vec4_ivec2_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005597 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005597 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005598, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005598 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_vec4_ivec3_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005598 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005598 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005599, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005599 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_vec4_ivec3_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005599 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005599 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005600, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005600 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_vec4_ivec3_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005600 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005600 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005601, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005601 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_vec4_ivec3_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005601 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005601 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005602, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005602 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_vec4_ivec4_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005602 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005602 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005603, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005603 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_vec4_ivec4_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005603 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005603 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005604, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005604 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_vec4_ivec4_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005604 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005604 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005605, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005605 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_vec4_ivec4_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005605 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005605 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005606, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005606 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_float_uint_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005606 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005606 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005607, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005607 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_float_uint_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005607 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005607 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005608, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005608 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_float_uint_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005608 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005608 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005609, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005609 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_float_uint_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005609 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005609 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005610, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005610 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_float_uvec2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005610 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005610 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005611, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005611 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.sub_float_uvec2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005611 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005611 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005612, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005612 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_float_uvec2_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005612 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005612 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005613, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005613 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.sub_float_uvec2_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005613 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005613 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005614, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005614 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_float_uvec3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005614 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005614 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005615, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005615 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.sub_float_uvec3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005615 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005615 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005616, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005616 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_float_uvec3_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005616 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005616 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005617, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005617 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.sub_float_uvec3_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005617 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005617 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005618, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005618 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_float_uvec4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005618 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005618 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005619, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005619 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.sub_float_uvec4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005619 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005619 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005620, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005620 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_float_uvec4_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005620 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005620 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005621, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005621 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.sub_float_uvec4_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005621 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005621 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005622, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005622 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.sub_vec2_uint_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005622 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005622 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005623, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005623 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_vec2_uint_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005623 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005623 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005624, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005624 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.sub_vec2_uint_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005624 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005624 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005625, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005625 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_vec2_uint_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005625 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005625 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005626, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005626 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_vec2_uvec2_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005626 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005626 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005627, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005627 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_vec2_uvec2_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005627 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005627 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005628, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005628 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_vec2_uvec2_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005628 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005628 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005629, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005629 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_vec2_uvec2_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005629 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005629 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005630, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005630 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_vec2_uvec3_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005630 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005630 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005631, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005631 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_vec2_uvec3_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005631 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005631 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005632, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005632 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_vec2_uvec3_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005632 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005632 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005633, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005633 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_vec2_uvec3_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005633 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005633 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005634, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005634 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_vec2_uvec4_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005634 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005634 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005635, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005635 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_vec2_uvec4_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005635 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005635 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005636, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005636 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_vec2_uvec4_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005636 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005636 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005637, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005637 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_vec2_uvec4_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005637 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005637 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005638, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005638 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.sub_vec3_uint_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005638 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005638 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005639, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005639 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_vec3_uint_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005639 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005639 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005640, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005640 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.sub_vec3_uint_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005640 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005640 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005641, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005641 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_vec3_uint_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005641 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005641 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005642, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005642 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_vec3_uvec2_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005642 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005642 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005643, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005643 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_vec3_uvec2_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005643 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005643 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005644, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005644 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_vec3_uvec2_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005644 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005644 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005645, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005645 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_vec3_uvec2_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005645 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005645 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005646, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005646 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_vec3_uvec3_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005646 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005646 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005647, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005647 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_vec3_uvec3_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005647 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005647 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005648, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005648 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_vec3_uvec3_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005648 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005648 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005649, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005649 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_vec3_uvec3_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005649 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005649 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005650, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005650 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_vec3_uvec4_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005650 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005650 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005651, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005651 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_vec3_uvec4_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005651 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005651 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005652, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005652 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_vec3_uvec4_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005652 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005652 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005653, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005653 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_vec3_uvec4_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005653 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005653 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005654, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005654 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.sub_vec4_uint_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005654 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005654 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005655, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005655 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_vec4_uint_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005655 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005655 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005656, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005656 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.sub_vec4_uint_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005656 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005656 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005657, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005657 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_vec4_uint_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005657 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005657 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005658, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005658 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_vec4_uvec2_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005658 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005658 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005659, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005659 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_vec4_uvec2_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005659 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005659 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005660, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005660 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_vec4_uvec2_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005660 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005660 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005661, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005661 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_vec4_uvec2_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005661 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005661 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005662, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005662 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_vec4_uvec3_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005662 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005662 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005663, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005663 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_vec4_uvec3_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005663 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005663 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005664, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005664 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_vec4_uvec3_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005664 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005664 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005665, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005665 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_vec4_uvec3_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005665 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005665 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005666, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005666 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_vec4_uvec4_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005666 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005666 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005667, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005667 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_vec4_uvec4_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005667 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005667 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005668, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005668 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_vec4_uvec4_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005668 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005668 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005669, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005669 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_vec4_uvec4_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005669 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005669 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005670, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005670 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversi"
        "ons.invalid_implicit_conversions.sub_int_uint_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005670 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005670 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005671, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005671 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.sub_int_uint_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005671 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005671 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005672, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005672 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.sub_int_uint_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005672 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005672 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005673, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005673 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_int_uint_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005673 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005673 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005674, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005674 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.sub_int_uvec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005674 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005674 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005675, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005675 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_int_uvec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005675 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005675 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005676, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005676 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_int_uvec2_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005676 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005676 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005677, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005677 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_int_uvec2_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005677 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005677 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005678, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005678 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.sub_int_uvec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005678 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005678 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005679, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005679 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_int_uvec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005679 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005679 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005680, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005680 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_int_uvec3_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005680 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005680 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005681, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005681 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_int_uvec3_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005681 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005681 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005682, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005682 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.sub_int_uvec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005682 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005682 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005683, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005683 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_int_uvec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005683 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005683 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005684, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005684 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_int_uvec4_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005684 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005684 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005685, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005685 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_int_uvec4_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005685 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005685 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005686, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005686 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_ivec2_uint_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005686 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005686 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005687, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005687 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_ivec2_uint_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005687 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005687 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005688, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005688 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_ivec2_uint_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005688 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005688 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005689, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005689 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_ivec2_uint_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005689 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005689 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005690, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005690 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_ivec2_uvec2_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005690 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005690 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005691, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005691 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.sub_ivec2_uvec2_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005691 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005691 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005692, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005692 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_ivec2_uvec2_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005692 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005692 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005693, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005693 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.sub_ivec2_uvec2_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005693 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005693 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005694, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005694 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_ivec2_uvec3_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005694 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005694 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005695, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005695 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.sub_ivec2_uvec3_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005695 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005695 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005696, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005696 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_ivec2_uvec3_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005696 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005696 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005697, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005697 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.sub_ivec2_uvec3_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005697 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005697 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005698, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005698 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_ivec2_uvec4_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005698 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005698 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005699, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005699 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.sub_ivec2_uvec4_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005699 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005699 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005700, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005700 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_ivec2_uvec4_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005700 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005700 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005701, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005701 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.sub_ivec2_uvec4_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005701 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005701 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005702, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005702 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_ivec3_uint_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005702 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005702 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005703, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005703 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_ivec3_uint_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005703 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005703 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005704, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005704 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_ivec3_uint_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005704 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005704 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005705, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005705 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_ivec3_uint_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005705 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005705 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005706, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005706 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_ivec3_uvec2_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005706 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005706 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005707, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005707 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.sub_ivec3_uvec2_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005707 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005707 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005708, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005708 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_ivec3_uvec2_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005708 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005708 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005709, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005709 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.sub_ivec3_uvec2_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005709 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005709 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005710, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005710 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_ivec3_uvec3_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005710 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005710 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005711, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005711 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.sub_ivec3_uvec3_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005711 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005711 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005712, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005712 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_ivec3_uvec3_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005712 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005712 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005713, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005713 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.sub_ivec3_uvec3_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005713 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005713 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005714, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005714 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_ivec3_uvec4_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005714 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005714 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005715, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005715 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.sub_ivec3_uvec4_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005715 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005715 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005716, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005716 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_ivec3_uvec4_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005716 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005716 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005717, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005717 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.sub_ivec3_uvec4_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005717 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005717 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005718, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005718 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_ivec4_uint_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005718 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005718 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005719, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005719 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_ivec4_uint_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005719 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005719 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005720, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005720 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.sub_ivec4_uint_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005720 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005720 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005721, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005721 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_ivec4_uint_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005721 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005721 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005722, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005722 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_ivec4_uvec2_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005722 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005722 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005723, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005723 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.sub_ivec4_uvec2_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005723 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005723 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005724, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005724 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_ivec4_uvec2_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005724 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005724 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005725, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005725 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.sub_ivec4_uvec2_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005725 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005725 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005726, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005726 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_ivec4_uvec3_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005726 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005726 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005727, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005727 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.sub_ivec4_uvec3_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005727 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005727 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005728, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005728 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_ivec4_uvec3_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005728 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005728 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005729, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005729 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.sub_ivec4_uvec3_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005729 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005729 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005730, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005730 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_ivec4_uvec4_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005730 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005730 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005731, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005731 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.sub_ivec4_uvec4_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005731 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005731 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005732, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005732 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.sub_ivec4_uvec4_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005732 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005732 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005733, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005733 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.sub_ivec4_uvec4_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005733 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005733 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005734, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005734 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_float_int_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005734 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005734 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005735, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005735 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_float_int_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005735 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005735 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005736, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005736 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.div_float_int_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005736 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005736 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005737, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005737 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_float_int_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005737 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005737 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005738, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005738 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_float_ivec2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005738 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005738 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005739, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005739 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.div_float_ivec2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005739 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005739 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005740, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005740 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_float_ivec2_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005740 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005740 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005741, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005741 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.div_float_ivec2_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005741 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005741 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005742, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005742 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_float_ivec3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005742 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005742 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005743, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005743 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.div_float_ivec3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005743 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005743 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005744, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005744 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_float_ivec3_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005744 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005744 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005745, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005745 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.div_float_ivec3_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005745 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005745 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005746, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005746 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_float_ivec4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005746 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005746 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005747, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005747 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.div_float_ivec4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005747 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005747 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005748, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005748 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_float_ivec4_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005748 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005748 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005749, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005749 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.div_float_ivec4_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005749 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005749 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005750, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005750 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.div_vec2_int_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005750 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005750 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005751, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005751 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_vec2_int_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005751 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005751 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005752, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005752 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversi"
        "ons.invalid_implicit_conversions.div_vec2_int_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005752 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005752 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005753, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005753 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.div_vec2_int_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005753 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005753 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005754, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005754 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_vec2_ivec2_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005754 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005754 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005755, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005755 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_vec2_ivec2_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005755 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005755 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005756, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005756 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_vec2_ivec2_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005756 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005756 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005757, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005757 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_vec2_ivec2_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005757 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005757 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005758, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005758 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_vec2_ivec3_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005758 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005758 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005759, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005759 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_vec2_ivec3_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005759 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005759 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005760, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005760 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_vec2_ivec3_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005760 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005760 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005761, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005761 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_vec2_ivec3_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005761 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005761 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005762, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005762 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_vec2_ivec4_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005762 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005762 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005763, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005763 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_vec2_ivec4_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005763 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005763 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005764, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005764 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_vec2_ivec4_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005764 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005764 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005765, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005765 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_vec2_ivec4_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005765 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005765 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005766, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005766 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.div_vec3_int_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005766 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005766 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005767, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005767 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_vec3_int_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005767 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005767 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005768, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005768 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversi"
        "ons.invalid_implicit_conversions.div_vec3_int_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005768 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005768 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005769, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005769 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.div_vec3_int_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005769 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005769 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005770, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005770 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_vec3_ivec2_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005770 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005770 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005771, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005771 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_vec3_ivec2_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005771 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005771 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005772, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005772 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_vec3_ivec2_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005772 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005772 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005773, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005773 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_vec3_ivec2_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005773 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005773 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005774, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005774 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_vec3_ivec3_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005774 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005774 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005775, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005775 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_vec3_ivec3_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005775 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005775 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005776, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005776 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_vec3_ivec3_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005776 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005776 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005777, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005777 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_vec3_ivec3_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005777 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005777 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005778, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005778 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_vec3_ivec4_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005778 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005778 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005779, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005779 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_vec3_ivec4_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005779 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005779 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005780, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005780 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_vec3_ivec4_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005780 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005780 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005781, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005781 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_vec3_ivec4_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005781 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005781 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005782, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005782 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.div_vec4_int_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005782 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005782 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005783, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005783 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_vec4_int_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005783 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005783 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005784, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005784 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversi"
        "ons.invalid_implicit_conversions.div_vec4_int_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005784 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005784 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005785, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005785 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.div_vec4_int_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005785 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005785 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005786, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005786 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_vec4_ivec2_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005786 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005786 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005787, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005787 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_vec4_ivec2_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005787 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005787 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005788, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005788 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_vec4_ivec2_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005788 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005788 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005789, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005789 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_vec4_ivec2_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005789 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005789 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005790, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005790 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_vec4_ivec3_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005790 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005790 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005791, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005791 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_vec4_ivec3_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005791 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005791 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005792, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005792 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_vec4_ivec3_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005792 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005792 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005793, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005793 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_vec4_ivec3_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005793 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005793 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005794, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005794 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_vec4_ivec4_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005794 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005794 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005795, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005795 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_vec4_ivec4_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005795 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005795 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005796, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005796 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_vec4_ivec4_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005796 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005796 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005797, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005797 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_vec4_ivec4_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005797 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005797 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005798, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005798 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_float_uint_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005798 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005798 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005799, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005799 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_float_uint_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005799 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005799 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005800, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005800 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_float_uint_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005800 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005800 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005801, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005801 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_float_uint_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005801 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005801 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005802, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005802 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_float_uvec2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005802 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005802 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005803, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005803 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.div_float_uvec2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005803 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005803 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005804, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005804 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_float_uvec2_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005804 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005804 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005805, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005805 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.div_float_uvec2_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005805 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005805 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005806, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005806 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_float_uvec3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005806 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005806 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005807, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005807 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.div_float_uvec3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005807 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005807 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005808, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005808 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_float_uvec3_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005808 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005808 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005809, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005809 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.div_float_uvec3_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005809 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005809 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005810, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005810 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_float_uvec4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005810 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005810 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005811, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005811 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.div_float_uvec4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005811 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005811 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005812, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005812 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_float_uvec4_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005812 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005812 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005813, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005813 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.div_float_uvec4_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005813 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005813 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005814, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005814 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.div_vec2_uint_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005814 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005814 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005815, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005815 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_vec2_uint_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005815 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005815 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005816, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005816 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.div_vec2_uint_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005816 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005816 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005817, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005817 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_vec2_uint_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005817 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005817 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005818, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005818 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_vec2_uvec2_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005818 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005818 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005819, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005819 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_vec2_uvec2_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005819 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005819 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005820, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005820 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_vec2_uvec2_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005820 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005820 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005821, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005821 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_vec2_uvec2_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005821 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005821 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005822, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005822 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_vec2_uvec3_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005822 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005822 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005823, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005823 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_vec2_uvec3_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005823 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005823 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005824, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005824 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_vec2_uvec3_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005824 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005824 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005825, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005825 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_vec2_uvec3_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005825 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005825 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005826, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005826 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_vec2_uvec4_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005826 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005826 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005827, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005827 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_vec2_uvec4_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005827 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005827 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005828, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005828 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_vec2_uvec4_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005828 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005828 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005829, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005829 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_vec2_uvec4_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005829 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005829 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005830, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005830 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.div_vec3_uint_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005830 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005830 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005831, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005831 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_vec3_uint_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005831 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005831 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005832, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005832 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.div_vec3_uint_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005832 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005832 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005833, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005833 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_vec3_uint_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005833 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005833 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005834, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005834 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_vec3_uvec2_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005834 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005834 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005835, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005835 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_vec3_uvec2_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005835 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005835 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005836, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005836 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_vec3_uvec2_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005836 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005836 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005837, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005837 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_vec3_uvec2_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005837 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005837 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005838, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005838 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_vec3_uvec3_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005838 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005838 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005839, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005839 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_vec3_uvec3_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005839 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005839 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005840, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005840 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_vec3_uvec3_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005840 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005840 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005841, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005841 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_vec3_uvec3_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005841 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005841 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005842, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005842 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_vec3_uvec4_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005842 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005842 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005843, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005843 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_vec3_uvec4_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005843 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005843 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005844, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005844 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_vec3_uvec4_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005844 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005844 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005845, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005845 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_vec3_uvec4_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005845 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005845 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005846, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005846 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.div_vec4_uint_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005846 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005846 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005847, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005847 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_vec4_uint_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005847 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005847 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005848, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005848 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.div_vec4_uint_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005848 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005848 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005849, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005849 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_vec4_uint_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005849 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005849 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005850, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005850 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_vec4_uvec2_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005850 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005850 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005851, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005851 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_vec4_uvec2_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005851 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005851 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005852, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005852 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_vec4_uvec2_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005852 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005852 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005853, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005853 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_vec4_uvec2_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005853 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005853 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005854, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005854 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_vec4_uvec3_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005854 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005854 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005855, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005855 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_vec4_uvec3_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005855 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005855 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005856, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005856 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_vec4_uvec3_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005856 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005856 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005857, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005857 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_vec4_uvec3_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005857 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005857 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005858, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005858 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_vec4_uvec4_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005858 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005858 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005859, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005859 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_vec4_uvec4_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005859 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005859 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005860, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005860 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_vec4_uvec4_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005860 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005860 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005861, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005861 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_vec4_uvec4_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005861 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005861 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005862, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005862 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversi"
        "ons.invalid_implicit_conversions.div_int_uint_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005862 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005862 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005863, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005863 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.div_int_uint_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005863 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005863 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005864, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005864 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.div_int_uint_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005864 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005864 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005865, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005865 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_int_uint_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005865 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005865 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005866, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005866 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.div_int_uvec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005866 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005866 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005867, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005867 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_int_uvec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005867 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005867 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005868, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005868 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_int_uvec2_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005868 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005868 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005869, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005869 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_int_uvec2_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005869 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005869 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005870, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005870 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.div_int_uvec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005870 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005870 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005871, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005871 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_int_uvec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005871 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005871 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005872, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005872 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_int_uvec3_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005872 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005872 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005873, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005873 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_int_uvec3_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005873 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005873 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005874, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005874 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.div_int_uvec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005874 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005874 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005875, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005875 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_int_uvec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005875 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005875 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005876, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005876 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_int_uvec4_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005876 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005876 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005877, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005877 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_int_uvec4_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005877 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005877 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005878, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005878 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_ivec2_uint_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005878 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005878 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005879, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005879 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_ivec2_uint_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005879 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005879 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005880, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005880 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_ivec2_uint_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005880 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005880 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005881, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005881 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_ivec2_uint_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005881 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005881 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005882, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005882 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_ivec2_uvec2_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005882 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005882 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005883, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005883 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.div_ivec2_uvec2_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005883 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005883 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005884, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005884 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_ivec2_uvec2_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005884 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005884 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005885, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005885 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.div_ivec2_uvec2_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005885 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005885 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005886, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005886 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_ivec2_uvec3_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005886 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005886 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005887, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005887 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.div_ivec2_uvec3_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005887 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005887 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005888, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005888 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_ivec2_uvec3_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005888 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005888 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005889, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005889 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.div_ivec2_uvec3_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005889 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005889 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005890, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005890 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_ivec2_uvec4_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005890 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005890 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005891, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005891 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.div_ivec2_uvec4_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005891 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005891 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005892, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005892 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_ivec2_uvec4_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005892 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005892 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005893, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005893 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.div_ivec2_uvec4_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005893 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005893 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005894, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005894 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_ivec3_uint_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005894 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005894 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005895, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005895 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_ivec3_uint_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005895 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005895 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005896, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005896 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_ivec3_uint_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005896 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005896 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005897, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005897 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_ivec3_uint_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005897 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005897 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005898, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005898 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_ivec3_uvec2_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005898 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005898 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005899, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005899 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.div_ivec3_uvec2_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005899 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005899 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005900, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005900 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_ivec3_uvec2_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005900 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005900 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005901, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005901 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.div_ivec3_uvec2_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005901 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005901 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005902, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005902 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_ivec3_uvec3_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005902 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005902 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005903, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005903 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.div_ivec3_uvec3_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005903 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005903 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005904, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005904 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_ivec3_uvec3_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005904 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005904 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005905, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005905 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.div_ivec3_uvec3_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005905 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005905 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005906, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005906 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_ivec3_uvec4_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005906 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005906 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005907, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005907 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.div_ivec3_uvec4_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005907 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005907 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005908, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005908 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_ivec3_uvec4_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005908 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005908 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005909, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005909 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.div_ivec3_uvec4_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005909 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005909 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005910, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005910 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_ivec4_uint_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005910 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005910 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005911, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005911 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_ivec4_uint_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005911 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005911 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005912, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005912 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.div_ivec4_uint_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005912 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005912 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005913, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005913 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_ivec4_uint_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005913 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005913 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005914, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005914 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_ivec4_uvec2_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005914 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005914 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005915, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005915 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.div_ivec4_uvec2_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005915 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005915 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005916, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005916 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_ivec4_uvec2_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005916 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005916 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005917, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005917 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.div_ivec4_uvec2_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005917 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005917 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005918, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005918 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_ivec4_uvec3_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005918 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005918 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005919, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005919 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.div_ivec4_uvec3_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005919 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005919 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005920, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005920 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_ivec4_uvec3_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005920 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005920 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005921, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005921 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.div_ivec4_uvec3_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005921 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005921 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005922, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005922 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_ivec4_uvec4_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005922 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005922 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005923, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005923 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.div_ivec4_uvec4_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005923 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005923 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005924, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005924 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.div_ivec4_uvec4_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005924 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005924 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005925, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005925 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.div_ivec4_uvec4_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005925 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005925 end";
}
