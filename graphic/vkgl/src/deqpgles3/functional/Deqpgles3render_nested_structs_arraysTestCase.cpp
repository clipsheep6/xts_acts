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
#define VkglTestCase_037285_1 "dEQP-GLES3.functional.uniform_api.value.initial"
#define VkglTestCase_037285_2 ".render.nested_structs_arrays.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037285, VkglTestCase_037285_1, VkglTestCase_037285_2);

#define VkglTestCase_037286_1 "dEQP-GLES3.functional.uniform_api.value.initial."
#define VkglTestCase_037286_2 "render.nested_structs_arrays.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037286, VkglTestCase_037286_1, VkglTestCase_037286_2);

#define VkglTestCase_037287_1 "dEQP-GLES3.functional.uniform_api.value.initia"
#define VkglTestCase_037287_2 "l.render.nested_structs_arrays.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037287, VkglTestCase_037287_1, VkglTestCase_037287_2);

#define VkglTestCase_037288_1 "dEQP-GLES3.functional.uniform_api.value.initia"
#define VkglTestCase_037288_2 "l.render.nested_structs_arrays.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037288, VkglTestCase_037288_1, VkglTestCase_037288_2);

#define VkglTestCase_037289_1 "dEQP-GLES3.functional.uniform_api.value.initial"
#define VkglTestCase_037289_2 ".render.nested_structs_arrays.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037289, VkglTestCase_037289_1, VkglTestCase_037289_2);

#define VkglTestCase_037290_1 "dEQP-GLES3.functional.uniform_api.value.initi"
#define VkglTestCase_037290_2 "al.render.nested_structs_arrays.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037290, VkglTestCase_037290_1, VkglTestCase_037290_2);

#define VkglTestCase_037291_1 "dEQP-GLES3.functional.uniform_api.value.initia"
#define VkglTestCase_037291_2 "l.render.nested_structs_arrays.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037291, VkglTestCase_037291_1, VkglTestCase_037291_2);

#define VkglTestCase_037292_1 "dEQP-GLES3.functional.uniform_api.value.initial"
#define VkglTestCase_037292_2 ".render.nested_structs_arrays.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037292, VkglTestCase_037292_1, VkglTestCase_037292_2);

#define VkglTestCase_037293_1 "dEQP-GLES3.functional.uniform_api.value.initi"
#define VkglTestCase_037293_2 "al.render.nested_structs_arrays.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037293, VkglTestCase_037293_1, VkglTestCase_037293_2);

#define VkglTestCase_037294_1 "dEQP-GLES3.functional.uniform_api.value.initial"
#define VkglTestCase_037294_2 ".render.nested_structs_arrays.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037294, VkglTestCase_037294_1, VkglTestCase_037294_2);

#define VkglTestCase_037295_1 "dEQP-GLES3.functional.uniform_api.value.initial."
#define VkglTestCase_037295_2 "render.nested_structs_arrays.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037295, VkglTestCase_037295_1, VkglTestCase_037295_2);

#define VkglTestCase_037296_1 "dEQP-GLES3.functional.uniform_api.value.initia"
#define VkglTestCase_037296_2 "l.render.nested_structs_arrays.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037296, VkglTestCase_037296_1, VkglTestCase_037296_2);

#define VkglTestCase_037297_1 "dEQP-GLES3.functional.uniform_api.value.initial"
#define VkglTestCase_037297_2 ".render.nested_structs_arrays.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037297, VkglTestCase_037297_1, VkglTestCase_037297_2);

#define VkglTestCase_037298_1 "dEQP-GLES3.functional.uniform_api.value.initial."
#define VkglTestCase_037298_2 "render.nested_structs_arrays.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037298, VkglTestCase_037298_1, VkglTestCase_037298_2);

#define VkglTestCase_037299_1 "dEQP-GLES3.functional.uniform_api.value.initia"
#define VkglTestCase_037299_2 "l.render.nested_structs_arrays.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037299, VkglTestCase_037299_1, VkglTestCase_037299_2);

#define VkglTestCase_037807_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_p"
#define VkglTestCase_037807_2 "ointer.render.nested_structs_arrays.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037807, VkglTestCase_037807_1, VkglTestCase_037807_2);

#define VkglTestCase_037808_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_po"
#define VkglTestCase_037808_2 "inter.render.nested_structs_arrays.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037808, VkglTestCase_037808_1, VkglTestCase_037808_2);

#define VkglTestCase_037809_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_037809_2 "pointer.render.nested_structs_arrays.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037809, VkglTestCase_037809_1, VkglTestCase_037809_2);

#define VkglTestCase_037810_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_037810_2 "pointer.render.nested_structs_arrays.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037810, VkglTestCase_037810_1, VkglTestCase_037810_2);

#define VkglTestCase_037811_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_p"
#define VkglTestCase_037811_2 "ointer.render.nested_structs_arrays.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037811, VkglTestCase_037811_1, VkglTestCase_037811_2);

#define VkglTestCase_037812_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037812_2 "_pointer.render.nested_structs_arrays.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037812, VkglTestCase_037812_1, VkglTestCase_037812_2);

