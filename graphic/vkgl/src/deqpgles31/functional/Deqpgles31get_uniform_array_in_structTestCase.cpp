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

#define VkglTestCase_016801_1 "dEQP-GLES31.functional.program_uniform.by_point"
#define VkglTestCase_016801_2 "er.get_uniform.array_in_struct.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016801, VkglTestCase_016801_1, VkglTestCase_016801_2);

#define VkglTestCase_016802_1 "dEQP-GLES31.functional.program_uniform.by_pointe"
#define VkglTestCase_016802_2 "r.get_uniform.array_in_struct.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016802, VkglTestCase_016802_1, VkglTestCase_016802_2);

#define VkglTestCase_016803_1 "dEQP-GLES31.functional.program_uniform.by_poin"
#define VkglTestCase_016803_2 "ter.get_uniform.array_in_struct.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016803, VkglTestCase_016803_1, VkglTestCase_016803_2);

#define VkglTestCase_016804_1 "dEQP-GLES31.functional.program_uniform.by_point"
#define VkglTestCase_016804_2 "er.get_uniform.array_in_struct.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016804, VkglTestCase_016804_1, VkglTestCase_016804_2);

#define VkglTestCase_016805_1 "dEQP-GLES31.functional.program_uniform.by_pointe"
#define VkglTestCase_016805_2 "r.get_uniform.array_in_struct.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016805, VkglTestCase_016805_1, VkglTestCase_016805_2);

#define VkglTestCase_016806_1 "dEQP-GLES31.functional.program_uniform.by_poin"
#define VkglTestCase_016806_2 "ter.get_uniform.array_in_struct.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016806, VkglTestCase_016806_1, VkglTestCase_016806_2);

#define VkglTestCase_016807_1 "dEQP-GLES31.functional.program_uniform.by_point"
#define VkglTestCase_016807_2 "er.get_uniform.array_in_struct.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016807, VkglTestCase_016807_1, VkglTestCase_016807_2);

#define VkglTestCase_016808_1 "dEQP-GLES31.functional.program_uniform.by_pointe"
#define VkglTestCase_016808_2 "r.get_uniform.array_in_struct.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016808, VkglTestCase_016808_1, VkglTestCase_016808_2);

#define VkglTestCase_016809_1 "dEQP-GLES31.functional.program_uniform.by_poin"
#define VkglTestCase_016809_2 "ter.get_uniform.array_in_struct.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016809, VkglTestCase_016809_1, VkglTestCase_016809_2);

#define VkglTestCase_016810_1 "dEQP-GLES31.functional.program_uniform.by_point"
#define VkglTestCase_016810_2 "er.get_uniform.array_in_struct.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016810, VkglTestCase_016810_1, VkglTestCase_016810_2);

#define VkglTestCase_016811_1 "dEQP-GLES31.functional.program_uniform.by_pointe"
#define VkglTestCase_016811_2 "r.get_uniform.array_in_struct.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016811, VkglTestCase_016811_1, VkglTestCase_016811_2);

#define VkglTestCase_016812_1 "dEQP-GLES31.functional.program_uniform.by_poin"
#define VkglTestCase_016812_2 "ter.get_uniform.array_in_struct.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016812, VkglTestCase_016812_1, VkglTestCase_016812_2);

#define VkglTestCase_016813_1 "dEQP-GLES31.functional.program_uniform.by_point"
#define VkglTestCase_016813_2 "er.get_uniform.array_in_struct.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016813, VkglTestCase_016813_1, VkglTestCase_016813_2);

#define VkglTestCase_016814_1 "dEQP-GLES31.functional.program_uniform.by_pointe"
#define VkglTestCase_016814_2 "r.get_uniform.array_in_struct.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016814, VkglTestCase_016814_1, VkglTestCase_016814_2);

#define VkglTestCase_016815_1 "dEQP-GLES31.functional.program_uniform.by_poin"
#define VkglTestCase_016815_2 "ter.get_uniform.array_in_struct.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016815, VkglTestCase_016815_1, VkglTestCase_016815_2);

#define VkglTestCase_016816_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get"
#define VkglTestCase_016816_2 "_uniform.array_in_struct.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016816, VkglTestCase_016816_1, VkglTestCase_016816_2);

