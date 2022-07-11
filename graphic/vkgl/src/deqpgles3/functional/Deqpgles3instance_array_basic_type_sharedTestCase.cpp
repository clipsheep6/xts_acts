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
#include "../ActsDeqpgles30036TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_035484_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035484_2 "array_basic_type.shared.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035484, VkglTestCase_035484_1, VkglTestCase_035484_2);

#define VkglTestCase_035485_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035485_2 "rray_basic_type.shared.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035485, VkglTestCase_035485_1, VkglTestCase_035485_2);

#define VkglTestCase_035486_1 "dEQP-GLES3.functional.ubo.instance"
#define VkglTestCase_035486_2 "_array_basic_type.shared.float_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035486, VkglTestCase_035486_1, VkglTestCase_035486_2);

#define VkglTestCase_035487_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035487_2 "array_basic_type.shared.vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035487, VkglTestCase_035487_1, VkglTestCase_035487_2);

#define VkglTestCase_035488_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035488_2 "rray_basic_type.shared.vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035488, VkglTestCase_035488_1, VkglTestCase_035488_2);

#define VkglTestCase_035489_1 "dEQP-GLES3.functional.ubo.instance"
#define VkglTestCase_035489_2 "_array_basic_type.shared.vec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035489, VkglTestCase_035489_1, VkglTestCase_035489_2);

#define VkglTestCase_035490_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035490_2 "array_basic_type.shared.vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035490, VkglTestCase_035490_1, VkglTestCase_035490_2);

#define VkglTestCase_035491_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035491_2 "rray_basic_type.shared.vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035491, VkglTestCase_035491_1, VkglTestCase_035491_2);

#define VkglTestCase_035492_1 "dEQP-GLES3.functional.ubo.instance"
#define VkglTestCase_035492_2 "_array_basic_type.shared.vec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035492, VkglTestCase_035492_1, VkglTestCase_035492_2);

#define VkglTestCase_035493_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035493_2 "array_basic_type.shared.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035493, VkglTestCase_035493_1, VkglTestCase_035493_2);

#define VkglTestCase_035494_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035494_2 "rray_basic_type.shared.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035494, VkglTestCase_035494_1, VkglTestCase_035494_2);

#define VkglTestCase_035495_1 "dEQP-GLES3.functional.ubo.instance"
#define VkglTestCase_035495_2 "_array_basic_type.shared.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035495, VkglTestCase_035495_1, VkglTestCase_035495_2);

#define VkglTestCase_035496_1 "dEQP-GLES3.functional.ubo.instance"
#define VkglTestCase_035496_2 "_array_basic_type.shared.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035496, VkglTestCase_035496_1, VkglTestCase_035496_2);

#define VkglTestCase_035497_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035497_2 "array_basic_type.shared.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035497, VkglTestCase_035497_1, VkglTestCase_035497_2);

#define VkglTestCase_035498_1 "dEQP-GLES3.functional.ubo.instanc"
#define VkglTestCase_035498_2 "e_array_basic_type.shared.int_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035498, VkglTestCase_035498_1, VkglTestCase_035498_2);

#define VkglTestCase_035499_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035499_2 "array_basic_type.shared.ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035499, VkglTestCase_035499_1, VkglTestCase_035499_2);

#define VkglTestCase_035500_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035500_2 "rray_basic_type.shared.ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035500, VkglTestCase_035500_1, VkglTestCase_035500_2);

#define VkglTestCase_035501_1 "dEQP-GLES3.functional.ubo.instance"
#define VkglTestCase_035501_2 "_array_basic_type.shared.ivec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035501, VkglTestCase_035501_1, VkglTestCase_035501_2);

#define VkglTestCase_035502_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035502_2 "array_basic_type.shared.ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035502, VkglTestCase_035502_1, VkglTestCase_035502_2);

#define VkglTestCase_035503_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035503_2 "rray_basic_type.shared.ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035503, VkglTestCase_035503_1, VkglTestCase_035503_2);