#define VkglTestCase_037813_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_037813_2 "pointer.render.nested_structs_arrays.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037813, VkglTestCase_037813_1, VkglTestCase_037813_2);

#define VkglTestCase_037814_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_p"
#define VkglTestCase_037814_2 "ointer.render.nested_structs_arrays.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037814, VkglTestCase_037814_1, VkglTestCase_037814_2);

#define VkglTestCase_037815_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037815_2 "_pointer.render.nested_structs_arrays.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037815, VkglTestCase_037815_1, VkglTestCase_037815_2);

#define VkglTestCase_037816_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_p"
#define VkglTestCase_037816_2 "ointer.render.nested_structs_arrays.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037816, VkglTestCase_037816_1, VkglTestCase_037816_2);

#define VkglTestCase_037817_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_po"
#define VkglTestCase_037817_2 "inter.render.nested_structs_arrays.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037817, VkglTestCase_037817_1, VkglTestCase_037817_2);

#define VkglTestCase_037818_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_037818_2 "pointer.render.nested_structs_arrays.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037818, VkglTestCase_037818_1, VkglTestCase_037818_2);

#define VkglTestCase_037819_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_p"
#define VkglTestCase_037819_2 "ointer.render.nested_structs_arrays.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037819, VkglTestCase_037819_1, VkglTestCase_037819_2);

#define VkglTestCase_037820_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_po"
#define VkglTestCase_037820_2 "inter.render.nested_structs_arrays.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037820, VkglTestCase_037820_1, VkglTestCase_037820_2);

#define VkglTestCase_037821_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_037821_2 "pointer.render.nested_structs_arrays.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037821, VkglTestCase_037821_1, VkglTestCase_037821_2);

#define VkglTestCase_037822_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointe"
#define VkglTestCase_037822_2 "r.render.nested_structs_arrays.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037822, VkglTestCase_037822_1, VkglTestCase_037822_2);

#define VkglTestCase_037823_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer"
#define VkglTestCase_037823_2 ".render.nested_structs_arrays.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037823, VkglTestCase_037823_1, VkglTestCase_037823_2);

#define VkglTestCase_037824_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_point"
#define VkglTestCase_037824_2 "er.render.nested_structs_arrays.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037824, VkglTestCase_037824_1, VkglTestCase_037824_2);

#define VkglTestCase_038182_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_038182_2 "value.render.nested_structs_arrays.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038182, VkglTestCase_038182_1, VkglTestCase_038182_2);

#define VkglTestCase_038183_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_v"
#define VkglTestCase_038183_2 "alue.render.nested_structs_arrays.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038183, VkglTestCase_038183_1, VkglTestCase_038183_2);

#define VkglTestCase_038184_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_038184_2 "_value.render.nested_structs_arrays.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038184, VkglTestCase_038184_1, VkglTestCase_038184_2);

#define VkglTestCase_038185_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_038185_2 "_value.render.nested_structs_arrays.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038185, VkglTestCase_038185_1, VkglTestCase_038185_2);

#define VkglTestCase_038186_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_038186_2 "value.render.nested_structs_arrays.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038186, VkglTestCase_038186_1, VkglTestCase_038186_2);

#define VkglTestCase_038187_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_038187_2 "y_value.render.nested_structs_arrays.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038187, VkglTestCase_038187_1, VkglTestCase_038187_2);

#define VkglTestCase_038188_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_038188_2 "value.render.nested_structs_arrays.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038188, VkglTestCase_038188_1, VkglTestCase_038188_2);

#define VkglTestCase_038189_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_v"
#define VkglTestCase_038189_2 "alue.render.nested_structs_arrays.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038189, VkglTestCase_038189_1, VkglTestCase_038189_2);

#define VkglTestCase_038190_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_038190_2 "_value.render.nested_structs_arrays.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038190, VkglTestCase_038190_1, VkglTestCase_038190_2);

#define VkglTestCase_038191_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_038191_2 "value.render.nested_structs_arrays.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038191, VkglTestCase_038191_1, VkglTestCase_038191_2);

#define VkglTestCase_038192_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_v"
#define VkglTestCase_038192_2 "alue.render.nested_structs_arrays.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038192, VkglTestCase_038192_1, VkglTestCase_038192_2);

#define VkglTestCase_038193_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_038193_2 "_value.render.nested_structs_arrays.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038193, VkglTestCase_038193_1, VkglTestCase_038193_2);

#define VkglTestCase_038194_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_value"
#define VkglTestCase_038194_2 ".render.nested_structs_arrays.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038194, VkglTestCase_038194_1, VkglTestCase_038194_2);

#define VkglTestCase_038195_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_value."
#define VkglTestCase_038195_2 "render.nested_structs_arrays.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038195, VkglTestCase_038195_1, VkglTestCase_038195_2);

