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

#define VkglTestCase_035613_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035613_2 "array_basic_type.packed.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035613, VkglTestCase_035613_1, VkglTestCase_035613_2);

#define VkglTestCase_035614_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035614_2 "rray_basic_type.packed.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035614, VkglTestCase_035614_1, VkglTestCase_035614_2);

#define VkglTestCase_035615_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035615_2 "array_basic_type.packed.vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035615, VkglTestCase_035615_1, VkglTestCase_035615_2);

#define VkglTestCase_035616_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035616_2 "rray_basic_type.packed.vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035616, VkglTestCase_035616_1, VkglTestCase_035616_2);

#define VkglTestCase_035617_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035617_2 "array_basic_type.packed.vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035617, VkglTestCase_035617_1, VkglTestCase_035617_2);

#define VkglTestCase_035618_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035618_2 "rray_basic_type.packed.vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035618, VkglTestCase_035618_1, VkglTestCase_035618_2);

#define VkglTestCase_035619_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035619_2 "array_basic_type.packed.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035619, VkglTestCase_035619_1, VkglTestCase_035619_2);

#define VkglTestCase_035620_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035620_2 "rray_basic_type.packed.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035620, VkglTestCase_035620_1, VkglTestCase_035620_2);

#define VkglTestCase_035621_1 "dEQP-GLES3.functional.ubo.instance"
#define VkglTestCase_035621_2 "_array_basic_type.packed.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035621, VkglTestCase_035621_1, VkglTestCase_035621_2);

#define VkglTestCase_035622_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035622_2 "array_basic_type.packed.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035622, VkglTestCase_035622_1, VkglTestCase_035622_2);

#define VkglTestCase_035623_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035623_2 "array_basic_type.packed.ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035623, VkglTestCase_035623_1, VkglTestCase_035623_2);

#define VkglTestCase_035624_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035624_2 "rray_basic_type.packed.ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035624, VkglTestCase_035624_1, VkglTestCase_035624_2);

#define VkglTestCase_035625_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035625_2 "array_basic_type.packed.ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035625, VkglTestCase_035625_1, VkglTestCase_035625_2);

#define VkglTestCase_035626_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035626_2 "rray_basic_type.packed.ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035626, VkglTestCase_035626_1, VkglTestCase_035626_2);

#define VkglTestCase_035627_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035627_2 "array_basic_type.packed.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035627, VkglTestCase_035627_1, VkglTestCase_035627_2);

#define VkglTestCase_035628_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035628_2 "rray_basic_type.packed.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035628, VkglTestCase_035628_1, VkglTestCase_035628_2);

#define VkglTestCase_035629_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035629_2 "array_basic_type.packed.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035629, VkglTestCase_035629_1, VkglTestCase_035629_2);

#define VkglTestCase_035630_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035630_2 "rray_basic_type.packed.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035630, VkglTestCase_035630_1, VkglTestCase_035630_2);

#define VkglTestCase_035631_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035631_2 "array_basic_type.packed.uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035631, VkglTestCase_035631_1, VkglTestCase_035631_2);

#define VkglTestCase_035632_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035632_2 "rray_basic_type.packed.uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035632, VkglTestCase_035632_1, VkglTestCase_035632_2);

#define VkglTestCase_035633_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035633_2 "array_basic_type.packed.uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035633, VkglTestCase_035633_1, VkglTestCase_035633_2);

#define VkglTestCase_035634_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035634_2 "rray_basic_type.packed.uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035634, VkglTestCase_035634_1, VkglTestCase_035634_2);

#define VkglTestCase_035635_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035635_2 "array_basic_type.packed.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035635, VkglTestCase_035635_1, VkglTestCase_035635_2);

#define VkglTestCase_035636_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035636_2 "rray_basic_type.packed.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035636, VkglTestCase_035636_1, VkglTestCase_035636_2);

#define VkglTestCase_035637_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035637_2 "array_basic_type.packed.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035637, VkglTestCase_035637_1, VkglTestCase_035637_2);

#define VkglTestCase_035638_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035638_2 "rray_basic_type.packed.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035638, VkglTestCase_035638_1, VkglTestCase_035638_2);

#define VkglTestCase_035639_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035639_2 "array_basic_type.packed.bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035639, VkglTestCase_035639_1, VkglTestCase_035639_2);

#define VkglTestCase_035640_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035640_2 "rray_basic_type.packed.bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035640, VkglTestCase_035640_1, VkglTestCase_035640_2);

