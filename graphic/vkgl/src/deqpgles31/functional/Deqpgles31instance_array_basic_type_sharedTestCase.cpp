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
#include "../ActsDeqpgles310010TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_009760_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009760_2 "nstance_array_basic_type.shared.float"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009760, VkglTestCase_009760_1, VkglTestCase_009760_2);

#define VkglTestCase_009761_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009761_2 "nstance_array_basic_type.shared.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009761, VkglTestCase_009761_1, VkglTestCase_009761_2);

#define VkglTestCase_009762_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009762_2 "nstance_array_basic_type.shared.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009762, VkglTestCase_009762_1, VkglTestCase_009762_2);

#define VkglTestCase_009763_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009763_2 "nstance_array_basic_type.shared.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009763, VkglTestCase_009763_1, VkglTestCase_009763_2);

#define VkglTestCase_009764_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009764_2 "instance_array_basic_type.shared.int"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009764, VkglTestCase_009764_1, VkglTestCase_009764_2);

#define VkglTestCase_009765_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009765_2 "nstance_array_basic_type.shared.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009765, VkglTestCase_009765_1, VkglTestCase_009765_2);

#define VkglTestCase_009766_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009766_2 "nstance_array_basic_type.shared.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009766, VkglTestCase_009766_1, VkglTestCase_009766_2);

#define VkglTestCase_009767_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009767_2 "nstance_array_basic_type.shared.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009767, VkglTestCase_009767_1, VkglTestCase_009767_2);

#define VkglTestCase_009768_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009768_2 "nstance_array_basic_type.shared.uint"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009768, VkglTestCase_009768_1, VkglTestCase_009768_2);

#define VkglTestCase_009769_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009769_2 "nstance_array_basic_type.shared.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009769, VkglTestCase_009769_1, VkglTestCase_009769_2);

#define VkglTestCase_009770_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009770_2 "nstance_array_basic_type.shared.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009770, VkglTestCase_009770_1, VkglTestCase_009770_2);

#define VkglTestCase_009771_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009771_2 "nstance_array_basic_type.shared.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009771, VkglTestCase_009771_1, VkglTestCase_009771_2);

#define VkglTestCase_009772_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009772_2 "nstance_array_basic_type.shared.bool"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009772, VkglTestCase_009772_1, VkglTestCase_009772_2);

#define VkglTestCase_009773_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009773_2 "nstance_array_basic_type.shared.bvec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009773, VkglTestCase_009773_1, VkglTestCase_009773_2);

#define VkglTestCase_009774_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009774_2 "nstance_array_basic_type.shared.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009774, VkglTestCase_009774_1, VkglTestCase_009774_2);

#define VkglTestCase_009775_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009775_2 "nstance_array_basic_type.shared.bvec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009775, VkglTestCase_009775_1, VkglTestCase_009775_2);

#define VkglTestCase_009776_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009776_2 "nstance_array_basic_type.shared.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009776, VkglTestCase_009776_1, VkglTestCase_009776_2);

#define VkglTestCase_009777_1 "dEQP-GLES31.functional.ssbo.layout.instan"
#define VkglTestCase_009777_2 "ce_array_basic_type.shared.row_major_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009777, VkglTestCase_009777_1, VkglTestCase_009777_2);

#define VkglTestCase_009778_1 "dEQP-GLES31.functional.ssbo.layout.instanc"
#define VkglTestCase_009778_2 "e_array_basic_type.shared.column_major_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009778, VkglTestCase_009778_1, VkglTestCase_009778_2);

#define VkglTestCase_009779_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009779_2 "nstance_array_basic_type.shared.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009779, VkglTestCase_009779_1, VkglTestCase_009779_2);

#define VkglTestCase_009780_1 "dEQP-GLES31.functional.ssbo.layout.instan"
#define VkglTestCase_009780_2 "ce_array_basic_type.shared.row_major_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009780, VkglTestCase_009780_1, VkglTestCase_009780_2);

#define VkglTestCase_009781_1 "dEQP-GLES31.functional.ssbo.layout.instanc"
#define VkglTestCase_009781_2 "e_array_basic_type.shared.column_major_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009781, VkglTestCase_009781_1, VkglTestCase_009781_2);

#define VkglTestCase_009782_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009782_2 "nstance_array_basic_type.shared.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009782, VkglTestCase_009782_1, VkglTestCase_009782_2);

#define VkglTestCase_009783_1 "dEQP-GLES31.functional.ssbo.layout.instan"
#define VkglTestCase_009783_2 "ce_array_basic_type.shared.row_major_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009783, VkglTestCase_009783_1, VkglTestCase_009783_2);

#define VkglTestCase_009784_1 "dEQP-GLES31.functional.ssbo.layout.instanc"
#define VkglTestCase_009784_2 "e_array_basic_type.shared.column_major_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009784, VkglTestCase_009784_1, VkglTestCase_009784_2);

