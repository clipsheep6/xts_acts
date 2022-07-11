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

#define VkglTestCase_037486_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer.ge"
#define VkglTestCase_037486_2 "t_uniform.basic_array_first_elem_without_brackets.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037486, VkglTestCase_037486_1, VkglTestCase_037486_2);

#define VkglTestCase_037487_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer.get"
#define VkglTestCase_037487_2 "_uniform.basic_array_first_elem_without_brackets.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037487, VkglTestCase_037487_1, VkglTestCase_037487_2);

#define VkglTestCase_037488_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer.g"
#define VkglTestCase_037488_2 "et_uniform.basic_array_first_elem_without_brackets.float_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037488, VkglTestCase_037488_1, VkglTestCase_037488_2);

#define VkglTestCase_037489_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer.g"
#define VkglTestCase_037489_2 "et_uniform.basic_array_first_elem_without_brackets.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037489, VkglTestCase_037489_1, VkglTestCase_037489_2);

#define VkglTestCase_037490_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer.ge"
#define VkglTestCase_037490_2 "t_uniform.basic_array_first_elem_without_brackets.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037490, VkglTestCase_037490_1, VkglTestCase_037490_2);

#define VkglTestCase_037491_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer."
#define VkglTestCase_037491_2 "get_uniform.basic_array_first_elem_without_brackets.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037491, VkglTestCase_037491_1, VkglTestCase_037491_2);

#define VkglTestCase_037492_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer.g"
#define VkglTestCase_037492_2 "et_uniform.basic_array_first_elem_without_brackets.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037492, VkglTestCase_037492_1, VkglTestCase_037492_2);

#define VkglTestCase_037493_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer.ge"
#define VkglTestCase_037493_2 "t_uniform.basic_array_first_elem_without_brackets.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037493, VkglTestCase_037493_1, VkglTestCase_037493_2);

#define VkglTestCase_037494_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer."
#define VkglTestCase_037494_2 "get_uniform.basic_array_first_elem_without_brackets.mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037494, VkglTestCase_037494_1, VkglTestCase_037494_2);

#define VkglTestCase_037495_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer.get_un"
#define VkglTestCase_037495_2 "iform.basic_array_first_elem_without_brackets.mat4_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037495, VkglTestCase_037495_1, VkglTestCase_037495_2);

#define VkglTestCase_037496_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer.get_uni"
#define VkglTestCase_037496_2 "form.basic_array_first_elem_without_brackets.mat4_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037496, VkglTestCase_037496_1, VkglTestCase_037496_2);

#define VkglTestCase_037497_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer.get_u"
#define VkglTestCase_037497_2 "niform.basic_array_first_elem_without_brackets.mat4_row_major_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037497, VkglTestCase_037497_1, VkglTestCase_037497_2);

#define VkglTestCase_037498_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer.g"
#define VkglTestCase_037498_2 "et_uniform.basic_array_first_elem_without_brackets.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037498, VkglTestCase_037498_1, VkglTestCase_037498_2);

#define VkglTestCase_037499_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer.ge"
#define VkglTestCase_037499_2 "t_uniform.basic_array_first_elem_without_brackets.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037499, VkglTestCase_037499_1, VkglTestCase_037499_2);

#define VkglTestCase_037500_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer."
#define VkglTestCase_037500_2 "get_uniform.basic_array_first_elem_without_brackets.int_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037500, VkglTestCase_037500_1, VkglTestCase_037500_2);

#define VkglTestCase_037501_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer.ge"
#define VkglTestCase_037501_2 "t_uniform.basic_array_first_elem_without_brackets.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037501, VkglTestCase_037501_1, VkglTestCase_037501_2);

#define VkglTestCase_037502_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer.get"
#define VkglTestCase_037502_2 "_uniform.basic_array_first_elem_without_brackets.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037502, VkglTestCase_037502_1, VkglTestCase_037502_2);

#define VkglTestCase_037503_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer.g"
#define VkglTestCase_037503_2 "et_uniform.basic_array_first_elem_without_brackets.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037503, VkglTestCase_037503_1, VkglTestCase_037503_2);

#define VkglTestCase_037504_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer.g"
#define VkglTestCase_037504_2 "et_uniform.basic_array_first_elem_without_brackets.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037504, VkglTestCase_037504_1, VkglTestCase_037504_2);

#define VkglTestCase_037505_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer.ge"
#define VkglTestCase_037505_2 "t_uniform.basic_array_first_elem_without_brackets.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037505, VkglTestCase_037505_1, VkglTestCase_037505_2);

#define VkglTestCase_037506_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer."
#define VkglTestCase_037506_2 "get_uniform.basic_array_first_elem_without_brackets.uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037506, VkglTestCase_037506_1, VkglTestCase_037506_2);