#define VkglTestCase_035504_1 "dEQP-GLES3.functional.ubo.instance"
#define VkglTestCase_035504_2 "_array_basic_type.shared.ivec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035504, VkglTestCase_035504_1, VkglTestCase_035504_2);

#define VkglTestCase_035505_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035505_2 "array_basic_type.shared.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035505, VkglTestCase_035505_1, VkglTestCase_035505_2);

#define VkglTestCase_035506_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035506_2 "rray_basic_type.shared.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035506, VkglTestCase_035506_1, VkglTestCase_035506_2);

#define VkglTestCase_035507_1 "dEQP-GLES3.functional.ubo.instance"
#define VkglTestCase_035507_2 "_array_basic_type.shared.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035507, VkglTestCase_035507_1, VkglTestCase_035507_2);

#define VkglTestCase_035508_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035508_2 "array_basic_type.shared.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035508, VkglTestCase_035508_1, VkglTestCase_035508_2);

#define VkglTestCase_035509_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035509_2 "rray_basic_type.shared.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035509, VkglTestCase_035509_1, VkglTestCase_035509_2);

#define VkglTestCase_035510_1 "dEQP-GLES3.functional.ubo.instance"
#define VkglTestCase_035510_2 "_array_basic_type.shared.uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035510, VkglTestCase_035510_1, VkglTestCase_035510_2);

#define VkglTestCase_035511_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035511_2 "array_basic_type.shared.uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035511, VkglTestCase_035511_1, VkglTestCase_035511_2);

#define VkglTestCase_035512_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035512_2 "rray_basic_type.shared.uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035512, VkglTestCase_035512_1, VkglTestCase_035512_2);

#define VkglTestCase_035513_1 "dEQP-GLES3.functional.ubo.instance"
#define VkglTestCase_035513_2 "_array_basic_type.shared.uvec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035513, VkglTestCase_035513_1, VkglTestCase_035513_2);

#define VkglTestCase_035514_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035514_2 "array_basic_type.shared.uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035514, VkglTestCase_035514_1, VkglTestCase_035514_2);

#define VkglTestCase_035515_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035515_2 "rray_basic_type.shared.uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035515, VkglTestCase_035515_1, VkglTestCase_035515_2);

#define VkglTestCase_035516_1 "dEQP-GLES3.functional.ubo.instance"
#define VkglTestCase_035516_2 "_array_basic_type.shared.uvec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035516, VkglTestCase_035516_1, VkglTestCase_035516_2);

#define VkglTestCase_035517_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035517_2 "array_basic_type.shared.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035517, VkglTestCase_035517_1, VkglTestCase_035517_2);

#define VkglTestCase_035518_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035518_2 "rray_basic_type.shared.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035518, VkglTestCase_035518_1, VkglTestCase_035518_2);

#define VkglTestCase_035519_1 "dEQP-GLES3.functional.ubo.instance"
#define VkglTestCase_035519_2 "_array_basic_type.shared.uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035519, VkglTestCase_035519_1, VkglTestCase_035519_2);

#define VkglTestCase_035520_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035520_2 "array_basic_type.shared.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035520, VkglTestCase_035520_1, VkglTestCase_035520_2);

#define VkglTestCase_035521_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035521_2 "rray_basic_type.shared.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035521, VkglTestCase_035521_1, VkglTestCase_035521_2);

#define VkglTestCase_035522_1 "dEQP-GLES3.functional.ubo.instance"
#define VkglTestCase_035522_2 "_array_basic_type.shared.bool_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035522, VkglTestCase_035522_1, VkglTestCase_035522_2);

#define VkglTestCase_035523_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035523_2 "array_basic_type.shared.bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035523, VkglTestCase_035523_1, VkglTestCase_035523_2);

#define VkglTestCase_035524_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035524_2 "rray_basic_type.shared.bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035524, VkglTestCase_035524_1, VkglTestCase_035524_2);

#define VkglTestCase_035525_1 "dEQP-GLES3.functional.ubo.instance"
#define VkglTestCase_035525_2 "_array_basic_type.shared.bvec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035525, VkglTestCase_035525_1, VkglTestCase_035525_2);

