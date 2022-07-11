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

<<<<<<< HEAD
#include <climits>
#include <gtest/gtest.h>
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30038TestSuite.h"
#include "shrinkdefine.h"
=======
#include <gtest/gtest.h>
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30038TestSuite.h"
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87

using namespace std;
using namespace testing::ext;
using namespace OHOS;

<<<<<<< HEAD
#define VkglTestCase_037255_1 "dEQP-GLES3.functional.uniform_api.value.init"
#define VkglTestCase_037255_2 "ial.render.struct_in_array.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037255, VkglTestCase_037255_1, VkglTestCase_037255_2);

#define VkglTestCase_037256_1 "dEQP-GLES3.functional.uniform_api.value.initi"
#define VkglTestCase_037256_2 "al.render.struct_in_array.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037256, VkglTestCase_037256_1, VkglTestCase_037256_2);

#define VkglTestCase_037257_1 "dEQP-GLES3.functional.uniform_api.value.ini"
#define VkglTestCase_037257_2 "tial.render.struct_in_array.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037257, VkglTestCase_037257_1, VkglTestCase_037257_2);

#define VkglTestCase_037258_1 "dEQP-GLES3.functional.uniform_api.value.ini"
#define VkglTestCase_037258_2 "tial.render.struct_in_array.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037258, VkglTestCase_037258_1, VkglTestCase_037258_2);

#define VkglTestCase_037259_1 "dEQP-GLES3.functional.uniform_api.value.init"
#define VkglTestCase_037259_2 "ial.render.struct_in_array.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037259, VkglTestCase_037259_1, VkglTestCase_037259_2);

#define VkglTestCase_037260_1 "dEQP-GLES3.functional.uniform_api.value.in"
#define VkglTestCase_037260_2 "itial.render.struct_in_array.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037260, VkglTestCase_037260_1, VkglTestCase_037260_2);

#define VkglTestCase_037261_1 "dEQP-GLES3.functional.uniform_api.value.ini"
#define VkglTestCase_037261_2 "tial.render.struct_in_array.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037261, VkglTestCase_037261_1, VkglTestCase_037261_2);

#define VkglTestCase_037262_1 "dEQP-GLES3.functional.uniform_api.value.init"
#define VkglTestCase_037262_2 "ial.render.struct_in_array.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037262, VkglTestCase_037262_1, VkglTestCase_037262_2);

#define VkglTestCase_037263_1 "dEQP-GLES3.functional.uniform_api.value.in"
#define VkglTestCase_037263_2 "itial.render.struct_in_array.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037263, VkglTestCase_037263_1, VkglTestCase_037263_2);

#define VkglTestCase_037264_1 "dEQP-GLES3.functional.uniform_api.value.init"
#define VkglTestCase_037264_2 "ial.render.struct_in_array.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037264, VkglTestCase_037264_1, VkglTestCase_037264_2);

#define VkglTestCase_037265_1 "dEQP-GLES3.functional.uniform_api.value.initi"
#define VkglTestCase_037265_2 "al.render.struct_in_array.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037265, VkglTestCase_037265_1, VkglTestCase_037265_2);

#define VkglTestCase_037266_1 "dEQP-GLES3.functional.uniform_api.value.ini"
#define VkglTestCase_037266_2 "tial.render.struct_in_array.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037266, VkglTestCase_037266_1, VkglTestCase_037266_2);

#define VkglTestCase_037267_1 "dEQP-GLES3.functional.uniform_api.value.init"
#define VkglTestCase_037267_2 "ial.render.struct_in_array.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037267, VkglTestCase_037267_1, VkglTestCase_037267_2);

#define VkglTestCase_037268_1 "dEQP-GLES3.functional.uniform_api.value.initi"
#define VkglTestCase_037268_2 "al.render.struct_in_array.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037268, VkglTestCase_037268_1, VkglTestCase_037268_2);

#define VkglTestCase_037269_1 "dEQP-GLES3.functional.uniform_api.value.ini"
#define VkglTestCase_037269_2 "tial.render.struct_in_array.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037269, VkglTestCase_037269_1, VkglTestCase_037269_2);

#define VkglTestCase_037771_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037771_2 "y_pointer.render.struct_in_array.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037771, VkglTestCase_037771_1, VkglTestCase_037771_2);

#define VkglTestCase_037772_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037772_2 "_pointer.render.struct_in_array.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037772, VkglTestCase_037772_1, VkglTestCase_037772_2);

#define VkglTestCase_037773_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037773_2 "by_pointer.render.struct_in_array.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037773, VkglTestCase_037773_1, VkglTestCase_037773_2);

#define VkglTestCase_037774_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037774_2 "by_pointer.render.struct_in_array.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037774, VkglTestCase_037774_1, VkglTestCase_037774_2);

