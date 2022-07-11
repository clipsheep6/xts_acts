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
#include "../ActsDeqpgles310019TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_018643_1 "dEQP-GLES31.functional.debug.negat"
#define VkglTestCase_018643_2 "ive_coverage.callbacks.state.enable"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018643, VkglTestCase_018643_1, VkglTestCase_018643_2);

#define VkglTestCase_018644_1 "dEQP-GLES31.functional.debug.negati"
#define VkglTestCase_018644_2 "ve_coverage.callbacks.state.disable"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018644, VkglTestCase_018644_1, VkglTestCase_018644_2);

#define VkglTestCase_018645_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_018645_2 "_coverage.callbacks.state.get_booleanv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018645, VkglTestCase_018645_1, VkglTestCase_018645_2);

#define VkglTestCase_018646_1 "dEQP-GLES31.functional.debug.negativ"
#define VkglTestCase_018646_2 "e_coverage.callbacks.state.get_floatv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018646, VkglTestCase_018646_1, VkglTestCase_018646_2);

#define VkglTestCase_018647_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_018647_2 "_coverage.callbacks.state.get_integerv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018647, VkglTestCase_018647_1, VkglTestCase_018647_2);

#define VkglTestCase_018648_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_018648_2 "coverage.callbacks.state.get_integer64v"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018648, VkglTestCase_018648_1, VkglTestCase_018648_2);

#define VkglTestCase_018649_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_018649_2 "coverage.callbacks.state.get_integeri_v"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018649, VkglTestCase_018649_1, VkglTestCase_018649_2);

#define VkglTestCase_018650_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_018650_2 "coverage.callbacks.state.get_booleani_v"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018650, VkglTestCase_018650_1, VkglTestCase_018650_2);

#define VkglTestCase_018651_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_018651_2 "overage.callbacks.state.get_integer64i_v"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018651, VkglTestCase_018651_1, VkglTestCase_018651_2);

#define VkglTestCase_018652_1 "dEQP-GLES31.functional.debug.negativ"
#define VkglTestCase_018652_2 "e_coverage.callbacks.state.get_string"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018652, VkglTestCase_018652_1, VkglTestCase_018652_2);

#define VkglTestCase_018653_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_018653_2 "_coverage.callbacks.state.get_stringi"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018653, VkglTestCase_018653_1, VkglTestCase_018653_2);

#define VkglTestCase_018654_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018654_2 "erage.callbacks.state.get_attached_shaders"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018654, VkglTestCase_018654_1, VkglTestCase_018654_2);

#define VkglTestCase_018655_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_018655_2 "_coverage.callbacks.state.get_shaderiv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018655, VkglTestCase_018655_1, VkglTestCase_018655_2);

#define VkglTestCase_018656_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018656_2 "erage.callbacks.state.get_shader_info_log"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018656, VkglTestCase_018656_1, VkglTestCase_018656_2);

#define VkglTestCase_018657_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_018657_2 "e.callbacks.state.get_shader_precision_format"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018657, VkglTestCase_018657_1, VkglTestCase_018657_2);

#define VkglTestCase_018658_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_018658_2 "verage.callbacks.state.get_shader_source"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018658, VkglTestCase_018658_1, VkglTestCase_018658_2);

#define VkglTestCase_018659_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_018659_2 "coverage.callbacks.state.get_programiv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018659, VkglTestCase_018659_1, VkglTestCase_018659_2);

#define VkglTestCase_018660_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018660_2 "erage.callbacks.state.get_program_info_log"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018660, VkglTestCase_018660_1, VkglTestCase_018660_2);

#define VkglTestCase_018661_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018661_2 "erage.callbacks.state.get_tex_parameterfv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018661, VkglTestCase_018661_1, VkglTestCase_018661_2);

#define VkglTestCase_018662_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018662_2 "erage.callbacks.state.get_tex_parameteriv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018662, VkglTestCase_018662_1, VkglTestCase_018662_2);

#define VkglTestCase_018663_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_018663_2 "coverage.callbacks.state.get_uniformfv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018663, VkglTestCase_018663_1, VkglTestCase_018663_2);

#define VkglTestCase_018664_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_018664_2 "coverage.callbacks.state.get_uniformiv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018664, VkglTestCase_018664_1, VkglTestCase_018664_2);

#define VkglTestCase_018665_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_018665_2 "coverage.callbacks.state.get_uniformuiv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018665, VkglTestCase_018665_1, VkglTestCase_018665_2);

#define VkglTestCase_018666_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_018666_2 "verage.callbacks.state.get_active_uniform"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018666, VkglTestCase_018666_1, VkglTestCase_018666_2);

#define VkglTestCase_018667_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_018667_2 "rage.callbacks.state.get_active_uniformsiv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018667, VkglTestCase_018667_1, VkglTestCase_018667_2);

#define VkglTestCase_018668_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018668_2 "ge.callbacks.state.get_active_uniform_blockiv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018668, VkglTestCase_018668_1, VkglTestCase_018668_2);

#define VkglTestCase_018669_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_018669_2 ".callbacks.state.get_active_uniform_block_name"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018669, VkglTestCase_018669_1, VkglTestCase_018669_2);

#define VkglTestCase_018670_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_018670_2 "verage.callbacks.state.get_active_attrib"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018670, VkglTestCase_018670_1, VkglTestCase_018670_2);

