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
#include "../ActsDeqpgles310017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016783_1 "dEQP-GLES31.functional.program_uniform.by_point"
#define VkglTestCase_016783_2 "er.get_uniform.struct_in_array.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016783, VkglTestCase_016783_1, VkglTestCase_016783_2);

#define VkglTestCase_016784_1 "dEQP-GLES31.functional.program_uniform.by_pointe"
#define VkglTestCase_016784_2 "r.get_uniform.struct_in_array.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016784, VkglTestCase_016784_1, VkglTestCase_016784_2);

#define VkglTestCase_016785_1 "dEQP-GLES31.functional.program_uniform.by_poin"
#define VkglTestCase_016785_2 "ter.get_uniform.struct_in_array.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016785, VkglTestCase_016785_1, VkglTestCase_016785_2);

#define VkglTestCase_016786_1 "dEQP-GLES31.functional.program_uniform.by_point"
#define VkglTestCase_016786_2 "er.get_uniform.struct_in_array.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016786, VkglTestCase_016786_1, VkglTestCase_016786_2);

#define VkglTestCase_016787_1 "dEQP-GLES31.functional.program_uniform.by_pointe"
#define VkglTestCase_016787_2 "r.get_uniform.struct_in_array.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016787, VkglTestCase_016787_1, VkglTestCase_016787_2);

#define VkglTestCase_016788_1 "dEQP-GLES31.functional.program_uniform.by_poin"
#define VkglTestCase_016788_2 "ter.get_uniform.struct_in_array.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016788, VkglTestCase_016788_1, VkglTestCase_016788_2);

#define VkglTestCase_016789_1 "dEQP-GLES31.functional.program_uniform.by_point"
#define VkglTestCase_016789_2 "er.get_uniform.struct_in_array.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016789, VkglTestCase_016789_1, VkglTestCase_016789_2);

#define VkglTestCase_016790_1 "dEQP-GLES31.functional.program_uniform.by_pointe"
#define VkglTestCase_016790_2 "r.get_uniform.struct_in_array.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016790, VkglTestCase_016790_1, VkglTestCase_016790_2);

#define VkglTestCase_016791_1 "dEQP-GLES31.functional.program_uniform.by_poin"
#define VkglTestCase_016791_2 "ter.get_uniform.struct_in_array.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016791, VkglTestCase_016791_1, VkglTestCase_016791_2);

#define VkglTestCase_016792_1 "dEQP-GLES31.functional.program_uniform.by_point"
#define VkglTestCase_016792_2 "er.get_uniform.struct_in_array.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016792, VkglTestCase_016792_1, VkglTestCase_016792_2);

#define VkglTestCase_016793_1 "dEQP-GLES31.functional.program_uniform.by_pointe"
#define VkglTestCase_016793_2 "r.get_uniform.struct_in_array.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016793, VkglTestCase_016793_1, VkglTestCase_016793_2);

#define VkglTestCase_016794_1 "dEQP-GLES31.functional.program_uniform.by_poin"
#define VkglTestCase_016794_2 "ter.get_uniform.struct_in_array.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016794, VkglTestCase_016794_1, VkglTestCase_016794_2);

#define VkglTestCase_016795_1 "dEQP-GLES31.functional.program_uniform.by_point"
#define VkglTestCase_016795_2 "er.get_uniform.struct_in_array.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016795, VkglTestCase_016795_1, VkglTestCase_016795_2);

#define VkglTestCase_016796_1 "dEQP-GLES31.functional.program_uniform.by_pointe"
#define VkglTestCase_016796_2 "r.get_uniform.struct_in_array.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016796, VkglTestCase_016796_1, VkglTestCase_016796_2);

#define VkglTestCase_016797_1 "dEQP-GLES31.functional.program_uniform.by_poin"
#define VkglTestCase_016797_2 "ter.get_uniform.struct_in_array.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016797, VkglTestCase_016797_1, VkglTestCase_016797_2);

#define VkglTestCase_016798_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get"
#define VkglTestCase_016798_2 "_uniform.struct_in_array.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016798, VkglTestCase_016798_1, VkglTestCase_016798_2);

#define VkglTestCase_016799_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_"
#define VkglTestCase_016799_2 "uniform.struct_in_array.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016799, VkglTestCase_016799_1, VkglTestCase_016799_2);

