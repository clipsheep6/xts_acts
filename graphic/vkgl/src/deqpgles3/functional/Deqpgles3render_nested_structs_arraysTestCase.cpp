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
#include "../ActsDeqpgles30038TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

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