#define VkglTestCase_037507_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer.ge"
#define VkglTestCase_037507_2 "t_uniform.basic_array_first_elem_without_brackets.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037507, VkglTestCase_037507_1, VkglTestCase_037507_2);

#define VkglTestCase_037508_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer.get"
#define VkglTestCase_037508_2 "_uniform.basic_array_first_elem_without_brackets.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037508, VkglTestCase_037508_1, VkglTestCase_037508_2);

#define VkglTestCase_037509_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer.g"
#define VkglTestCase_037509_2 "et_uniform.basic_array_first_elem_without_brackets.uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037509, VkglTestCase_037509_1, VkglTestCase_037509_2);

#define VkglTestCase_037510_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer.get_un"
#define VkglTestCase_037510_2 "iform.basic_array_first_elem_without_brackets.bool_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037510, VkglTestCase_037510_1, VkglTestCase_037510_2);

#define VkglTestCase_037511_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer.get_uni"
#define VkglTestCase_037511_2 "form.basic_array_first_elem_without_brackets.bool_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037511, VkglTestCase_037511_1, VkglTestCase_037511_2);

#define VkglTestCase_037512_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer.get_u"
#define VkglTestCase_037512_2 "niform.basic_array_first_elem_without_brackets.bool_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037512, VkglTestCase_037512_1, VkglTestCase_037512_2);

#define VkglTestCase_037513_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer.get_u"
#define VkglTestCase_037513_2 "niform.basic_array_first_elem_without_brackets.bool_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037513, VkglTestCase_037513_1, VkglTestCase_037513_2);

#define VkglTestCase_037514_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer.get_un"
#define VkglTestCase_037514_2 "iform.basic_array_first_elem_without_brackets.bool_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037514, VkglTestCase_037514_1, VkglTestCase_037514_2);

#define VkglTestCase_037515_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer.get_"
#define VkglTestCase_037515_2 "uniform.basic_array_first_elem_without_brackets.bool_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037515, VkglTestCase_037515_1, VkglTestCase_037515_2);

#define VkglTestCase_037516_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer.get_un"
#define VkglTestCase_037516_2 "iform.basic_array_first_elem_without_brackets.bool_api_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037516, VkglTestCase_037516_1, VkglTestCase_037516_2);

#define VkglTestCase_037517_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer.get_uni"
#define VkglTestCase_037517_2 "form.basic_array_first_elem_without_brackets.bool_api_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037517, VkglTestCase_037517_1, VkglTestCase_037517_2);

#define VkglTestCase_037518_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer.get_u"
#define VkglTestCase_037518_2 "niform.basic_array_first_elem_without_brackets.bool_api_uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037518, VkglTestCase_037518_1, VkglTestCase_037518_2);

#define VkglTestCase_037519_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer.get_uni"
#define VkglTestCase_037519_2 "form.basic_array_first_elem_without_brackets.bvec4_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037519, VkglTestCase_037519_1, VkglTestCase_037519_2);

#define VkglTestCase_037520_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer.get_unif"
#define VkglTestCase_037520_2 "orm.basic_array_first_elem_without_brackets.bvec4_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037520, VkglTestCase_037520_1, VkglTestCase_037520_2);

#define VkglTestCase_037521_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer.get_un"
#define VkglTestCase_037521_2 "iform.basic_array_first_elem_without_brackets.bvec4_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037521, VkglTestCase_037521_1, VkglTestCase_037521_2);

#define VkglTestCase_037522_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer.get_un"
#define VkglTestCase_037522_2 "iform.basic_array_first_elem_without_brackets.bvec4_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037522, VkglTestCase_037522_1, VkglTestCase_037522_2);

#define VkglTestCase_037523_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer.get_uni"
#define VkglTestCase_037523_2 "form.basic_array_first_elem_without_brackets.bvec4_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037523, VkglTestCase_037523_1, VkglTestCase_037523_2);

#define VkglTestCase_037524_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer.get_u"
#define VkglTestCase_037524_2 "niform.basic_array_first_elem_without_brackets.bvec4_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037524, VkglTestCase_037524_1, VkglTestCase_037524_2);

#define VkglTestCase_037525_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer.get_un"
#define VkglTestCase_037525_2 "iform.basic_array_first_elem_without_brackets.bvec4_api_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037525, VkglTestCase_037525_1, VkglTestCase_037525_2);

#define VkglTestCase_037526_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer.get_uni"
#define VkglTestCase_037526_2 "form.basic_array_first_elem_without_brackets.bvec4_api_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037526, VkglTestCase_037526_1, VkglTestCase_037526_2);

#define VkglTestCase_037527_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer.get_u"
#define VkglTestCase_037527_2 "niform.basic_array_first_elem_without_brackets.bvec4_api_uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037527, VkglTestCase_037527_1, VkglTestCase_037527_2);