#define VkglTestCase_009785_1 "dEQP-GLES31.functional.ssbo.layout.in"
#define VkglTestCase_009785_2 "stance_array_basic_type.shared.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009785, VkglTestCase_009785_1, VkglTestCase_009785_2);

#define VkglTestCase_009786_1 "dEQP-GLES31.functional.ssbo.layout.instanc"
#define VkglTestCase_009786_2 "e_array_basic_type.shared.row_major_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009786, VkglTestCase_009786_1, VkglTestCase_009786_2);

#define VkglTestCase_009787_1 "dEQP-GLES31.functional.ssbo.layout.instance"
#define VkglTestCase_009787_2 "_array_basic_type.shared.column_major_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009787, VkglTestCase_009787_1, VkglTestCase_009787_2);

#define VkglTestCase_009788_1 "dEQP-GLES31.functional.ssbo.layout.in"
#define VkglTestCase_009788_2 "stance_array_basic_type.shared.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009788, VkglTestCase_009788_1, VkglTestCase_009788_2);

#define VkglTestCase_009789_1 "dEQP-GLES31.functional.ssbo.layout.instanc"
#define VkglTestCase_009789_2 "e_array_basic_type.shared.row_major_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009789, VkglTestCase_009789_1, VkglTestCase_009789_2);

#define VkglTestCase_009790_1 "dEQP-GLES31.functional.ssbo.layout.instance"
#define VkglTestCase_009790_2 "_array_basic_type.shared.column_major_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009790, VkglTestCase_009790_1, VkglTestCase_009790_2);

#define VkglTestCase_009791_1 "dEQP-GLES31.functional.ssbo.layout.in"
#define VkglTestCase_009791_2 "stance_array_basic_type.shared.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009791, VkglTestCase_009791_1, VkglTestCase_009791_2);

#define VkglTestCase_009792_1 "dEQP-GLES31.functional.ssbo.layout.instanc"
#define VkglTestCase_009792_2 "e_array_basic_type.shared.row_major_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009792, VkglTestCase_009792_1, VkglTestCase_009792_2);

#define VkglTestCase_009793_1 "dEQP-GLES31.functional.ssbo.layout.instance"
#define VkglTestCase_009793_2 "_array_basic_type.shared.column_major_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009793, VkglTestCase_009793_1, VkglTestCase_009793_2);

#define VkglTestCase_009794_1 "dEQP-GLES31.functional.ssbo.layout.in"
#define VkglTestCase_009794_2 "stance_array_basic_type.shared.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009794, VkglTestCase_009794_1, VkglTestCase_009794_2);

#define VkglTestCase_009795_1 "dEQP-GLES31.functional.ssbo.layout.instanc"
#define VkglTestCase_009795_2 "e_array_basic_type.shared.row_major_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009795, VkglTestCase_009795_1, VkglTestCase_009795_2);

#define VkglTestCase_009796_1 "dEQP-GLES31.functional.ssbo.layout.instance"
#define VkglTestCase_009796_2 "_array_basic_type.shared.column_major_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009796, VkglTestCase_009796_1, VkglTestCase_009796_2);

#define VkglTestCase_009797_1 "dEQP-GLES31.functional.ssbo.layout.in"
#define VkglTestCase_009797_2 "stance_array_basic_type.shared.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009797, VkglTestCase_009797_1, VkglTestCase_009797_2);

#define VkglTestCase_009798_1 "dEQP-GLES31.functional.ssbo.layout.instanc"
#define VkglTestCase_009798_2 "e_array_basic_type.shared.row_major_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009798, VkglTestCase_009798_1, VkglTestCase_009798_2);

#define VkglTestCase_009799_1 "dEQP-GLES31.functional.ssbo.layout.instance"
#define VkglTestCase_009799_2 "_array_basic_type.shared.column_major_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009799, VkglTestCase_009799_1, VkglTestCase_009799_2);

#define VkglTestCase_009800_1 "dEQP-GLES31.functional.ssbo.layout.in"
#define VkglTestCase_009800_2 "stance_array_basic_type.shared.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009800, VkglTestCase_009800_1, VkglTestCase_009800_2);

#define VkglTestCase_009801_1 "dEQP-GLES31.functional.ssbo.layout.instanc"
#define VkglTestCase_009801_2 "e_array_basic_type.shared.row_major_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009801, VkglTestCase_009801_1, VkglTestCase_009801_2);

#define VkglTestCase_009802_1 "dEQP-GLES31.functional.ssbo.layout.instance"
#define VkglTestCase_009802_2 "_array_basic_type.shared.column_major_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009802, VkglTestCase_009802_1, VkglTestCase_009802_2);