#define VkglTestCase_016800_1 "dEQP-GLES31.functional.program_uniform.by_pointer.ge"
#define VkglTestCase_016800_2 "t_uniform.struct_in_array.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016800, VkglTestCase_016800_1, VkglTestCase_016800_2);

#define VkglTestCase_017239_1 "dEQP-GLES31.functional.program_uniform.by_valu"
#define VkglTestCase_017239_2 "e.get_uniform.struct_in_array.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017239, VkglTestCase_017239_1, VkglTestCase_017239_2);

#define VkglTestCase_017240_1 "dEQP-GLES31.functional.program_uniform.by_value"
#define VkglTestCase_017240_2 ".get_uniform.struct_in_array.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017240, VkglTestCase_017240_1, VkglTestCase_017240_2);

#define VkglTestCase_017241_1 "dEQP-GLES31.functional.program_uniform.by_val"
#define VkglTestCase_017241_2 "ue.get_uniform.struct_in_array.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017241, VkglTestCase_017241_1, VkglTestCase_017241_2);

#define VkglTestCase_017242_1 "dEQP-GLES31.functional.program_uniform.by_valu"
#define VkglTestCase_017242_2 "e.get_uniform.struct_in_array.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017242, VkglTestCase_017242_1, VkglTestCase_017242_2);

#define VkglTestCase_017243_1 "dEQP-GLES31.functional.program_uniform.by_value"
#define VkglTestCase_017243_2 ".get_uniform.struct_in_array.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017243, VkglTestCase_017243_1, VkglTestCase_017243_2);

#define VkglTestCase_017244_1 "dEQP-GLES31.functional.program_uniform.by_val"
#define VkglTestCase_017244_2 "ue.get_uniform.struct_in_array.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017244, VkglTestCase_017244_1, VkglTestCase_017244_2);

#define VkglTestCase_017245_1 "dEQP-GLES31.functional.program_uniform.by_valu"
#define VkglTestCase_017245_2 "e.get_uniform.struct_in_array.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017245, VkglTestCase_017245_1, VkglTestCase_017245_2);

#define VkglTestCase_017246_1 "dEQP-GLES31.functional.program_uniform.by_value"
#define VkglTestCase_017246_2 ".get_uniform.struct_in_array.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017246, VkglTestCase_017246_1, VkglTestCase_017246_2);

#define VkglTestCase_017247_1 "dEQP-GLES31.functional.program_uniform.by_val"
#define VkglTestCase_017247_2 "ue.get_uniform.struct_in_array.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017247, VkglTestCase_017247_1, VkglTestCase_017247_2);

#define VkglTestCase_017248_1 "dEQP-GLES31.functional.program_uniform.by_valu"
#define VkglTestCase_017248_2 "e.get_uniform.struct_in_array.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017248, VkglTestCase_017248_1, VkglTestCase_017248_2);

#define VkglTestCase_017249_1 "dEQP-GLES31.functional.program_uniform.by_value"
#define VkglTestCase_017249_2 ".get_uniform.struct_in_array.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017249, VkglTestCase_017249_1, VkglTestCase_017249_2);

#define VkglTestCase_017250_1 "dEQP-GLES31.functional.program_uniform.by_val"
#define VkglTestCase_017250_2 "ue.get_uniform.struct_in_array.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017250, VkglTestCase_017250_1, VkglTestCase_017250_2);

#define VkglTestCase_017251_1 "dEQP-GLES31.functional.program_uniform.by_value.get_"
#define VkglTestCase_017251_2 "uniform.struct_in_array.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017251, VkglTestCase_017251_1, VkglTestCase_017251_2);

#define VkglTestCase_017252_1 "dEQP-GLES31.functional.program_uniform.by_value.get_u"
#define VkglTestCase_017252_2 "niform.struct_in_array.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017252, VkglTestCase_017252_1, VkglTestCase_017252_2);

#define VkglTestCase_017253_1 "dEQP-GLES31.functional.program_uniform.by_value.get"
#define VkglTestCase_017253_2 "_uniform.struct_in_array.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017253, VkglTestCase_017253_1, VkglTestCase_017253_2);