#define VkglTestCase_035526_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035526_2 "array_basic_type.shared.bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035526, VkglTestCase_035526_1, VkglTestCase_035526_2);

#define VkglTestCase_035527_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035527_2 "rray_basic_type.shared.bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035527, VkglTestCase_035527_1, VkglTestCase_035527_2);

#define VkglTestCase_035528_1 "dEQP-GLES3.functional.ubo.instance"
#define VkglTestCase_035528_2 "_array_basic_type.shared.bvec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035528, VkglTestCase_035528_1, VkglTestCase_035528_2);

#define VkglTestCase_035529_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035529_2 "array_basic_type.shared.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035529, VkglTestCase_035529_1, VkglTestCase_035529_2);

#define VkglTestCase_035530_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035530_2 "rray_basic_type.shared.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035530, VkglTestCase_035530_1, VkglTestCase_035530_2);

#define VkglTestCase_035531_1 "dEQP-GLES3.functional.ubo.instance"
#define VkglTestCase_035531_2 "_array_basic_type.shared.bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035531, VkglTestCase_035531_1, VkglTestCase_035531_2);

#define VkglTestCase_035532_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035532_2 "array_basic_type.shared.mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035532, VkglTestCase_035532_1, VkglTestCase_035532_2);

#define VkglTestCase_035533_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035533_2 "rray_basic_type.shared.mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035533, VkglTestCase_035533_1, VkglTestCase_035533_2);

#define VkglTestCase_035534_1 "dEQP-GLES3.functional.ubo.instance"
#define VkglTestCase_035534_2 "_array_basic_type.shared.mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035534, VkglTestCase_035534_1, VkglTestCase_035534_2);

#define VkglTestCase_035535_1 "dEQP-GLES3.functional.ubo.instance_array"
#define VkglTestCase_035535_2 "_basic_type.shared.row_major_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035535, VkglTestCase_035535_1, VkglTestCase_035535_2);

#define VkglTestCase_035536_1 "dEQP-GLES3.functional.ubo.instance_array_"
#define VkglTestCase_035536_2 "basic_type.shared.row_major_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035536, VkglTestCase_035536_1, VkglTestCase_035536_2);

#define VkglTestCase_035537_1 "dEQP-GLES3.functional.ubo.instance_arra"
#define VkglTestCase_035537_2 "y_basic_type.shared.row_major_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035537, VkglTestCase_035537_1, VkglTestCase_035537_2);

#define VkglTestCase_035538_1 "dEQP-GLES3.functional.ubo.instance_array_"
#define VkglTestCase_035538_2 "basic_type.shared.column_major_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035538, VkglTestCase_035538_1, VkglTestCase_035538_2);

#define VkglTestCase_035539_1 "dEQP-GLES3.functional.ubo.instance_array_b"
#define VkglTestCase_035539_2 "asic_type.shared.column_major_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035539, VkglTestCase_035539_1, VkglTestCase_035539_2);

#define VkglTestCase_035540_1 "dEQP-GLES3.functional.ubo.instance_array"
#define VkglTestCase_035540_2 "_basic_type.shared.column_major_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035540, VkglTestCase_035540_1, VkglTestCase_035540_2);

#define VkglTestCase_035541_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035541_2 "array_basic_type.shared.mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035541, VkglTestCase_035541_1, VkglTestCase_035541_2);

#define VkglTestCase_035542_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035542_2 "rray_basic_type.shared.mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035542, VkglTestCase_035542_1, VkglTestCase_035542_2);

#define VkglTestCase_035543_1 "dEQP-GLES3.functional.ubo.instance"
#define VkglTestCase_035543_2 "_array_basic_type.shared.mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035543, VkglTestCase_035543_1, VkglTestCase_035543_2);

#define VkglTestCase_035544_1 "dEQP-GLES3.functional.ubo.instance_array"
#define VkglTestCase_035544_2 "_basic_type.shared.row_major_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035544, VkglTestCase_035544_1, VkglTestCase_035544_2);