#define VkglTestCase_038196_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_valu"
#define VkglTestCase_038196_2 "e.render.nested_structs_arrays.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038196, VkglTestCase_038196_1, VkglTestCase_038196_2);
=======
static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037285, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037285 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.initial"
        ".render.nested_structs_arrays.float_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037285 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037285 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037286, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037286 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.initial."
        "render.nested_structs_arrays.float_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037286 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037286 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037287, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037287 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.initia"
        "l.render.nested_structs_arrays.float_vec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037287 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037287 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037288, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037288 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.initia"
        "l.render.nested_structs_arrays.mat4_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037288 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037288 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037289, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037289 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.initial"
        ".render.nested_structs_arrays.mat4_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037289 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037289 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037290, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037290 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.initi"
        "al.render.nested_structs_arrays.mat4_mat2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037290 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037290 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037291, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037291 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.initia"
        "l.render.nested_structs_arrays.int_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037291 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037291 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037292, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037292 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.initial"
        ".render.nested_structs_arrays.int_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037292 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037292 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037293, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037293 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.initi"
        "al.render.nested_structs_arrays.int_ivec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037293 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037293 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037294, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037294 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.initial"
        ".render.nested_structs_arrays.uint_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037294 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037294 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037295, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037295 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.initial."
        "render.nested_structs_arrays.uint_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037295 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037295 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037296, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037296 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.initia"
        "l.render.nested_structs_arrays.uint_uvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037296 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037296 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037297, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037297 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.initial"
        ".render.nested_structs_arrays.bool_bvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037297 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037297 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037298, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037298 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.initial."
        "render.nested_structs_arrays.bool_bvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037298 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037298 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037299, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037299 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.initia"
        "l.render.nested_structs_arrays.bool_bvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037299 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037299 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037807, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037807 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_p"
        "ointer.render.nested_structs_arrays.float_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037807 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037807 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037808, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037808 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_po"
        "inter.render.nested_structs_arrays.float_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037808 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037808 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037809, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037809 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
        "pointer.render.nested_structs_arrays.float_vec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037809 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037809 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037810, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037810 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
        "pointer.render.nested_structs_arrays.mat4_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037810 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037810 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037811, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037811 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_p"
        "ointer.render.nested_structs_arrays.mat4_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037811 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037811 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037812, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037812 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by"
        "_pointer.render.nested_structs_arrays.mat4_mat2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037812 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037812 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037813, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037813 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
        "pointer.render.nested_structs_arrays.int_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037813 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037813 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037814, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037814 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_p"
        "ointer.render.nested_structs_arrays.int_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037814 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037814 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037815, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037815 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by"
        "_pointer.render.nested_structs_arrays.int_ivec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037815 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037815 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037816, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037816 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_p"
        "ointer.render.nested_structs_arrays.uint_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037816 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037816 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037817, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037817 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_po"
        "inter.render.nested_structs_arrays.uint_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037817 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037817 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037818, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037818 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
        "pointer.render.nested_structs_arrays.uint_uvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037818 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037818 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037819, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037819 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_p"
        "ointer.render.nested_structs_arrays.bool_bvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037819 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037819 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037820, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037820 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_po"
        "inter.render.nested_structs_arrays.bool_bvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037820 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037820 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037821, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037821 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
        "pointer.render.nested_structs_arrays.bool_bvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037821 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037821 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037822, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037822 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointe"
        "r.render.nested_structs_arrays.sampler2D_samplerCube_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037822 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037822 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037823, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037823 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer"
        ".render.nested_structs_arrays.sampler2D_samplerCube_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037823 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037823 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037824, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037824 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_point"
        "er.render.nested_structs_arrays.sampler2D_samplerCube_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037824 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037824 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038182, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038182 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
        "value.render.nested_structs_arrays.float_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038182 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038182 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038183, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038183 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_v"
        "alue.render.nested_structs_arrays.float_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038183 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038183 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038184, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038184 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by"
        "_value.render.nested_structs_arrays.float_vec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038184 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038184 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038185, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038185 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by"
        "_value.render.nested_structs_arrays.int_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038185 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038185 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038186, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038186 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
        "value.render.nested_structs_arrays.int_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038186 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038186 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038187, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038187 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.b"
        "y_value.render.nested_structs_arrays.int_ivec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038187 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038187 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038188, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038188 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
        "value.render.nested_structs_arrays.uint_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038188 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038188 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038189, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038189 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_v"
        "alue.render.nested_structs_arrays.uint_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038189 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038189 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038190, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038190 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by"
        "_value.render.nested_structs_arrays.uint_uvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038190 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038190 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038191, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038191 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
        "value.render.nested_structs_arrays.bool_bvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038191 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038191 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038192, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038192 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_v"
        "alue.render.nested_structs_arrays.bool_bvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038192 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038192 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038193, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038193 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by"
        "_value.render.nested_structs_arrays.bool_bvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038193 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038193 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038194, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038194 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_value"
        ".render.nested_structs_arrays.sampler2D_samplerCube_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038194 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038194 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038195, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038195 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_value."
        "render.nested_structs_arrays.sampler2D_samplerCube_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038195 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038195 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038196, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038196 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_valu"
        "e.render.nested_structs_arrays.sampler2D_samplerCube_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038196 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038196 end";
}
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87
