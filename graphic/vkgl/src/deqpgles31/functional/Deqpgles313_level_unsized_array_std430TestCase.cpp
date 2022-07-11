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

#define VkglTestCase_009633_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009633_2 ".3_level_unsized_array.std430.float"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009633, VkglTestCase_009633_1, VkglTestCase_009633_2);

#define VkglTestCase_009634_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009634_2 ".3_level_unsized_array.std430.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009634, VkglTestCase_009634_1, VkglTestCase_009634_2);

#define VkglTestCase_009635_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009635_2 ".3_level_unsized_array.std430.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009635, VkglTestCase_009635_1, VkglTestCase_009635_2);

#define VkglTestCase_009636_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009636_2 ".3_level_unsized_array.std430.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009636, VkglTestCase_009636_1, VkglTestCase_009636_2);

#define VkglTestCase_009637_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009637_2 "t.3_level_unsized_array.std430.int"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009637, VkglTestCase_009637_1, VkglTestCase_009637_2);

#define VkglTestCase_009638_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009638_2 ".3_level_unsized_array.std430.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009638, VkglTestCase_009638_1, VkglTestCase_009638_2);

#define VkglTestCase_009639_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009639_2 ".3_level_unsized_array.std430.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009639, VkglTestCase_009639_1, VkglTestCase_009639_2);

#define VkglTestCase_009640_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009640_2 ".3_level_unsized_array.std430.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009640, VkglTestCase_009640_1, VkglTestCase_009640_2);

#define VkglTestCase_009641_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009641_2 ".3_level_unsized_array.std430.uint"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009641, VkglTestCase_009641_1, VkglTestCase_009641_2);

#define VkglTestCase_009642_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009642_2 ".3_level_unsized_array.std430.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009642, VkglTestCase_009642_1, VkglTestCase_009642_2);

#define VkglTestCase_009643_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009643_2 ".3_level_unsized_array.std430.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009643, VkglTestCase_009643_1, VkglTestCase_009643_2);

#define VkglTestCase_009644_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009644_2 ".3_level_unsized_array.std430.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009644, VkglTestCase_009644_1, VkglTestCase_009644_2);

#define VkglTestCase_009645_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009645_2 ".3_level_unsized_array.std430.bool"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009645, VkglTestCase_009645_1, VkglTestCase_009645_2);

#define VkglTestCase_009646_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009646_2 ".3_level_unsized_array.std430.bvec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009646, VkglTestCase_009646_1, VkglTestCase_009646_2);

#define VkglTestCase_009647_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009647_2 ".3_level_unsized_array.std430.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009647, VkglTestCase_009647_1, VkglTestCase_009647_2);

#define VkglTestCase_009648_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009648_2 ".3_level_unsized_array.std430.bvec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009648, VkglTestCase_009648_1, VkglTestCase_009648_2);

#define VkglTestCase_009649_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009649_2 ".3_level_unsized_array.std430.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009649, VkglTestCase_009649_1, VkglTestCase_009649_2);

#define VkglTestCase_009650_1 "dEQP-GLES31.functional.ssbo.layout.3_le"
#define VkglTestCase_009650_2 "vel_unsized_array.std430.row_major_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009650, VkglTestCase_009650_1, VkglTestCase_009650_2);

#define VkglTestCase_009651_1 "dEQP-GLES31.functional.ssbo.layout.3_lev"
#define VkglTestCase_009651_2 "el_unsized_array.std430.column_major_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009651, VkglTestCase_009651_1, VkglTestCase_009651_2);

#define VkglTestCase_009652_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009652_2 ".3_level_unsized_array.std430.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009652, VkglTestCase_009652_1, VkglTestCase_009652_2);

#define VkglTestCase_009653_1 "dEQP-GLES31.functional.ssbo.layout.3_le"
#define VkglTestCase_009653_2 "vel_unsized_array.std430.row_major_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009653, VkglTestCase_009653_1, VkglTestCase_009653_2);

#define VkglTestCase_009654_1 "dEQP-GLES31.functional.ssbo.layout.3_lev"
#define VkglTestCase_009654_2 "el_unsized_array.std430.column_major_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009654, VkglTestCase_009654_1, VkglTestCase_009654_2);

#define VkglTestCase_009655_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009655_2 ".3_level_unsized_array.std430.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009655, VkglTestCase_009655_1, VkglTestCase_009655_2);

#define VkglTestCase_009656_1 "dEQP-GLES31.functional.ssbo.layout.3_le"
#define VkglTestCase_009656_2 "vel_unsized_array.std430.row_major_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009656, VkglTestCase_009656_1, VkglTestCase_009656_2);