#define VkglTestCase_035545_1 "dEQP-GLES3.functional.ubo.instance_array_"
#define VkglTestCase_035545_2 "basic_type.shared.row_major_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035545, VkglTestCase_035545_1, VkglTestCase_035545_2);

#define VkglTestCase_035546_1 "dEQP-GLES3.functional.ubo.instance_arra"
#define VkglTestCase_035546_2 "y_basic_type.shared.row_major_mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035546, VkglTestCase_035546_1, VkglTestCase_035546_2);

#define VkglTestCase_035547_1 "dEQP-GLES3.functional.ubo.instance_array_"
#define VkglTestCase_035547_2 "basic_type.shared.column_major_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035547, VkglTestCase_035547_1, VkglTestCase_035547_2);

#define VkglTestCase_035548_1 "dEQP-GLES3.functional.ubo.instance_array_b"
#define VkglTestCase_035548_2 "asic_type.shared.column_major_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035548, VkglTestCase_035548_1, VkglTestCase_035548_2);

#define VkglTestCase_035549_1 "dEQP-GLES3.functional.ubo.instance_array"
#define VkglTestCase_035549_2 "_basic_type.shared.column_major_mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035549, VkglTestCase_035549_1, VkglTestCase_035549_2);

#define VkglTestCase_035550_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035550_2 "array_basic_type.shared.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035550, VkglTestCase_035550_1, VkglTestCase_035550_2);

#define VkglTestCase_035551_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035551_2 "rray_basic_type.shared.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035551, VkglTestCase_035551_1, VkglTestCase_035551_2);

#define VkglTestCase_035552_1 "dEQP-GLES3.functional.ubo.instance"
#define VkglTestCase_035552_2 "_array_basic_type.shared.mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035552, VkglTestCase_035552_1, VkglTestCase_035552_2);

#define VkglTestCase_035553_1 "dEQP-GLES3.functional.ubo.instance_array"
#define VkglTestCase_035553_2 "_basic_type.shared.row_major_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035553, VkglTestCase_035553_1, VkglTestCase_035553_2);

#define VkglTestCase_035554_1 "dEQP-GLES3.functional.ubo.instance_array_"
#define VkglTestCase_035554_2 "basic_type.shared.row_major_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035554, VkglTestCase_035554_1, VkglTestCase_035554_2);

#define VkglTestCase_035555_1 "dEQP-GLES3.functional.ubo.instance_arra"
#define VkglTestCase_035555_2 "y_basic_type.shared.row_major_mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035555, VkglTestCase_035555_1, VkglTestCase_035555_2);

#define VkglTestCase_035556_1 "dEQP-GLES3.functional.ubo.instance_array_"
#define VkglTestCase_035556_2 "basic_type.shared.column_major_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035556, VkglTestCase_035556_1, VkglTestCase_035556_2);

#define VkglTestCase_035557_1 "dEQP-GLES3.functional.ubo.instance_array_b"
#define VkglTestCase_035557_2 "asic_type.shared.column_major_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035557, VkglTestCase_035557_1, VkglTestCase_035557_2);

#define VkglTestCase_035558_1 "dEQP-GLES3.functional.ubo.instance_array"
#define VkglTestCase_035558_2 "_basic_type.shared.column_major_mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035558, VkglTestCase_035558_1, VkglTestCase_035558_2);

#define VkglTestCase_035559_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035559_2 "rray_basic_type.shared.mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035559, VkglTestCase_035559_1, VkglTestCase_035559_2);

#define VkglTestCase_035560_1 "dEQP-GLES3.functional.ubo.instance_ar"
#define VkglTestCase_035560_2 "ray_basic_type.shared.mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035560, VkglTestCase_035560_1, VkglTestCase_035560_2);

#define VkglTestCase_035561_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035561_2 "array_basic_type.shared.mat2x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035561, VkglTestCase_035561_1, VkglTestCase_035561_2);