#define VkglTestCase_018671_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018671_2 "erage.callbacks.state.get_uniform_indices"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018671, VkglTestCase_018671_1, VkglTestCase_018671_2);

#define VkglTestCase_018672_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018672_2 "erage.callbacks.state.get_vertex_attribfv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018672, VkglTestCase_018672_1, VkglTestCase_018672_2);

#define VkglTestCase_018673_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018673_2 "erage.callbacks.state.get_vertex_attribiv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018673, VkglTestCase_018673_1, VkglTestCase_018673_2);

#define VkglTestCase_018674_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_018674_2 "rage.callbacks.state.get_vertex_attribi_iv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018674, VkglTestCase_018674_1, VkglTestCase_018674_2);

#define VkglTestCase_018675_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_018675_2 "rage.callbacks.state.get_vertex_attribi_uiv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018675, VkglTestCase_018675_1, VkglTestCase_018675_2);

#define VkglTestCase_018676_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018676_2 "ge.callbacks.state.get_vertex_attrib_pointerv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018676, VkglTestCase_018676_1, VkglTestCase_018676_2);

#define VkglTestCase_018677_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_018677_2 "rage.callbacks.state.get_frag_data_location"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018677, VkglTestCase_018677_1, VkglTestCase_018677_2);

#define VkglTestCase_018678_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_018678_2 "rage.callbacks.state.get_buffer_parameteriv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018678, VkglTestCase_018678_1, VkglTestCase_018678_2);

#define VkglTestCase_018679_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_018679_2 "age.callbacks.state.get_buffer_parameteri64v"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018679, VkglTestCase_018679_1, VkglTestCase_018679_2);

#define VkglTestCase_018680_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018680_2 "erage.callbacks.state.get_buffer_pointerv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018680, VkglTestCase_018680_1, VkglTestCase_018680_2);

#define VkglTestCase_018681_1 "dEQP-GLES31.functional.debug.negative_coverage.cal"
#define VkglTestCase_018681_2 "lbacks.state.get_framebuffer_attachment_parameteriv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018681, VkglTestCase_018681_1, VkglTestCase_018681_2);

#define VkglTestCase_018682_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_018682_2 "e.callbacks.state.get_renderbuffer_parameteriv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018682, VkglTestCase_018682_1, VkglTestCase_018682_2);

#define VkglTestCase_018683_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018683_2 "erage.callbacks.state.get_internalformativ"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018683, VkglTestCase_018683_1, VkglTestCase_018683_2);

#define VkglTestCase_018684_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_018684_2 "_coverage.callbacks.state.get_queryiv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018684, VkglTestCase_018684_1, VkglTestCase_018684_2);

#define VkglTestCase_018685_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018685_2 "erage.callbacks.state.get_query_objectuiv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018685, VkglTestCase_018685_1, VkglTestCase_018685_2);

#define VkglTestCase_018686_1 "dEQP-GLES31.functional.debug.negativ"
#define VkglTestCase_018686_2 "e_coverage.callbacks.state.get_synciv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018686, VkglTestCase_018686_1, VkglTestCase_018686_2);

#define VkglTestCase_018687_1 "dEQP-GLES31.functional.debug.negativ"
#define VkglTestCase_018687_2 "e_coverage.callbacks.state.is_enabled"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018687, VkglTestCase_018687_1, VkglTestCase_018687_2);

#define VkglTestCase_018688_1 "dEQP-GLES31.functional.debug.nega"
#define VkglTestCase_018688_2 "tive_coverage.callbacks.state.hint"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018688, VkglTestCase_018688_1, VkglTestCase_018688_2);

#define VkglTestCase_018689_1 "dEQP-GLES31.functional.debug.negati"
#define VkglTestCase_018689_2 "ve_coverage.callbacks.state.enablei"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018689, VkglTestCase_018689_1, VkglTestCase_018689_2);

#define VkglTestCase_018690_1 "dEQP-GLES31.functional.debug.negati"
#define VkglTestCase_018690_2 "ve_coverage.callbacks.state.disablei"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018690, VkglTestCase_018690_1, VkglTestCase_018690_2);

#define VkglTestCase_018691_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018691_2 "erage.callbacks.state.get_tex_parameteriiv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018691, VkglTestCase_018691_1, VkglTestCase_018691_2);

#define VkglTestCase_018692_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_018692_2 "rage.callbacks.state.get_tex_parameteriuiv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018692, VkglTestCase_018692_1, VkglTestCase_018692_2);

#define VkglTestCase_018693_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_018693_2 "coverage.callbacks.state.get_nuniformfv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018693, VkglTestCase_018693_1, VkglTestCase_018693_2);

#define VkglTestCase_018694_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_018694_2 "coverage.callbacks.state.get_nuniformiv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018694, VkglTestCase_018694_1, VkglTestCase_018694_2);

#define VkglTestCase_018695_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_018695_2 "overage.callbacks.state.get_nuniformuiv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018695, VkglTestCase_018695_1, VkglTestCase_018695_2);

#define VkglTestCase_018696_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_018696_2 "_coverage.callbacks.state.is_enabledi"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018696, VkglTestCase_018696_1, VkglTestCase_018696_2);