#define VkglTestCase_016817_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_"
#define VkglTestCase_016817_2 "uniform.array_in_struct.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016817, VkglTestCase_016817_1, VkglTestCase_016817_2);

#define VkglTestCase_016818_1 "dEQP-GLES31.functional.program_uniform.by_pointer.ge"
#define VkglTestCase_016818_2 "t_uniform.array_in_struct.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016818, VkglTestCase_016818_1, VkglTestCase_016818_2);

#define VkglTestCase_017254_1 "dEQP-GLES31.functional.program_uniform.by_valu"
#define VkglTestCase_017254_2 "e.get_uniform.array_in_struct.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017254, VkglTestCase_017254_1, VkglTestCase_017254_2);

#define VkglTestCase_017255_1 "dEQP-GLES31.functional.program_uniform.by_value"
#define VkglTestCase_017255_2 ".get_uniform.array_in_struct.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017255, VkglTestCase_017255_1, VkglTestCase_017255_2);

#define VkglTestCase_017256_1 "dEQP-GLES31.functional.program_uniform.by_val"
#define VkglTestCase_017256_2 "ue.get_uniform.array_in_struct.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017256, VkglTestCase_017256_1, VkglTestCase_017256_2);

#define VkglTestCase_017257_1 "dEQP-GLES31.functional.program_uniform.by_valu"
#define VkglTestCase_017257_2 "e.get_uniform.array_in_struct.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017257, VkglTestCase_017257_1, VkglTestCase_017257_2);

#define VkglTestCase_017258_1 "dEQP-GLES31.functional.program_uniform.by_value"
#define VkglTestCase_017258_2 ".get_uniform.array_in_struct.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017258, VkglTestCase_017258_1, VkglTestCase_017258_2);

#define VkglTestCase_017259_1 "dEQP-GLES31.functional.program_uniform.by_val"
#define VkglTestCase_017259_2 "ue.get_uniform.array_in_struct.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017259, VkglTestCase_017259_1, VkglTestCase_017259_2);

#define VkglTestCase_017260_1 "dEQP-GLES31.functional.program_uniform.by_valu"
#define VkglTestCase_017260_2 "e.get_uniform.array_in_struct.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017260, VkglTestCase_017260_1, VkglTestCase_017260_2);

#define VkglTestCase_017261_1 "dEQP-GLES31.functional.program_uniform.by_value"
#define VkglTestCase_017261_2 ".get_uniform.array_in_struct.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017261, VkglTestCase_017261_1, VkglTestCase_017261_2);

#define VkglTestCase_017262_1 "dEQP-GLES31.functional.program_uniform.by_val"
#define VkglTestCase_017262_2 "ue.get_uniform.array_in_struct.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017262, VkglTestCase_017262_1, VkglTestCase_017262_2);

#define VkglTestCase_017263_1 "dEQP-GLES31.functional.program_uniform.by_valu"
#define VkglTestCase_017263_2 "e.get_uniform.array_in_struct.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017263, VkglTestCase_017263_1, VkglTestCase_017263_2);

#define VkglTestCase_017264_1 "dEQP-GLES31.functional.program_uniform.by_value"
#define VkglTestCase_017264_2 ".get_uniform.array_in_struct.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017264, VkglTestCase_017264_1, VkglTestCase_017264_2);

#define VkglTestCase_017265_1 "dEQP-GLES31.functional.program_uniform.by_val"
#define VkglTestCase_017265_2 "ue.get_uniform.array_in_struct.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017265, VkglTestCase_017265_1, VkglTestCase_017265_2);

#define VkglTestCase_017266_1 "dEQP-GLES31.functional.program_uniform.by_value.get_"
#define VkglTestCase_017266_2 "uniform.array_in_struct.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017266, VkglTestCase_017266_1, VkglTestCase_017266_2);

#define VkglTestCase_017267_1 "dEQP-GLES31.functional.program_uniform.by_value.get_u"
#define VkglTestCase_017267_2 "niform.array_in_struct.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017267, VkglTestCase_017267_1, VkglTestCase_017267_2);

#define VkglTestCase_017268_1 "dEQP-GLES31.functional.program_uniform.by_value.get"
#define VkglTestCase_017268_2 "_uniform.array_in_struct.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017268, VkglTestCase_017268_1, VkglTestCase_017268_2);
