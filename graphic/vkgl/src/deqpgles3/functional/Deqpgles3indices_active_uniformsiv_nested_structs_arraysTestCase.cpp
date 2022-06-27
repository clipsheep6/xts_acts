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
#include "../ActsDeqpgles30037TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036646, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036646 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.info_query.indices_ac"
        "tive_uniformsiv.nested_structs_arrays.float_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036646 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036646 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036647, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036647 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.info_query.indices_act"
        "ive_uniformsiv.nested_structs_arrays.float_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036647 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036647 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036648, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036648 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.info_query.indices_a"
        "ctive_uniformsiv.nested_structs_arrays.float_vec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036648 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036648 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036649, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036649 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.info_query.indices_a"
        "ctive_uniformsiv.nested_structs_arrays.mat4_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036649 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036649 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036650, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036650 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.info_query.indices_ac"
        "tive_uniformsiv.nested_structs_arrays.mat4_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036650 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036650 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036651, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036651 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.info_query.indices_"
        "active_uniformsiv.nested_structs_arrays.mat4_mat2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036651 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036651 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036652, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036652 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.info_query.indices_a"
        "ctive_uniformsiv.nested_structs_arrays.int_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036652 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036652 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036653, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036653 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.info_query.indices_ac"
        "tive_uniformsiv.nested_structs_arrays.int_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036653 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036653 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036654, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036654 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.info_query.indices_"
        "active_uniformsiv.nested_structs_arrays.int_ivec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036654 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036654 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036655, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036655 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.info_query.indices_ac"
        "tive_uniformsiv.nested_structs_arrays.uint_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036655 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036655 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036656, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036656 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.info_query.indices_act"
        "ive_uniformsiv.nested_structs_arrays.uint_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036656 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036656 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036657, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036657 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.info_query.indices_a"
        "ctive_uniformsiv.nested_structs_arrays.uint_uvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036657 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036657 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036658, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036658 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.info_query.indices_ac"
        "tive_uniformsiv.nested_structs_arrays.bool_bvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036658 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036658 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036659, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036659 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.info_query.indices_act"
        "ive_uniformsiv.nested_structs_arrays.bool_bvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036659 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036659 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036660, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036660 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.info_query.indices_a"
        "ctive_uniformsiv.nested_structs_arrays.bool_bvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036660 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036660 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036661, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036661 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.info_query.indices_active_"
        "uniformsiv.nested_structs_arrays.sampler2D_samplerCube_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036661 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036661 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036662, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036662 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.info_query.indices_active_u"
        "niformsiv.nested_structs_arrays.sampler2D_samplerCube_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036662 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036662 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036663, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036663 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.info_query.indices_active"
        "_uniformsiv.nested_structs_arrays.sampler2D_samplerCube_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036663 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036663 end";
}
