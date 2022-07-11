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
#include "../ActsDeqpgles30014TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_013636_1 "dEQP-GLES3.functional.shaders.ope"
#define VkglTestCase_013636_2 "rator.selection.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013636, VkglTestCase_013636_1, VkglTestCase_013636_2);

#define VkglTestCase_013637_1 "dEQP-GLES3.functional.shaders.oper"
#define VkglTestCase_013637_2 "ator.selection.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013637, VkglTestCase_013637_1, VkglTestCase_013637_2);

#define VkglTestCase_013638_1 "dEQP-GLES3.functional.shaders.oper"
#define VkglTestCase_013638_2 "ator.selection.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013638, VkglTestCase_013638_1, VkglTestCase_013638_2);

#define VkglTestCase_013639_1 "dEQP-GLES3.functional.shaders.opera"
#define VkglTestCase_013639_2 "tor.selection.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013639, VkglTestCase_013639_1, VkglTestCase_013639_2);

#define VkglTestCase_013640_1 "dEQP-GLES3.functional.shaders.ope"
#define VkglTestCase_013640_2 "rator.selection.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013640, VkglTestCase_013640_1, VkglTestCase_013640_2);

#define VkglTestCase_013641_1 "dEQP-GLES3.functional.shaders.oper"
#define VkglTestCase_013641_2 "ator.selection.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013641, VkglTestCase_013641_1, VkglTestCase_013641_2);

#define VkglTestCase_013642_1 "dEQP-GLES3.functional.shaders.op"
#define VkglTestCase_013642_2 "erator.selection.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013642, VkglTestCase_013642_1, VkglTestCase_013642_2);

#define VkglTestCase_013643_1 "dEQP-GLES3.functional.shaders.ope"
#define VkglTestCase_013643_2 "rator.selection.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013643, VkglTestCase_013643_1, VkglTestCase_013643_2);

#define VkglTestCase_013644_1 "dEQP-GLES3.functional.shaders.oper"
#define VkglTestCase_013644_2 "ator.selection.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013644, VkglTestCase_013644_1, VkglTestCase_013644_2);

#define VkglTestCase_013645_1 "dEQP-GLES3.functional.shaders.opera"
#define VkglTestCase_013645_2 "tor.selection.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013645, VkglTestCase_013645_1, VkglTestCase_013645_2);

#define VkglTestCase_013646_1 "dEQP-GLES3.functional.shaders.ope"
#define VkglTestCase_013646_2 "rator.selection.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013646, VkglTestCase_013646_1, VkglTestCase_013646_2);

#define VkglTestCase_013647_1 "dEQP-GLES3.functional.shaders.oper"
#define VkglTestCase_013647_2 "ator.selection.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013647, VkglTestCase_013647_1, VkglTestCase_013647_2);

#define VkglTestCase_013648_1 "dEQP-GLES3.functional.shaders.op"
#define VkglTestCase_013648_2 "erator.selection.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013648, VkglTestCase_013648_1, VkglTestCase_013648_2);

#define VkglTestCase_013649_1 "dEQP-GLES3.functional.shaders.ope"
#define VkglTestCase_013649_2 "rator.selection.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013649, VkglTestCase_013649_1, VkglTestCase_013649_2);

#define VkglTestCase_013650_1 "dEQP-GLES3.functional.shaders.oper"
#define VkglTestCase_013650_2 "ator.selection.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013650, VkglTestCase_013650_1, VkglTestCase_013650_2);

#define VkglTestCase_013651_1 "dEQP-GLES3.functional.shaders.opera"
#define VkglTestCase_013651_2 "tor.selection.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013651, VkglTestCase_013651_1, VkglTestCase_013651_2);

#define VkglTestCase_013652_1 "dEQP-GLES3.functional.shaders.ope"
#define VkglTestCase_013652_2 "rator.selection.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013652, VkglTestCase_013652_1, VkglTestCase_013652_2);

#define VkglTestCase_013653_1 "dEQP-GLES3.functional.shaders.oper"
#define VkglTestCase_013653_2 "ator.selection.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013653, VkglTestCase_013653_1, VkglTestCase_013653_2);

#define VkglTestCase_013654_1 "dEQP-GLES3.functional.shaders.op"
#define VkglTestCase_013654_2 "erator.selection.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013654, VkglTestCase_013654_1, VkglTestCase_013654_2);

#define VkglTestCase_013655_1 "dEQP-GLES3.functional.shaders.ope"
#define VkglTestCase_013655_2 "rator.selection.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013655, VkglTestCase_013655_1, VkglTestCase_013655_2);