#define VkglTestCase_035562_1 "dEQP-GLES3.functional.ubo.instance_array_"
#define VkglTestCase_035562_2 "basic_type.shared.row_major_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035562, VkglTestCase_035562_1, VkglTestCase_035562_2);

#define VkglTestCase_035563_1 "dEQP-GLES3.functional.ubo.instance_array_b"
#define VkglTestCase_035563_2 "asic_type.shared.row_major_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035563, VkglTestCase_035563_1, VkglTestCase_035563_2);

#define VkglTestCase_035564_1 "dEQP-GLES3.functional.ubo.instance_array"
#define VkglTestCase_035564_2 "_basic_type.shared.row_major_mat2x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035564, VkglTestCase_035564_1, VkglTestCase_035564_2);

#define VkglTestCase_035565_1 "dEQP-GLES3.functional.ubo.instance_array_b"
#define VkglTestCase_035565_2 "asic_type.shared.column_major_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035565, VkglTestCase_035565_1, VkglTestCase_035565_2);

#define VkglTestCase_035566_1 "dEQP-GLES3.functional.ubo.instance_array_ba"
#define VkglTestCase_035566_2 "sic_type.shared.column_major_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035566, VkglTestCase_035566_1, VkglTestCase_035566_2);

#define VkglTestCase_035567_1 "dEQP-GLES3.functional.ubo.instance_array_"
#define VkglTestCase_035567_2 "basic_type.shared.column_major_mat2x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035567, VkglTestCase_035567_1, VkglTestCase_035567_2);

#define VkglTestCase_035568_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035568_2 "rray_basic_type.shared.mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035568, VkglTestCase_035568_1, VkglTestCase_035568_2);

#define VkglTestCase_035569_1 "dEQP-GLES3.functional.ubo.instance_ar"
#define VkglTestCase_035569_2 "ray_basic_type.shared.mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035569, VkglTestCase_035569_1, VkglTestCase_035569_2);

#define VkglTestCase_035570_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035570_2 "array_basic_type.shared.mat2x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035570, VkglTestCase_035570_1, VkglTestCase_035570_2);

#define VkglTestCase_035571_1 "dEQP-GLES3.functional.ubo.instance_array_"
#define VkglTestCase_035571_2 "basic_type.shared.row_major_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035571, VkglTestCase_035571_1, VkglTestCase_035571_2);

#define VkglTestCase_035572_1 "dEQP-GLES3.functional.ubo.instance_array_b"
#define VkglTestCase_035572_2 "asic_type.shared.row_major_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035572, VkglTestCase_035572_1, VkglTestCase_035572_2);

#define VkglTestCase_035573_1 "dEQP-GLES3.functional.ubo.instance_array"
#define VkglTestCase_035573_2 "_basic_type.shared.row_major_mat2x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035573, VkglTestCase_035573_1, VkglTestCase_035573_2);

#define VkglTestCase_035574_1 "dEQP-GLES3.functional.ubo.instance_array_b"
#define VkglTestCase_035574_2 "asic_type.shared.column_major_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035574, VkglTestCase_035574_1, VkglTestCase_035574_2);

#define VkglTestCase_035575_1 "dEQP-GLES3.functional.ubo.instance_array_ba"
#define VkglTestCase_035575_2 "sic_type.shared.column_major_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035575, VkglTestCase_035575_1, VkglTestCase_035575_2);

#define VkglTestCase_035576_1 "dEQP-GLES3.functional.ubo.instance_array_"
#define VkglTestCase_035576_2 "basic_type.shared.column_major_mat2x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035576, VkglTestCase_035576_1, VkglTestCase_035576_2);

#define VkglTestCase_035577_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035577_2 "rray_basic_type.shared.mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035577, VkglTestCase_035577_1, VkglTestCase_035577_2);

#define VkglTestCase_035578_1 "dEQP-GLES3.functional.ubo.instance_ar"
#define VkglTestCase_035578_2 "ray_basic_type.shared.mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035578, VkglTestCase_035578_1, VkglTestCase_035578_2);

