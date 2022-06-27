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
#include "../ActsDeqpgles30034TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033253, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033253 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribut"
        "e.output_types.unsigned_int.components2_vec2_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033253 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033253 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033254, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033254 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribute"
        ".output_types.unsigned_int.components2_vec2_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033254 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033254 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033255, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033255 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribut"
        "e.output_types.unsigned_int.components3_vec2_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033255 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033255 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033256, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033256 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribute"
        ".output_types.unsigned_int.components3_vec2_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033256 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033256 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033257, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033257 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribut"
        "e.output_types.unsigned_int.components4_vec2_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033257 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033257 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033258, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033258 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribute"
        ".output_types.unsigned_int.components4_vec2_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033258 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033258 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033259, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033259 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribut"
        "e.output_types.unsigned_int.components2_vec3_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033259 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033259 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033260, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033260 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribute"
        ".output_types.unsigned_int.components2_vec3_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033260 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033260 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033261, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033261 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribut"
        "e.output_types.unsigned_int.components3_vec3_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033261 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033261 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033262, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033262 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribute"
        ".output_types.unsigned_int.components3_vec3_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033262 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033262 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033263, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033263 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribut"
        "e.output_types.unsigned_int.components4_vec3_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033263 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033263 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033264, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033264 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribute"
        ".output_types.unsigned_int.components4_vec3_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033264 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033264 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033265, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033265 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribut"
        "e.output_types.unsigned_int.components2_vec4_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033265 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033265 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033266, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033266 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribute"
        ".output_types.unsigned_int.components2_vec4_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033266 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033266 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033267, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033267 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribut"
        "e.output_types.unsigned_int.components3_vec4_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033267 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033267 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033268, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033268 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribute"
        ".output_types.unsigned_int.components3_vec4_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033268 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033268 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033269, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033269 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribut"
        "e.output_types.unsigned_int.components4_vec4_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033269 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033269 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033270, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033270 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribute"
        ".output_types.unsigned_int.components4_vec4_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033270 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033270 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033271, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033271 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribut"
        "e.output_types.unsigned_int.components2_uvec2_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033271 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033271 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033272, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033272 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribute"
        ".output_types.unsigned_int.components2_uvec2_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033272 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033272 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033273, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033273 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribut"
        "e.output_types.unsigned_int.components3_uvec2_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033273 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033273 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033274, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033274 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribute"
        ".output_types.unsigned_int.components3_uvec2_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033274 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033274 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033275, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033275 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribut"
        "e.output_types.unsigned_int.components4_uvec2_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033275 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033275 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033276, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033276 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribute"
        ".output_types.unsigned_int.components4_uvec2_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033276 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033276 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033277, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033277 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribut"
        "e.output_types.unsigned_int.components2_uvec3_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033277 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033277 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033278, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033278 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribute"
        ".output_types.unsigned_int.components2_uvec3_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033278 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033278 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033279, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033279 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribut"
        "e.output_types.unsigned_int.components3_uvec3_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033279 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033279 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033280, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033280 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribute"
        ".output_types.unsigned_int.components3_uvec3_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033280 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033280 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033281, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033281 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribut"
        "e.output_types.unsigned_int.components4_uvec3_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033281 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033281 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033282, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033282 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribute"
        ".output_types.unsigned_int.components4_uvec3_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033282 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033282 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033283, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033283 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribut"
        "e.output_types.unsigned_int.components2_uvec4_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033283 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033283 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033284, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033284 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribute"
        ".output_types.unsigned_int.components2_uvec4_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033284 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033284 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033285, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033285 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribut"
        "e.output_types.unsigned_int.components3_uvec4_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033285 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033285 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033286, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033286 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribute"
        ".output_types.unsigned_int.components3_uvec4_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033286 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033286 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033287, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033287 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribut"
        "e.output_types.unsigned_int.components4_uvec4_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033287 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033287 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033288, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033288 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribute"
        ".output_types.unsigned_int.components4_uvec4_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033288 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033288 end";
}