#define VkglTestCase_035641_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035641_2 "array_basic_type.packed.bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035641, VkglTestCase_035641_1, VkglTestCase_035641_2);

#define VkglTestCase_035642_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035642_2 "rray_basic_type.packed.bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035642, VkglTestCase_035642_1, VkglTestCase_035642_2);

#define VkglTestCase_035643_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035643_2 "array_basic_type.packed.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035643, VkglTestCase_035643_1, VkglTestCase_035643_2);

#define VkglTestCase_035644_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035644_2 "rray_basic_type.packed.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035644, VkglTestCase_035644_1, VkglTestCase_035644_2);

#define VkglTestCase_035645_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035645_2 "array_basic_type.packed.mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035645, VkglTestCase_035645_1, VkglTestCase_035645_2);

#define VkglTestCase_035646_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035646_2 "rray_basic_type.packed.mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035646, VkglTestCase_035646_1, VkglTestCase_035646_2);

#define VkglTestCase_035647_1 "dEQP-GLES3.functional.ubo.instance_array"
#define VkglTestCase_035647_2 "_basic_type.packed.row_major_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035647, VkglTestCase_035647_1, VkglTestCase_035647_2);

#define VkglTestCase_035648_1 "dEQP-GLES3.functional.ubo.instance_array_"
#define VkglTestCase_035648_2 "basic_type.packed.row_major_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035648, VkglTestCase_035648_1, VkglTestCase_035648_2);

#define VkglTestCase_035649_1 "dEQP-GLES3.functional.ubo.instance_array_"
#define VkglTestCase_035649_2 "basic_type.packed.column_major_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035649, VkglTestCase_035649_1, VkglTestCase_035649_2);

#define VkglTestCase_035650_1 "dEQP-GLES3.functional.ubo.instance_array_b"
#define VkglTestCase_035650_2 "asic_type.packed.column_major_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035650, VkglTestCase_035650_1, VkglTestCase_035650_2);

#define VkglTestCase_035651_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035651_2 "array_basic_type.packed.mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035651, VkglTestCase_035651_1, VkglTestCase_035651_2);

#define VkglTestCase_035652_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035652_2 "rray_basic_type.packed.mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035652, VkglTestCase_035652_1, VkglTestCase_035652_2);

#define VkglTestCase_035653_1 "dEQP-GLES3.functional.ubo.instance_array"
#define VkglTestCase_035653_2 "_basic_type.packed.row_major_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035653, VkglTestCase_035653_1, VkglTestCase_035653_2);

#define VkglTestCase_035654_1 "dEQP-GLES3.functional.ubo.instance_array_"
#define VkglTestCase_035654_2 "basic_type.packed.row_major_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035654, VkglTestCase_035654_1, VkglTestCase_035654_2);

#define VkglTestCase_035655_1 "dEQP-GLES3.functional.ubo.instance_array_"
#define VkglTestCase_035655_2 "basic_type.packed.column_major_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035655, VkglTestCase_035655_1, VkglTestCase_035655_2);

#define VkglTestCase_035656_1 "dEQP-GLES3.functional.ubo.instance_array_b"
#define VkglTestCase_035656_2 "asic_type.packed.column_major_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035656, VkglTestCase_035656_1, VkglTestCase_035656_2);

#define VkglTestCase_035657_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035657_2 "array_basic_type.packed.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035657, VkglTestCase_035657_1, VkglTestCase_035657_2);

#define VkglTestCase_035658_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035658_2 "rray_basic_type.packed.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035658, VkglTestCase_035658_1, VkglTestCase_035658_2);

#define VkglTestCase_035659_1 "dEQP-GLES3.functional.ubo.instance_array"
#define VkglTestCase_035659_2 "_basic_type.packed.row_major_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035659, VkglTestCase_035659_1, VkglTestCase_035659_2);

#define VkglTestCase_035660_1 "dEQP-GLES3.functional.ubo.instance_array_"
#define VkglTestCase_035660_2 "basic_type.packed.row_major_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035660, VkglTestCase_035660_1, VkglTestCase_035660_2);

#define VkglTestCase_035661_1 "dEQP-GLES3.functional.ubo.instance_array_"
#define VkglTestCase_035661_2 "basic_type.packed.column_major_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035661, VkglTestCase_035661_1, VkglTestCase_035661_2);