#define VkglTestCase_035579_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035579_2 "array_basic_type.shared.mat3x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035579, VkglTestCase_035579_1, VkglTestCase_035579_2);

#define VkglTestCase_035580_1 "dEQP-GLES3.functional.ubo.instance_array_"
#define VkglTestCase_035580_2 "basic_type.shared.row_major_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035580, VkglTestCase_035580_1, VkglTestCase_035580_2);

#define VkglTestCase_035581_1 "dEQP-GLES3.functional.ubo.instance_array_b"
#define VkglTestCase_035581_2 "asic_type.shared.row_major_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035581, VkglTestCase_035581_1, VkglTestCase_035581_2);

#define VkglTestCase_035582_1 "dEQP-GLES3.functional.ubo.instance_array"
#define VkglTestCase_035582_2 "_basic_type.shared.row_major_mat3x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035582, VkglTestCase_035582_1, VkglTestCase_035582_2);

#define VkglTestCase_035583_1 "dEQP-GLES3.functional.ubo.instance_array_b"
#define VkglTestCase_035583_2 "asic_type.shared.column_major_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035583, VkglTestCase_035583_1, VkglTestCase_035583_2);

#define VkglTestCase_035584_1 "dEQP-GLES3.functional.ubo.instance_array_ba"
#define VkglTestCase_035584_2 "sic_type.shared.column_major_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035584, VkglTestCase_035584_1, VkglTestCase_035584_2);

#define VkglTestCase_035585_1 "dEQP-GLES3.functional.ubo.instance_array_"
#define VkglTestCase_035585_2 "basic_type.shared.column_major_mat3x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035585, VkglTestCase_035585_1, VkglTestCase_035585_2);

#define VkglTestCase_035586_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035586_2 "rray_basic_type.shared.mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035586, VkglTestCase_035586_1, VkglTestCase_035586_2);

#define VkglTestCase_035587_1 "dEQP-GLES3.functional.ubo.instance_ar"
#define VkglTestCase_035587_2 "ray_basic_type.shared.mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035587, VkglTestCase_035587_1, VkglTestCase_035587_2);

#define VkglTestCase_035588_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035588_2 "array_basic_type.shared.mat3x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035588, VkglTestCase_035588_1, VkglTestCase_035588_2);

#define VkglTestCase_035589_1 "dEQP-GLES3.functional.ubo.instance_array_"
#define VkglTestCase_035589_2 "basic_type.shared.row_major_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035589, VkglTestCase_035589_1, VkglTestCase_035589_2);

#define VkglTestCase_035590_1 "dEQP-GLES3.functional.ubo.instance_array_b"
#define VkglTestCase_035590_2 "asic_type.shared.row_major_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035590, VkglTestCase_035590_1, VkglTestCase_035590_2);

#define VkglTestCase_035591_1 "dEQP-GLES3.functional.ubo.instance_array"
#define VkglTestCase_035591_2 "_basic_type.shared.row_major_mat3x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035591, VkglTestCase_035591_1, VkglTestCase_035591_2);

#define VkglTestCase_035592_1 "dEQP-GLES3.functional.ubo.instance_array_b"
#define VkglTestCase_035592_2 "asic_type.shared.column_major_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035592, VkglTestCase_035592_1, VkglTestCase_035592_2);

#define VkglTestCase_035593_1 "dEQP-GLES3.functional.ubo.instance_array_ba"
#define VkglTestCase_035593_2 "sic_type.shared.column_major_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035593, VkglTestCase_035593_1, VkglTestCase_035593_2);

#define VkglTestCase_035594_1 "dEQP-GLES3.functional.ubo.instance_array_"
#define VkglTestCase_035594_2 "basic_type.shared.column_major_mat3x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035594, VkglTestCase_035594_1, VkglTestCase_035594_2);

#define VkglTestCase_035595_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035595_2 "rray_basic_type.shared.mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035595, VkglTestCase_035595_1, VkglTestCase_035595_2);

