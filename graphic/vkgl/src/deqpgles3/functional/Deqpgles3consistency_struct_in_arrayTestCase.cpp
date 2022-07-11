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

#define VkglTestCase_036820_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036820_2 "consistency.struct_in_array.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036820, VkglTestCase_036820_1, VkglTestCase_036820_2);

#define VkglTestCase_036821_1 "dEQP-GLES3.functional.uniform_api.info_query.c"
#define VkglTestCase_036821_2 "onsistency.struct_in_array.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036821, VkglTestCase_036821_1, VkglTestCase_036821_2);

#define VkglTestCase_036822_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036822_2 ".consistency.struct_in_array.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036822, VkglTestCase_036822_1, VkglTestCase_036822_2);

#define VkglTestCase_036823_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036823_2 ".consistency.struct_in_array.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036823, VkglTestCase_036823_1, VkglTestCase_036823_2);

#define VkglTestCase_036824_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036824_2 "consistency.struct_in_array.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036824, VkglTestCase_036824_1, VkglTestCase_036824_2);

#define VkglTestCase_036825_1 "dEQP-GLES3.functional.uniform_api.info_quer"
#define VkglTestCase_036825_2 "y.consistency.struct_in_array.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036825, VkglTestCase_036825_1, VkglTestCase_036825_2);

#define VkglTestCase_036826_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036826_2 ".consistency.struct_in_array.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036826, VkglTestCase_036826_1, VkglTestCase_036826_2);

#define VkglTestCase_036827_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036827_2 "consistency.struct_in_array.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036827, VkglTestCase_036827_1, VkglTestCase_036827_2);

#define VkglTestCase_036828_1 "dEQP-GLES3.functional.uniform_api.info_quer"
#define VkglTestCase_036828_2 "y.consistency.struct_in_array.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036828, VkglTestCase_036828_1, VkglTestCase_036828_2);

#define VkglTestCase_036829_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036829_2 "consistency.struct_in_array.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036829, VkglTestCase_036829_1, VkglTestCase_036829_2);

#define VkglTestCase_036830_1 "dEQP-GLES3.functional.uniform_api.info_query.c"
#define VkglTestCase_036830_2 "onsistency.struct_in_array.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036830, VkglTestCase_036830_1, VkglTestCase_036830_2);

#define VkglTestCase_036831_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036831_2 ".consistency.struct_in_array.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036831, VkglTestCase_036831_1, VkglTestCase_036831_2);

#define VkglTestCase_036832_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036832_2 "consistency.struct_in_array.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036832, VkglTestCase_036832_1, VkglTestCase_036832_2);

#define VkglTestCase_036833_1 "dEQP-GLES3.functional.uniform_api.info_query.c"
#define VkglTestCase_036833_2 "onsistency.struct_in_array.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036833, VkglTestCase_036833_1, VkglTestCase_036833_2);

#define VkglTestCase_036834_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036834_2 ".consistency.struct_in_array.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036834, VkglTestCase_036834_1, VkglTestCase_036834_2);

#define VkglTestCase_036835_1 "dEQP-GLES3.functional.uniform_api.info_query.consi"
#define VkglTestCase_036835_2 "stency.struct_in_array.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036835, VkglTestCase_036835_1, VkglTestCase_036835_2);

#define VkglTestCase_036836_1 "dEQP-GLES3.functional.uniform_api.info_query.consis"
#define VkglTestCase_036836_2 "tency.struct_in_array.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036836, VkglTestCase_036836_1, VkglTestCase_036836_2);

#define VkglTestCase_036837_1 "dEQP-GLES3.functional.uniform_api.info_query.cons"
#define VkglTestCase_036837_2 "istency.struct_in_array.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036837, VkglTestCase_036837_1, VkglTestCase_036837_2);