#define VkglTestCase_037528_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer.get_"
#define VkglTestCase_037528_2 "uniform.basic_array_first_elem_without_brackets.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037528, VkglTestCase_037528_1, VkglTestCase_037528_2);

#define VkglTestCase_037529_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer.get_u"
#define VkglTestCase_037529_2 "niform.basic_array_first_elem_without_brackets.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037529, VkglTestCase_037529_1, VkglTestCase_037529_2);

#define VkglTestCase_037530_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer.get"
#define VkglTestCase_037530_2 "_uniform.basic_array_first_elem_without_brackets.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037530, VkglTestCase_037530_1, VkglTestCase_037530_2);

#define VkglTestCase_037951_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_value.get"
#define VkglTestCase_037951_2 "_uniform.basic_array_first_elem_without_brackets.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037951, VkglTestCase_037951_1, VkglTestCase_037951_2);

#define VkglTestCase_037952_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_value.get_"
#define VkglTestCase_037952_2 "uniform.basic_array_first_elem_without_brackets.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037952, VkglTestCase_037952_1, VkglTestCase_037952_2);

#define VkglTestCase_037953_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_value.ge"
#define VkglTestCase_037953_2 "t_uniform.basic_array_first_elem_without_brackets.float_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037953, VkglTestCase_037953_1, VkglTestCase_037953_2);

#define VkglTestCase_037954_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_value.ge"
#define VkglTestCase_037954_2 "t_uniform.basic_array_first_elem_without_brackets.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037954, VkglTestCase_037954_1, VkglTestCase_037954_2);

#define VkglTestCase_037955_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_value.get"
#define VkglTestCase_037955_2 "_uniform.basic_array_first_elem_without_brackets.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037955, VkglTestCase_037955_1, VkglTestCase_037955_2);

#define VkglTestCase_037956_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_value.g"
#define VkglTestCase_037956_2 "et_uniform.basic_array_first_elem_without_brackets.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037956, VkglTestCase_037956_1, VkglTestCase_037956_2);

#define VkglTestCase_037957_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_value.ge"
#define VkglTestCase_037957_2 "t_uniform.basic_array_first_elem_without_brackets.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037957, VkglTestCase_037957_1, VkglTestCase_037957_2);

#define VkglTestCase_037958_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_value.get"
#define VkglTestCase_037958_2 "_uniform.basic_array_first_elem_without_brackets.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037958, VkglTestCase_037958_1, VkglTestCase_037958_2);

#define VkglTestCase_037959_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_value.g"
#define VkglTestCase_037959_2 "et_uniform.basic_array_first_elem_without_brackets.int_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037959, VkglTestCase_037959_1, VkglTestCase_037959_2);

#define VkglTestCase_037960_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_value.get"
#define VkglTestCase_037960_2 "_uniform.basic_array_first_elem_without_brackets.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037960, VkglTestCase_037960_1, VkglTestCase_037960_2);

#define VkglTestCase_037961_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_value.get_"
#define VkglTestCase_037961_2 "uniform.basic_array_first_elem_without_brackets.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037961, VkglTestCase_037961_1, VkglTestCase_037961_2);

#define VkglTestCase_037962_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_value.ge"
#define VkglTestCase_037962_2 "t_uniform.basic_array_first_elem_without_brackets.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037962, VkglTestCase_037962_1, VkglTestCase_037962_2);

#define VkglTestCase_037963_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_value.ge"
#define VkglTestCase_037963_2 "t_uniform.basic_array_first_elem_without_brackets.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037963, VkglTestCase_037963_1, VkglTestCase_037963_2);

#define VkglTestCase_037964_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_value.get"
#define VkglTestCase_037964_2 "_uniform.basic_array_first_elem_without_brackets.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037964, VkglTestCase_037964_1, VkglTestCase_037964_2);

#define VkglTestCase_037965_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_value.g"
#define VkglTestCase_037965_2 "et_uniform.basic_array_first_elem_without_brackets.uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037965, VkglTestCase_037965_1, VkglTestCase_037965_2);

#define VkglTestCase_037966_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_value.get"
#define VkglTestCase_037966_2 "_uniform.basic_array_first_elem_without_brackets.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037966, VkglTestCase_037966_1, VkglTestCase_037966_2);

#define VkglTestCase_037967_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_value.get_"
#define VkglTestCase_037967_2 "uniform.basic_array_first_elem_without_brackets.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037967, VkglTestCase_037967_1, VkglTestCase_037967_2);

#define VkglTestCase_037968_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_value.ge"
#define VkglTestCase_037968_2 "t_uniform.basic_array_first_elem_without_brackets.uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037968, VkglTestCase_037968_1, VkglTestCase_037968_2);