#define VkglTestCase_013656_1 "dEQP-GLES3.functional.shaders.oper"
#define VkglTestCase_013656_2 "ator.selection.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013656, VkglTestCase_013656_1, VkglTestCase_013656_2);

#define VkglTestCase_013657_1 "dEQP-GLES3.functional.shaders.opera"
#define VkglTestCase_013657_2 "tor.selection.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013657, VkglTestCase_013657_1, VkglTestCase_013657_2);

#define VkglTestCase_013658_1 "dEQP-GLES3.functional.shaders.ope"
#define VkglTestCase_013658_2 "rator.selection.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013658, VkglTestCase_013658_1, VkglTestCase_013658_2);

#define VkglTestCase_013659_1 "dEQP-GLES3.functional.shaders.oper"
#define VkglTestCase_013659_2 "ator.selection.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013659, VkglTestCase_013659_1, VkglTestCase_013659_2);

#define VkglTestCase_013660_1 "dEQP-GLES3.functional.shaders.op"
#define VkglTestCase_013660_2 "erator.selection.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013660, VkglTestCase_013660_1, VkglTestCase_013660_2);

#define VkglTestCase_013661_1 "dEQP-GLES3.functional.shaders.ope"
#define VkglTestCase_013661_2 "rator.selection.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013661, VkglTestCase_013661_1, VkglTestCase_013661_2);

#define VkglTestCase_013662_1 "dEQP-GLES3.functional.shaders.ope"
#define VkglTestCase_013662_2 "rator.selection.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013662, VkglTestCase_013662_1, VkglTestCase_013662_2);

#define VkglTestCase_013663_1 "dEQP-GLES3.functional.shaders.oper"
#define VkglTestCase_013663_2 "ator.selection.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013663, VkglTestCase_013663_1, VkglTestCase_013663_2);

#define VkglTestCase_013664_1 "dEQP-GLES3.functional.shaders.op"
#define VkglTestCase_013664_2 "erator.selection.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013664, VkglTestCase_013664_1, VkglTestCase_013664_2);

#define VkglTestCase_013665_1 "dEQP-GLES3.functional.shaders.ope"
#define VkglTestCase_013665_2 "rator.selection.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013665, VkglTestCase_013665_1, VkglTestCase_013665_2);

#define VkglTestCase_013666_1 "dEQP-GLES3.functional.shaders.ope"
#define VkglTestCase_013666_2 "rator.selection.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013666, VkglTestCase_013666_1, VkglTestCase_013666_2);

#define VkglTestCase_013667_1 "dEQP-GLES3.functional.shaders.oper"
#define VkglTestCase_013667_2 "ator.selection.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013667, VkglTestCase_013667_1, VkglTestCase_013667_2);

#define VkglTestCase_013668_1 "dEQP-GLES3.functional.shaders.oper"
#define VkglTestCase_013668_2 "ator.selection.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013668, VkglTestCase_013668_1, VkglTestCase_013668_2);

#define VkglTestCase_013669_1 "dEQP-GLES3.functional.shaders.opera"
#define VkglTestCase_013669_2 "tor.selection.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013669, VkglTestCase_013669_1, VkglTestCase_013669_2);

#define VkglTestCase_013670_1 "dEQP-GLES3.functional.shaders.ope"
#define VkglTestCase_013670_2 "rator.selection.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013670, VkglTestCase_013670_1, VkglTestCase_013670_2);

#define VkglTestCase_013671_1 "dEQP-GLES3.functional.shaders.oper"
#define VkglTestCase_013671_2 "ator.selection.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013671, VkglTestCase_013671_1, VkglTestCase_013671_2);

#define VkglTestCase_013672_1 "dEQP-GLES3.functional.shaders.ope"
#define VkglTestCase_013672_2 "rator.selection.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013672, VkglTestCase_013672_1, VkglTestCase_013672_2);

#define VkglTestCase_013673_1 "dEQP-GLES3.functional.shaders.oper"
#define VkglTestCase_013673_2 "ator.selection.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013673, VkglTestCase_013673_1, VkglTestCase_013673_2);

#define VkglTestCase_013674_1 "dEQP-GLES3.functional.shaders.oper"
#define VkglTestCase_013674_2 "ator.selection.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013674, VkglTestCase_013674_1, VkglTestCase_013674_2);