#define VkglTestCase_037775_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037775_2 "y_pointer.render.struct_in_array.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037775, VkglTestCase_037775_1, VkglTestCase_037775_2);

#define VkglTestCase_037776_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037776_2 ".by_pointer.render.struct_in_array.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037776, VkglTestCase_037776_1, VkglTestCase_037776_2);

#define VkglTestCase_037777_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037777_2 "by_pointer.render.struct_in_array.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037777, VkglTestCase_037777_1, VkglTestCase_037777_2);

#define VkglTestCase_037778_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037778_2 "y_pointer.render.struct_in_array.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037778, VkglTestCase_037778_1, VkglTestCase_037778_2);

#define VkglTestCase_037779_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037779_2 ".by_pointer.render.struct_in_array.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037779, VkglTestCase_037779_1, VkglTestCase_037779_2);

#define VkglTestCase_037780_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037780_2 "y_pointer.render.struct_in_array.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037780, VkglTestCase_037780_1, VkglTestCase_037780_2);

#define VkglTestCase_037781_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037781_2 "_pointer.render.struct_in_array.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037781, VkglTestCase_037781_1, VkglTestCase_037781_2);

#define VkglTestCase_037782_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037782_2 "by_pointer.render.struct_in_array.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037782, VkglTestCase_037782_1, VkglTestCase_037782_2);

#define VkglTestCase_037783_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037783_2 "y_pointer.render.struct_in_array.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037783, VkglTestCase_037783_1, VkglTestCase_037783_2);

#define VkglTestCase_037784_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037784_2 "_pointer.render.struct_in_array.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037784, VkglTestCase_037784_1, VkglTestCase_037784_2);

#define VkglTestCase_037785_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037785_2 "by_pointer.render.struct_in_array.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037785, VkglTestCase_037785_1, VkglTestCase_037785_2);

#define VkglTestCase_037786_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_poi"
#define VkglTestCase_037786_2 "nter.render.struct_in_array.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037786, VkglTestCase_037786_1, VkglTestCase_037786_2);

#define VkglTestCase_037787_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_poin"
#define VkglTestCase_037787_2 "ter.render.struct_in_array.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037787, VkglTestCase_037787_1, VkglTestCase_037787_2);

#define VkglTestCase_037788_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_po"
#define VkglTestCase_037788_2 "inter.render.struct_in_array.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037788, VkglTestCase_037788_1, VkglTestCase_037788_2);

#define VkglTestCase_038152_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_038152_2 "by_value.render.struct_in_array.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038152, VkglTestCase_038152_1, VkglTestCase_038152_2);

#define VkglTestCase_038153_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_038153_2 "y_value.render.struct_in_array.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038153, VkglTestCase_038153_1, VkglTestCase_038153_2);

#define VkglTestCase_038154_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_038154_2 ".by_value.render.struct_in_array.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038154, VkglTestCase_038154_1, VkglTestCase_038154_2);

#define VkglTestCase_038155_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_038155_2 ".by_value.render.struct_in_array.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038155, VkglTestCase_038155_1, VkglTestCase_038155_2);

#define VkglTestCase_038156_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_038156_2 "by_value.render.struct_in_array.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038156, VkglTestCase_038156_1, VkglTestCase_038156_2);

#define VkglTestCase_038157_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_038157_2 "d.by_value.render.struct_in_array.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038157, VkglTestCase_038157_1, VkglTestCase_038157_2);

#define VkglTestCase_038158_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_038158_2 "by_value.render.struct_in_array.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038158, VkglTestCase_038158_1, VkglTestCase_038158_2);

#define VkglTestCase_038159_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_038159_2 "y_value.render.struct_in_array.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038159, VkglTestCase_038159_1, VkglTestCase_038159_2);

#define VkglTestCase_038160_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_038160_2 ".by_value.render.struct_in_array.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038160, VkglTestCase_038160_1, VkglTestCase_038160_2);

#define VkglTestCase_038161_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_038161_2 "by_value.render.struct_in_array.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038161, VkglTestCase_038161_1, VkglTestCase_038161_2);

#define VkglTestCase_038162_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_038162_2 "y_value.render.struct_in_array.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038162, VkglTestCase_038162_1, VkglTestCase_038162_2);

#define VkglTestCase_038163_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_038163_2 ".by_value.render.struct_in_array.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038163, VkglTestCase_038163_1, VkglTestCase_038163_2);

#define VkglTestCase_038164_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_va"
#define VkglTestCase_038164_2 "lue.render.struct_in_array.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038164, VkglTestCase_038164_1, VkglTestCase_038164_2);

#define VkglTestCase_038165_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_val"
#define VkglTestCase_038165_2 "ue.render.struct_in_array.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038165, VkglTestCase_038165_1, VkglTestCase_038165_2);