#define VkglTestCase_035596_1 "dEQP-GLES3.functional.ubo.instance_ar"
#define VkglTestCase_035596_2 "ray_basic_type.shared.mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035596, VkglTestCase_035596_1, VkglTestCase_035596_2);

#define VkglTestCase_035597_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035597_2 "array_basic_type.shared.mat4x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035597, VkglTestCase_035597_1, VkglTestCase_035597_2);

#define VkglTestCase_035598_1 "dEQP-GLES3.functional.ubo.instance_array_"
#define VkglTestCase_035598_2 "basic_type.shared.row_major_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035598, VkglTestCase_035598_1, VkglTestCase_035598_2);

#define VkglTestCase_035599_1 "dEQP-GLES3.functional.ubo.instance_array_b"
#define VkglTestCase_035599_2 "asic_type.shared.row_major_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035599, VkglTestCase_035599_1, VkglTestCase_035599_2);

#define VkglTestCase_035600_1 "dEQP-GLES3.functional.ubo.instance_array"
#define VkglTestCase_035600_2 "_basic_type.shared.row_major_mat4x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035600, VkglTestCase_035600_1, VkglTestCase_035600_2);

#define VkglTestCase_035601_1 "dEQP-GLES3.functional.ubo.instance_array_b"
#define VkglTestCase_035601_2 "asic_type.shared.column_major_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035601, VkglTestCase_035601_1, VkglTestCase_035601_2);

#define VkglTestCase_035602_1 "dEQP-GLES3.functional.ubo.instance_array_ba"
#define VkglTestCase_035602_2 "sic_type.shared.column_major_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035602, VkglTestCase_035602_1, VkglTestCase_035602_2);

#define VkglTestCase_035603_1 "dEQP-GLES3.functional.ubo.instance_array_"
#define VkglTestCase_035603_2 "basic_type.shared.column_major_mat4x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035603, VkglTestCase_035603_1, VkglTestCase_035603_2);

#define VkglTestCase_035604_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035604_2 "rray_basic_type.shared.mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035604, VkglTestCase_035604_1, VkglTestCase_035604_2);

#define VkglTestCase_035605_1 "dEQP-GLES3.functional.ubo.instance_ar"
#define VkglTestCase_035605_2 "ray_basic_type.shared.mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035605, VkglTestCase_035605_1, VkglTestCase_035605_2);

#define VkglTestCase_035606_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035606_2 "array_basic_type.shared.mat4x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035606, VkglTestCase_035606_1, VkglTestCase_035606_2);

#define VkglTestCase_035607_1 "dEQP-GLES3.functional.ubo.instance_array_"
#define VkglTestCase_035607_2 "basic_type.shared.row_major_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035607, VkglTestCase_035607_1, VkglTestCase_035607_2);

#define VkglTestCase_035608_1 "dEQP-GLES3.functional.ubo.instance_array_b"
#define VkglTestCase_035608_2 "asic_type.shared.row_major_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035608, VkglTestCase_035608_1, VkglTestCase_035608_2);

#define VkglTestCase_035609_1 "dEQP-GLES3.functional.ubo.instance_array"
#define VkglTestCase_035609_2 "_basic_type.shared.row_major_mat4x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035609, VkglTestCase_035609_1, VkglTestCase_035609_2);

#define VkglTestCase_035610_1 "dEQP-GLES3.functional.ubo.instance_array_b"
#define VkglTestCase_035610_2 "asic_type.shared.column_major_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035610, VkglTestCase_035610_1, VkglTestCase_035610_2);

#define VkglTestCase_035611_1 "dEQP-GLES3.functional.ubo.instance_array_ba"
#define VkglTestCase_035611_2 "sic_type.shared.column_major_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035611, VkglTestCase_035611_1, VkglTestCase_035611_2);

#define VkglTestCase_035612_1 "dEQP-GLES3.functional.ubo.instance_array_"
#define VkglTestCase_035612_2 "basic_type.shared.column_major_mat4x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035612, VkglTestCase_035612_1, VkglTestCase_035612_2);