#define VkglTestCase_035662_1 "dEQP-GLES3.functional.ubo.instance_array_b"
#define VkglTestCase_035662_2 "asic_type.packed.column_major_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035662, VkglTestCase_035662_1, VkglTestCase_035662_2);

#define VkglTestCase_035663_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035663_2 "rray_basic_type.packed.mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035663, VkglTestCase_035663_1, VkglTestCase_035663_2);

#define VkglTestCase_035664_1 "dEQP-GLES3.functional.ubo.instance_ar"
#define VkglTestCase_035664_2 "ray_basic_type.packed.mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035664, VkglTestCase_035664_1, VkglTestCase_035664_2);

#define VkglTestCase_035665_1 "dEQP-GLES3.functional.ubo.instance_array_"
#define VkglTestCase_035665_2 "basic_type.packed.row_major_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035665, VkglTestCase_035665_1, VkglTestCase_035665_2);

#define VkglTestCase_035666_1 "dEQP-GLES3.functional.ubo.instance_array_b"
#define VkglTestCase_035666_2 "asic_type.packed.row_major_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035666, VkglTestCase_035666_1, VkglTestCase_035666_2);

#define VkglTestCase_035667_1 "dEQP-GLES3.functional.ubo.instance_array_b"
#define VkglTestCase_035667_2 "asic_type.packed.column_major_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035667, VkglTestCase_035667_1, VkglTestCase_035667_2);

#define VkglTestCase_035668_1 "dEQP-GLES3.functional.ubo.instance_array_ba"
#define VkglTestCase_035668_2 "sic_type.packed.column_major_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035668, VkglTestCase_035668_1, VkglTestCase_035668_2);

#define VkglTestCase_035669_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035669_2 "rray_basic_type.packed.mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035669, VkglTestCase_035669_1, VkglTestCase_035669_2);

#define VkglTestCase_035670_1 "dEQP-GLES3.functional.ubo.instance_ar"
#define VkglTestCase_035670_2 "ray_basic_type.packed.mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035670, VkglTestCase_035670_1, VkglTestCase_035670_2);

#define VkglTestCase_035671_1 "dEQP-GLES3.functional.ubo.instance_array_"
#define VkglTestCase_035671_2 "basic_type.packed.row_major_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035671, VkglTestCase_035671_1, VkglTestCase_035671_2);

#define VkglTestCase_035672_1 "dEQP-GLES3.functional.ubo.instance_array_b"
#define VkglTestCase_035672_2 "asic_type.packed.row_major_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035672, VkglTestCase_035672_1, VkglTestCase_035672_2);

#define VkglTestCase_035673_1 "dEQP-GLES3.functional.ubo.instance_array_b"
#define VkglTestCase_035673_2 "asic_type.packed.column_major_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035673, VkglTestCase_035673_1, VkglTestCase_035673_2);

#define VkglTestCase_035674_1 "dEQP-GLES3.functional.ubo.instance_array_ba"
#define VkglTestCase_035674_2 "sic_type.packed.column_major_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035674, VkglTestCase_035674_1, VkglTestCase_035674_2);

#define VkglTestCase_035675_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035675_2 "rray_basic_type.packed.mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035675, VkglTestCase_035675_1, VkglTestCase_035675_2);

#define VkglTestCase_035676_1 "dEQP-GLES3.functional.ubo.instance_ar"
#define VkglTestCase_035676_2 "ray_basic_type.packed.mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035676, VkglTestCase_035676_1, VkglTestCase_035676_2);

#define VkglTestCase_035677_1 "dEQP-GLES3.functional.ubo.instance_array_"
#define VkglTestCase_035677_2 "basic_type.packed.row_major_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035677, VkglTestCase_035677_1, VkglTestCase_035677_2);

#define VkglTestCase_035678_1 "dEQP-GLES3.functional.ubo.instance_array_b"
#define VkglTestCase_035678_2 "asic_type.packed.row_major_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035678, VkglTestCase_035678_1, VkglTestCase_035678_2);

#define VkglTestCase_035679_1 "dEQP-GLES3.functional.ubo.instance_array_b"
#define VkglTestCase_035679_2 "asic_type.packed.column_major_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035679, VkglTestCase_035679_1, VkglTestCase_035679_2);

