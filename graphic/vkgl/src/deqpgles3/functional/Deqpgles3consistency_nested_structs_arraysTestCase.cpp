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
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_036856_1 "dEQP-GLES3.functional.uniform_api.info_query.con"
#define VkglTestCase_036856_2 "sistency.nested_structs_arrays.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036856, VkglTestCase_036856_1, VkglTestCase_036856_2);

#define VkglTestCase_036857_1 "dEQP-GLES3.functional.uniform_api.info_query.cons"
#define VkglTestCase_036857_2 "istency.nested_structs_arrays.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036857, VkglTestCase_036857_1, VkglTestCase_036857_2);

#define VkglTestCase_036858_1 "dEQP-GLES3.functional.uniform_api.info_query.co"
#define VkglTestCase_036858_2 "nsistency.nested_structs_arrays.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036858, VkglTestCase_036858_1, VkglTestCase_036858_2);

#define VkglTestCase_036859_1 "dEQP-GLES3.functional.uniform_api.info_query.co"
#define VkglTestCase_036859_2 "nsistency.nested_structs_arrays.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036859, VkglTestCase_036859_1, VkglTestCase_036859_2);

#define VkglTestCase_036860_1 "dEQP-GLES3.functional.uniform_api.info_query.con"
#define VkglTestCase_036860_2 "sistency.nested_structs_arrays.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036860, VkglTestCase_036860_1, VkglTestCase_036860_2);

#define VkglTestCase_036861_1 "dEQP-GLES3.functional.uniform_api.info_query.c"
#define VkglTestCase_036861_2 "onsistency.nested_structs_arrays.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036861, VkglTestCase_036861_1, VkglTestCase_036861_2);

#define VkglTestCase_036862_1 "dEQP-GLES3.functional.uniform_api.info_query.co"
#define VkglTestCase_036862_2 "nsistency.nested_structs_arrays.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036862, VkglTestCase_036862_1, VkglTestCase_036862_2);

#define VkglTestCase_036863_1 "dEQP-GLES3.functional.uniform_api.info_query.con"
#define VkglTestCase_036863_2 "sistency.nested_structs_arrays.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036863, VkglTestCase_036863_1, VkglTestCase_036863_2);

#define VkglTestCase_036864_1 "dEQP-GLES3.functional.uniform_api.info_query.c"
#define VkglTestCase_036864_2 "onsistency.nested_structs_arrays.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036864, VkglTestCase_036864_1, VkglTestCase_036864_2);

#define VkglTestCase_036865_1 "dEQP-GLES3.functional.uniform_api.info_query.con"
#define VkglTestCase_036865_2 "sistency.nested_structs_arrays.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036865, VkglTestCase_036865_1, VkglTestCase_036865_2);

#define VkglTestCase_036866_1 "dEQP-GLES3.functional.uniform_api.info_query.cons"
#define VkglTestCase_036866_2 "istency.nested_structs_arrays.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036866, VkglTestCase_036866_1, VkglTestCase_036866_2);

#define VkglTestCase_036867_1 "dEQP-GLES3.functional.uniform_api.info_query.co"
#define VkglTestCase_036867_2 "nsistency.nested_structs_arrays.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036867, VkglTestCase_036867_1, VkglTestCase_036867_2);

#define VkglTestCase_036868_1 "dEQP-GLES3.functional.uniform_api.info_query.con"
#define VkglTestCase_036868_2 "sistency.nested_structs_arrays.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036868, VkglTestCase_036868_1, VkglTestCase_036868_2);

#define VkglTestCase_036869_1 "dEQP-GLES3.functional.uniform_api.info_query.cons"
#define VkglTestCase_036869_2 "istency.nested_structs_arrays.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036869, VkglTestCase_036869_1, VkglTestCase_036869_2);

#define VkglTestCase_036870_1 "dEQP-GLES3.functional.uniform_api.info_query.co"
#define VkglTestCase_036870_2 "nsistency.nested_structs_arrays.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036870, VkglTestCase_036870_1, VkglTestCase_036870_2);

#define VkglTestCase_036871_1 "dEQP-GLES3.functional.uniform_api.info_query.consiste"
#define VkglTestCase_036871_2 "ncy.nested_structs_arrays.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036871, VkglTestCase_036871_1, VkglTestCase_036871_2);

#define VkglTestCase_036872_1 "dEQP-GLES3.functional.uniform_api.info_query.consisten"
#define VkglTestCase_036872_2 "cy.nested_structs_arrays.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036872, VkglTestCase_036872_1, VkglTestCase_036872_2);

#define VkglTestCase_036873_1 "dEQP-GLES3.functional.uniform_api.info_query.consist"
#define VkglTestCase_036873_2 "ency.nested_structs_arrays.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036873, VkglTestCase_036873_1, VkglTestCase_036873_2);