#define VkglTestCase_009657_1 "dEQP-GLES31.functional.ssbo.layout.3_lev"
#define VkglTestCase_009657_2 "el_unsized_array.std430.column_major_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009657, VkglTestCase_009657_1, VkglTestCase_009657_2);

#define VkglTestCase_009658_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009658_2 "3_level_unsized_array.std430.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009658, VkglTestCase_009658_1, VkglTestCase_009658_2);

#define VkglTestCase_009659_1 "dEQP-GLES31.functional.ssbo.layout.3_lev"
#define VkglTestCase_009659_2 "el_unsized_array.std430.row_major_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009659, VkglTestCase_009659_1, VkglTestCase_009659_2);

#define VkglTestCase_009660_1 "dEQP-GLES31.functional.ssbo.layout.3_leve"
#define VkglTestCase_009660_2 "l_unsized_array.std430.column_major_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009660, VkglTestCase_009660_1, VkglTestCase_009660_2);

#define VkglTestCase_009661_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009661_2 "3_level_unsized_array.std430.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009661, VkglTestCase_009661_1, VkglTestCase_009661_2);

#define VkglTestCase_009662_1 "dEQP-GLES31.functional.ssbo.layout.3_lev"
#define VkglTestCase_009662_2 "el_unsized_array.std430.row_major_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009662, VkglTestCase_009662_1, VkglTestCase_009662_2);

#define VkglTestCase_009663_1 "dEQP-GLES31.functional.ssbo.layout.3_leve"
#define VkglTestCase_009663_2 "l_unsized_array.std430.column_major_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009663, VkglTestCase_009663_1, VkglTestCase_009663_2);

#define VkglTestCase_009664_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009664_2 "3_level_unsized_array.std430.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009664, VkglTestCase_009664_1, VkglTestCase_009664_2);

#define VkglTestCase_009665_1 "dEQP-GLES31.functional.ssbo.layout.3_lev"
#define VkglTestCase_009665_2 "el_unsized_array.std430.row_major_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009665, VkglTestCase_009665_1, VkglTestCase_009665_2);

#define VkglTestCase_009666_1 "dEQP-GLES31.functional.ssbo.layout.3_leve"
#define VkglTestCase_009666_2 "l_unsized_array.std430.column_major_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009666, VkglTestCase_009666_1, VkglTestCase_009666_2);

#define VkglTestCase_009667_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009667_2 "3_level_unsized_array.std430.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009667, VkglTestCase_009667_1, VkglTestCase_009667_2);

#define VkglTestCase_009668_1 "dEQP-GLES31.functional.ssbo.layout.3_lev"
#define VkglTestCase_009668_2 "el_unsized_array.std430.row_major_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009668, VkglTestCase_009668_1, VkglTestCase_009668_2);

#define VkglTestCase_009669_1 "dEQP-GLES31.functional.ssbo.layout.3_leve"
#define VkglTestCase_009669_2 "l_unsized_array.std430.column_major_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009669, VkglTestCase_009669_1, VkglTestCase_009669_2);

#define VkglTestCase_009670_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009670_2 "3_level_unsized_array.std430.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009670, VkglTestCase_009670_1, VkglTestCase_009670_2);

#define VkglTestCase_009671_1 "dEQP-GLES31.functional.ssbo.layout.3_lev"
#define VkglTestCase_009671_2 "el_unsized_array.std430.row_major_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009671, VkglTestCase_009671_1, VkglTestCase_009671_2);

#define VkglTestCase_009672_1 "dEQP-GLES31.functional.ssbo.layout.3_leve"
#define VkglTestCase_009672_2 "l_unsized_array.std430.column_major_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009672, VkglTestCase_009672_1, VkglTestCase_009672_2);

#define VkglTestCase_009673_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009673_2 "3_level_unsized_array.std430.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009673, VkglTestCase_009673_1, VkglTestCase_009673_2);

#define VkglTestCase_009674_1 "dEQP-GLES31.functional.ssbo.layout.3_lev"
#define VkglTestCase_009674_2 "el_unsized_array.std430.row_major_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009674, VkglTestCase_009674_1, VkglTestCase_009674_2);

#define VkglTestCase_009675_1 "dEQP-GLES31.functional.ssbo.layout.3_leve"
#define VkglTestCase_009675_2 "l_unsized_array.std430.column_major_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009675, VkglTestCase_009675_1, VkglTestCase_009675_2);