#define VkglTestCase_035680_1 "dEQP-GLES3.functional.ubo.instance_array_ba"
#define VkglTestCase_035680_2 "sic_type.packed.column_major_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035680, VkglTestCase_035680_1, VkglTestCase_035680_2);

#define VkglTestCase_035681_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035681_2 "rray_basic_type.packed.mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035681, VkglTestCase_035681_1, VkglTestCase_035681_2);

#define VkglTestCase_035682_1 "dEQP-GLES3.functional.ubo.instance_ar"
#define VkglTestCase_035682_2 "ray_basic_type.packed.mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035682, VkglTestCase_035682_1, VkglTestCase_035682_2);

#define VkglTestCase_035683_1 "dEQP-GLES3.functional.ubo.instance_array_"
#define VkglTestCase_035683_2 "basic_type.packed.row_major_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035683, VkglTestCase_035683_1, VkglTestCase_035683_2);

#define VkglTestCase_035684_1 "dEQP-GLES3.functional.ubo.instance_array_b"
#define VkglTestCase_035684_2 "asic_type.packed.row_major_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035684, VkglTestCase_035684_1, VkglTestCase_035684_2);

#define VkglTestCase_035685_1 "dEQP-GLES3.functional.ubo.instance_array_b"
#define VkglTestCase_035685_2 "asic_type.packed.column_major_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035685, VkglTestCase_035685_1, VkglTestCase_035685_2);

#define VkglTestCase_035686_1 "dEQP-GLES3.functional.ubo.instance_array_ba"
#define VkglTestCase_035686_2 "sic_type.packed.column_major_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035686, VkglTestCase_035686_1, VkglTestCase_035686_2);

#define VkglTestCase_035687_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035687_2 "rray_basic_type.packed.mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035687, VkglTestCase_035687_1, VkglTestCase_035687_2);

#define VkglTestCase_035688_1 "dEQP-GLES3.functional.ubo.instance_ar"
#define VkglTestCase_035688_2 "ray_basic_type.packed.mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035688, VkglTestCase_035688_1, VkglTestCase_035688_2);

#define VkglTestCase_035689_1 "dEQP-GLES3.functional.ubo.instance_array_"
#define VkglTestCase_035689_2 "basic_type.packed.row_major_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035689, VkglTestCase_035689_1, VkglTestCase_035689_2);

#define VkglTestCase_035690_1 "dEQP-GLES3.functional.ubo.instance_array_b"
#define VkglTestCase_035690_2 "asic_type.packed.row_major_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035690, VkglTestCase_035690_1, VkglTestCase_035690_2);

#define VkglTestCase_035691_1 "dEQP-GLES3.functional.ubo.instance_array_b"
#define VkglTestCase_035691_2 "asic_type.packed.column_major_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035691, VkglTestCase_035691_1, VkglTestCase_035691_2);

#define VkglTestCase_035692_1 "dEQP-GLES3.functional.ubo.instance_array_ba"
#define VkglTestCase_035692_2 "sic_type.packed.column_major_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035692, VkglTestCase_035692_1, VkglTestCase_035692_2);

#define VkglTestCase_035693_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035693_2 "rray_basic_type.packed.mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035693, VkglTestCase_035693_1, VkglTestCase_035693_2);

#define VkglTestCase_035694_1 "dEQP-GLES3.functional.ubo.instance_ar"
#define VkglTestCase_035694_2 "ray_basic_type.packed.mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035694, VkglTestCase_035694_1, VkglTestCase_035694_2);

#define VkglTestCase_035695_1 "dEQP-GLES3.functional.ubo.instance_array_"
#define VkglTestCase_035695_2 "basic_type.packed.row_major_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035695, VkglTestCase_035695_1, VkglTestCase_035695_2);

#define VkglTestCase_035696_1 "dEQP-GLES3.functional.ubo.instance_array_b"
#define VkglTestCase_035696_2 "asic_type.packed.row_major_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035696, VkglTestCase_035696_1, VkglTestCase_035696_2);

#define VkglTestCase_035697_1 "dEQP-GLES3.functional.ubo.instance_array_b"
#define VkglTestCase_035697_2 "asic_type.packed.column_major_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035697, VkglTestCase_035697_1, VkglTestCase_035697_2);

#define VkglTestCase_035698_1 "dEQP-GLES3.functional.ubo.instance_array_ba"
#define VkglTestCase_035698_2 "sic_type.packed.column_major_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035698, VkglTestCase_035698_1, VkglTestCase_035698_2);