#define VkglTestCase_038166_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_v"
#define VkglTestCase_038166_2 "alue.render.struct_in_array.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038166, VkglTestCase_038166_1, VkglTestCase_038166_2);
=======
static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037255, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037255 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.init"
        "ial.render.struct_in_array.float_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037255 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037255 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037256, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037256 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.initi"
        "al.render.struct_in_array.float_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037256 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037256 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037257, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037257 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.ini"
        "tial.render.struct_in_array.float_vec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037257 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037257 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037258, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037258 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.ini"
        "tial.render.struct_in_array.mat4_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037258 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037258 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037259, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037259 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.init"
        "ial.render.struct_in_array.mat4_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037259 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037259 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037260, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037260 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.in"
        "itial.render.struct_in_array.mat4_mat2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037260 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037260 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037261, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037261 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.ini"
        "tial.render.struct_in_array.int_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037261 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037261 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037262, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037262 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.init"
        "ial.render.struct_in_array.int_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037262 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037262 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037263, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037263 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.in"
        "itial.render.struct_in_array.int_ivec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037263 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037263 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037264, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037264 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.init"
        "ial.render.struct_in_array.uint_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037264 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037264 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037265, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037265 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.initi"
        "al.render.struct_in_array.uint_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037265 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037265 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037266, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037266 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.ini"
        "tial.render.struct_in_array.uint_uvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037266 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037266 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037267, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037267 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.init"
        "ial.render.struct_in_array.bool_bvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037267 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037267 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037268, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037268 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.initi"
        "al.render.struct_in_array.bool_bvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037268 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037268 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037269, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037269 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.ini"
        "tial.render.struct_in_array.bool_bvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037269 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037269 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037771, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037771 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.b"
        "y_pointer.render.struct_in_array.float_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037771 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037771 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037772, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037772 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by"
        "_pointer.render.struct_in_array.float_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037772 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037772 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037773, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037773 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_pointer.render.struct_in_array.float_vec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037773 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037773 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037774, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037774 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_pointer.render.struct_in_array.mat4_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037774 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037774 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037775, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037775 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.b"
        "y_pointer.render.struct_in_array.mat4_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037775 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037775 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037776, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037776 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_pointer.render.struct_in_array.mat4_mat2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037776 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037776 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037777, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037777 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_pointer.render.struct_in_array.int_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037777 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037777 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037778, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037778 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.b"
        "y_pointer.render.struct_in_array.int_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037778 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037778 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037779, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037779 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_pointer.render.struct_in_array.int_ivec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037779 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037779 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037780, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037780 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.b"
        "y_pointer.render.struct_in_array.uint_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037780 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037780 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037781, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037781 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by"
        "_pointer.render.struct_in_array.uint_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037781 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037781 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037782, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037782 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_pointer.render.struct_in_array.uint_uvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037782 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037782 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037783, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037783 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.b"
        "y_pointer.render.struct_in_array.bool_bvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037783 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037783 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037784, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037784 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by"
        "_pointer.render.struct_in_array.bool_bvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037784 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037784 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037785, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037785 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_pointer.render.struct_in_array.bool_bvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037785 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037785 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037786, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037786 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_poi"
        "nter.render.struct_in_array.sampler2D_samplerCube_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037786 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037786 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037787, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037787 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_poin"
        "ter.render.struct_in_array.sampler2D_samplerCube_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037787 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037787 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037788, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037788 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_po"
        "inter.render.struct_in_array.sampler2D_samplerCube_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037788 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037788 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038152, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038152 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_value.render.struct_in_array.float_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038152 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038152 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038153, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038153 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.b"
        "y_value.render.struct_in_array.float_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038153 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038153 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038154, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038154 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_value.render.struct_in_array.float_vec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038154 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038154 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038155, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038155 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_value.render.struct_in_array.int_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038155 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038155 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038156, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038156 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_value.render.struct_in_array.int_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038156 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038156 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038157, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038157 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigne"
        "d.by_value.render.struct_in_array.int_ivec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038157 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038157 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038158, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038158 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_value.render.struct_in_array.uint_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038158 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038158 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038159, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038159 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.b"
        "y_value.render.struct_in_array.uint_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038159 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038159 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038160, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038160 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_value.render.struct_in_array.uint_uvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038160 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038160 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038161, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038161 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_value.render.struct_in_array.bool_bvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038161 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038161 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038162, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038162 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.b"
        "y_value.render.struct_in_array.bool_bvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038162 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038162 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038163, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038163 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_value.render.struct_in_array.bool_bvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038163 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038163 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038164, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038164 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_va"
        "lue.render.struct_in_array.sampler2D_samplerCube_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038164 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038164 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038165, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038165 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_val"
        "ue.render.struct_in_array.sampler2D_samplerCube_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038165 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038165 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038166, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038166 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_v"
        "alue.render.struct_in_array.sampler2D_samplerCube_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038166 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038166 end";
}
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87