#define VkglTestCase_037969_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_value.get_uni"
#define VkglTestCase_037969_2 "form.basic_array_first_elem_without_brackets.bool_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037969, VkglTestCase_037969_1, VkglTestCase_037969_2);

#define VkglTestCase_037970_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_value.get_unif"
#define VkglTestCase_037970_2 "orm.basic_array_first_elem_without_brackets.bool_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037970, VkglTestCase_037970_1, VkglTestCase_037970_2);

#define VkglTestCase_037971_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_value.get_un"
#define VkglTestCase_037971_2 "iform.basic_array_first_elem_without_brackets.bool_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037971, VkglTestCase_037971_1, VkglTestCase_037971_2);

#define VkglTestCase_037972_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_value.get_un"
#define VkglTestCase_037972_2 "iform.basic_array_first_elem_without_brackets.bool_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037972, VkglTestCase_037972_1, VkglTestCase_037972_2);

#define VkglTestCase_037973_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_value.get_uni"
#define VkglTestCase_037973_2 "form.basic_array_first_elem_without_brackets.bool_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037973, VkglTestCase_037973_1, VkglTestCase_037973_2);

#define VkglTestCase_037974_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_value.get_u"
#define VkglTestCase_037974_2 "niform.basic_array_first_elem_without_brackets.bool_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037974, VkglTestCase_037974_1, VkglTestCase_037974_2);

#define VkglTestCase_037975_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_value.get_uni"
#define VkglTestCase_037975_2 "form.basic_array_first_elem_without_brackets.bool_api_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037975, VkglTestCase_037975_1, VkglTestCase_037975_2);

#define VkglTestCase_037976_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_value.get_unif"
#define VkglTestCase_037976_2 "orm.basic_array_first_elem_without_brackets.bool_api_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037976, VkglTestCase_037976_1, VkglTestCase_037976_2);

#define VkglTestCase_037977_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_value.get_un"
#define VkglTestCase_037977_2 "iform.basic_array_first_elem_without_brackets.bool_api_uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037977, VkglTestCase_037977_1, VkglTestCase_037977_2);

#define VkglTestCase_037978_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_value.get_unif"
#define VkglTestCase_037978_2 "orm.basic_array_first_elem_without_brackets.bvec4_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037978, VkglTestCase_037978_1, VkglTestCase_037978_2);

#define VkglTestCase_037979_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_value.get_unifo"
#define VkglTestCase_037979_2 "rm.basic_array_first_elem_without_brackets.bvec4_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037979, VkglTestCase_037979_1, VkglTestCase_037979_2);

#define VkglTestCase_037980_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_value.get_uni"
#define VkglTestCase_037980_2 "form.basic_array_first_elem_without_brackets.bvec4_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037980, VkglTestCase_037980_1, VkglTestCase_037980_2);

#define VkglTestCase_037981_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_value.get_uni"
#define VkglTestCase_037981_2 "form.basic_array_first_elem_without_brackets.bvec4_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037981, VkglTestCase_037981_1, VkglTestCase_037981_2);

#define VkglTestCase_037982_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_value.get_unif"
#define VkglTestCase_037982_2 "orm.basic_array_first_elem_without_brackets.bvec4_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037982, VkglTestCase_037982_1, VkglTestCase_037982_2);

#define VkglTestCase_037983_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_value.get_un"
#define VkglTestCase_037983_2 "iform.basic_array_first_elem_without_brackets.bvec4_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037983, VkglTestCase_037983_1, VkglTestCase_037983_2);

#define VkglTestCase_037984_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_value.get_uni"
#define VkglTestCase_037984_2 "form.basic_array_first_elem_without_brackets.bvec4_api_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037984, VkglTestCase_037984_1, VkglTestCase_037984_2);

#define VkglTestCase_037985_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_value.get_unif"
#define VkglTestCase_037985_2 "orm.basic_array_first_elem_without_brackets.bvec4_api_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037985, VkglTestCase_037985_1, VkglTestCase_037985_2);

#define VkglTestCase_037986_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_value.get_un"
#define VkglTestCase_037986_2 "iform.basic_array_first_elem_without_brackets.bvec4_api_uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037986, VkglTestCase_037986_1, VkglTestCase_037986_2);

#define VkglTestCase_037987_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_value.get_u"
#define VkglTestCase_037987_2 "niform.basic_array_first_elem_without_brackets.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037987, VkglTestCase_037987_1, VkglTestCase_037987_2);

#define VkglTestCase_037988_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_value.get_un"
#define VkglTestCase_037988_2 "iform.basic_array_first_elem_without_brackets.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037988, VkglTestCase_037988_1, VkglTestCase_037988_2);

#define VkglTestCase_037989_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_value.get_"
#define VkglTestCase_037989_2 "uniform.basic_array_first_elem_without_brackets.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037989, VkglTestCase_037989_1, VkglTestCase_037989_2);