#define VkglTestCase_013675_1 "dEQP-GLES3.functional.shaders.opera"
#define VkglTestCase_013675_2 "tor.selection.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013675, VkglTestCase_013675_1, VkglTestCase_013675_2);

#define VkglTestCase_013676_1 "dEQP-GLES3.functional.shaders.ope"
#define VkglTestCase_013676_2 "rator.selection.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013676, VkglTestCase_013676_1, VkglTestCase_013676_2);

#define VkglTestCase_013677_1 "dEQP-GLES3.functional.shaders.oper"
#define VkglTestCase_013677_2 "ator.selection.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013677, VkglTestCase_013677_1, VkglTestCase_013677_2);

#define VkglTestCase_013678_1 "dEQP-GLES3.functional.shaders.ope"
#define VkglTestCase_013678_2 "rator.selection.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013678, VkglTestCase_013678_1, VkglTestCase_013678_2);

#define VkglTestCase_013679_1 "dEQP-GLES3.functional.shaders.oper"
#define VkglTestCase_013679_2 "ator.selection.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013679, VkglTestCase_013679_1, VkglTestCase_013679_2);

#define VkglTestCase_013680_1 "dEQP-GLES3.functional.shaders.oper"
#define VkglTestCase_013680_2 "ator.selection.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013680, VkglTestCase_013680_1, VkglTestCase_013680_2);

#define VkglTestCase_013681_1 "dEQP-GLES3.functional.shaders.opera"
#define VkglTestCase_013681_2 "tor.selection.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013681, VkglTestCase_013681_1, VkglTestCase_013681_2);

#define VkglTestCase_013682_1 "dEQP-GLES3.functional.shaders.ope"
#define VkglTestCase_013682_2 "rator.selection.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013682, VkglTestCase_013682_1, VkglTestCase_013682_2);

#define VkglTestCase_013683_1 "dEQP-GLES3.functional.shaders.oper"
#define VkglTestCase_013683_2 "ator.selection.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013683, VkglTestCase_013683_1, VkglTestCase_013683_2);

#define VkglTestCase_013684_1 "dEQP-GLES3.functional.shaders.op"
#define VkglTestCase_013684_2 "erator.selection.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013684, VkglTestCase_013684_1, VkglTestCase_013684_2);

#define VkglTestCase_013685_1 "dEQP-GLES3.functional.shaders.ope"
#define VkglTestCase_013685_2 "rator.selection.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013685, VkglTestCase_013685_1, VkglTestCase_013685_2);

#define VkglTestCase_013686_1 "dEQP-GLES3.functional.shaders.oper"
#define VkglTestCase_013686_2 "ator.selection.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013686, VkglTestCase_013686_1, VkglTestCase_013686_2);

#define VkglTestCase_013687_1 "dEQP-GLES3.functional.shaders.opera"
#define VkglTestCase_013687_2 "tor.selection.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013687, VkglTestCase_013687_1, VkglTestCase_013687_2);

#define VkglTestCase_013688_1 "dEQP-GLES3.functional.shaders.ope"
#define VkglTestCase_013688_2 "rator.selection.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013688, VkglTestCase_013688_1, VkglTestCase_013688_2);

#define VkglTestCase_013689_1 "dEQP-GLES3.functional.shaders.oper"
#define VkglTestCase_013689_2 "ator.selection.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013689, VkglTestCase_013689_1, VkglTestCase_013689_2);

#define VkglTestCase_013690_1 "dEQP-GLES3.functional.shaders.ope"
#define VkglTestCase_013690_2 "rator.selection.lowp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013690, VkglTestCase_013690_1, VkglTestCase_013690_2);

#define VkglTestCase_013691_1 "dEQP-GLES3.functional.shaders.oper"
#define VkglTestCase_013691_2 "ator.selection.lowp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013691, VkglTestCase_013691_1, VkglTestCase_013691_2);

#define VkglTestCase_013692_1 "dEQP-GLES3.functional.shaders.oper"
#define VkglTestCase_013692_2 "ator.selection.mediump_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013692, VkglTestCase_013692_1, VkglTestCase_013692_2);

#define VkglTestCase_013693_1 "dEQP-GLES3.functional.shaders.opera"
#define VkglTestCase_013693_2 "tor.selection.mediump_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013693, VkglTestCase_013693_1, VkglTestCase_013693_2);

#define VkglTestCase_013694_1 "dEQP-GLES3.functional.shaders.ope"
#define VkglTestCase_013694_2 "rator.selection.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013694, VkglTestCase_013694_1, VkglTestCase_013694_2);

#define VkglTestCase_013695_1 "dEQP-GLES3.functional.shaders.oper"
#define VkglTestCase_013695_2 "ator.selection.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013695, VkglTestCase_013695_1, VkglTestCase_013695_2);

#define VkglTestCase_013696_1 "dEQP-GLES3.functional.shaders.ope"
#define VkglTestCase_013696_2 "rator.selection.lowp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013696, VkglTestCase_013696_1, VkglTestCase_013696_2);

#define VkglTestCase_013697_1 "dEQP-GLES3.functional.shaders.oper"
#define VkglTestCase_013697_2 "ator.selection.lowp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013697, VkglTestCase_013697_1, VkglTestCase_013697_2);

#define VkglTestCase_013698_1 "dEQP-GLES3.functional.shaders.oper"
#define VkglTestCase_013698_2 "ator.selection.mediump_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013698, VkglTestCase_013698_1, VkglTestCase_013698_2);

#define VkglTestCase_013699_1 "dEQP-GLES3.functional.shaders.opera"
#define VkglTestCase_013699_2 "tor.selection.mediump_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013699, VkglTestCase_013699_1, VkglTestCase_013699_2);

#define VkglTestCase_013700_1 "dEQP-GLES3.functional.shaders.ope"
#define VkglTestCase_013700_2 "rator.selection.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013700, VkglTestCase_013700_1, VkglTestCase_013700_2);

#define VkglTestCase_013701_1 "dEQP-GLES3.functional.shaders.oper"
#define VkglTestCase_013701_2 "ator.selection.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013701, VkglTestCase_013701_1, VkglTestCase_013701_2);

#define VkglTestCase_013702_1 "dEQP-GLES3.functional.shaders.ope"
#define VkglTestCase_013702_2 "rator.selection.lowp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013702, VkglTestCase_013702_1, VkglTestCase_013702_2);

#define VkglTestCase_013703_1 "dEQP-GLES3.functional.shaders.oper"
#define VkglTestCase_013703_2 "ator.selection.lowp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013703, VkglTestCase_013703_1, VkglTestCase_013703_2);

#define VkglTestCase_013704_1 "dEQP-GLES3.functional.shaders.oper"
#define VkglTestCase_013704_2 "ator.selection.mediump_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013704, VkglTestCase_013704_1, VkglTestCase_013704_2);

#define VkglTestCase_013705_1 "dEQP-GLES3.functional.shaders.opera"
#define VkglTestCase_013705_2 "tor.selection.mediump_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013705, VkglTestCase_013705_1, VkglTestCase_013705_2);

#define VkglTestCase_013706_1 "dEQP-GLES3.functional.shaders.ope"
#define VkglTestCase_013706_2 "rator.selection.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013706, VkglTestCase_013706_1, VkglTestCase_013706_2);

#define VkglTestCase_013707_1 "dEQP-GLES3.functional.shaders.oper"
#define VkglTestCase_013707_2 "ator.selection.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013707, VkglTestCase_013707_1, VkglTestCase_013707_2);

#define VkglTestCase_013708_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_013708_2 "operator.selection.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013708, VkglTestCase_013708_1, VkglTestCase_013708_2);

#define VkglTestCase_013709_1 "dEQP-GLES3.functional.shaders.o"
#define VkglTestCase_013709_2 "perator.selection.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013709, VkglTestCase_013709_1, VkglTestCase_013709_2);

#define VkglTestCase_013710_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_013710_2 "operator.selection.bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013710, VkglTestCase_013710_1, VkglTestCase_013710_2);

#define VkglTestCase_013711_1 "dEQP-GLES3.functional.shaders.o"
#define VkglTestCase_013711_2 "perator.selection.bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013711, VkglTestCase_013711_1, VkglTestCase_013711_2);

#define VkglTestCase_013712_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_013712_2 "operator.selection.bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013712, VkglTestCase_013712_1, VkglTestCase_013712_2);

#define VkglTestCase_013713_1 "dEQP-GLES3.functional.shaders.o"
#define VkglTestCase_013713_2 "perator.selection.bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013713, VkglTestCase_013713_1, VkglTestCase_013713_2);

#define VkglTestCase_013714_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_013714_2 "operator.selection.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013714, VkglTestCase_013714_1, VkglTestCase_013714_2);

#define VkglTestCase_013715_1 "dEQP-GLES3.functional.shaders.o"
#define VkglTestCase_013715_2 "perator.selection.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013715, VkglTestCase_013715_1, VkglTestCase_013715_2);
