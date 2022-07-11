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
#include "../ActsDeqpgles310020TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_019638_1 "dEQP-GLES31.functional.debug.negat"
#define VkglTestCase_019638_2 "ive_coverage.get_error.state.enable"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019638, VkglTestCase_019638_1, VkglTestCase_019638_2);

#define VkglTestCase_019639_1 "dEQP-GLES31.functional.debug.negati"
#define VkglTestCase_019639_2 "ve_coverage.get_error.state.disable"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019639, VkglTestCase_019639_1, VkglTestCase_019639_2);

#define VkglTestCase_019640_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_019640_2 "_coverage.get_error.state.get_booleanv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019640, VkglTestCase_019640_1, VkglTestCase_019640_2);

#define VkglTestCase_019641_1 "dEQP-GLES31.functional.debug.negativ"
#define VkglTestCase_019641_2 "e_coverage.get_error.state.get_floatv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019641, VkglTestCase_019641_1, VkglTestCase_019641_2);

#define VkglTestCase_019642_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_019642_2 "_coverage.get_error.state.get_integerv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019642, VkglTestCase_019642_1, VkglTestCase_019642_2);

#define VkglTestCase_019643_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019643_2 "coverage.get_error.state.get_integer64v"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019643, VkglTestCase_019643_1, VkglTestCase_019643_2);

#define VkglTestCase_019644_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019644_2 "coverage.get_error.state.get_integeri_v"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019644, VkglTestCase_019644_1, VkglTestCase_019644_2);

#define VkglTestCase_019645_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019645_2 "coverage.get_error.state.get_booleani_v"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019645, VkglTestCase_019645_1, VkglTestCase_019645_2);

#define VkglTestCase_019646_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_019646_2 "overage.get_error.state.get_integer64i_v"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019646, VkglTestCase_019646_1, VkglTestCase_019646_2);

#define VkglTestCase_019647_1 "dEQP-GLES31.functional.debug.negativ"
#define VkglTestCase_019647_2 "e_coverage.get_error.state.get_string"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019647, VkglTestCase_019647_1, VkglTestCase_019647_2);

#define VkglTestCase_019648_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_019648_2 "_coverage.get_error.state.get_stringi"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019648, VkglTestCase_019648_1, VkglTestCase_019648_2);

#define VkglTestCase_019649_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019649_2 "erage.get_error.state.get_attached_shaders"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019649, VkglTestCase_019649_1, VkglTestCase_019649_2);

#define VkglTestCase_019650_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_019650_2 "_coverage.get_error.state.get_shaderiv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019650, VkglTestCase_019650_1, VkglTestCase_019650_2);

#define VkglTestCase_019651_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019651_2 "erage.get_error.state.get_shader_info_log"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019651, VkglTestCase_019651_1, VkglTestCase_019651_2);

#define VkglTestCase_019652_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019652_2 "e.get_error.state.get_shader_precision_format"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019652, VkglTestCase_019652_1, VkglTestCase_019652_2);

#define VkglTestCase_019653_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019653_2 "verage.get_error.state.get_shader_source"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019653, VkglTestCase_019653_1, VkglTestCase_019653_2);

#define VkglTestCase_019654_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019654_2 "coverage.get_error.state.get_programiv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019654, VkglTestCase_019654_1, VkglTestCase_019654_2);

#define VkglTestCase_019655_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019655_2 "erage.get_error.state.get_program_info_log"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019655, VkglTestCase_019655_1, VkglTestCase_019655_2);

#define VkglTestCase_019656_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019656_2 "erage.get_error.state.get_tex_parameterfv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019656, VkglTestCase_019656_1, VkglTestCase_019656_2);

#define VkglTestCase_019657_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019657_2 "erage.get_error.state.get_tex_parameteriv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019657, VkglTestCase_019657_1, VkglTestCase_019657_2);

#define VkglTestCase_019658_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019658_2 "coverage.get_error.state.get_uniformfv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019658, VkglTestCase_019658_1, VkglTestCase_019658_2);

#define VkglTestCase_019659_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019659_2 "coverage.get_error.state.get_uniformiv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019659, VkglTestCase_019659_1, VkglTestCase_019659_2);

#define VkglTestCase_019660_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019660_2 "coverage.get_error.state.get_uniformuiv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019660, VkglTestCase_019660_1, VkglTestCase_019660_2);

#define VkglTestCase_019661_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019661_2 "verage.get_error.state.get_active_uniform"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019661, VkglTestCase_019661_1, VkglTestCase_019661_2);

#define VkglTestCase_019662_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019662_2 "rage.get_error.state.get_active_uniformsiv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019662, VkglTestCase_019662_1, VkglTestCase_019662_2);

#define VkglTestCase_019663_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019663_2 "ge.get_error.state.get_active_uniform_blockiv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019663, VkglTestCase_019663_1, VkglTestCase_019663_2);

#define VkglTestCase_019664_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_019664_2 ".get_error.state.get_active_uniform_block_name"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019664, VkglTestCase_019664_1, VkglTestCase_019664_2);

#define VkglTestCase_019665_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019665_2 "verage.get_error.state.get_active_attrib"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019665, VkglTestCase_019665_1, VkglTestCase_019665_2);

#define VkglTestCase_019666_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019666_2 "erage.get_error.state.get_uniform_indices"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019666, VkglTestCase_019666_1, VkglTestCase_019666_2);

#define VkglTestCase_019667_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019667_2 "erage.get_error.state.get_vertex_attribfv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019667, VkglTestCase_019667_1, VkglTestCase_019667_2);

#define VkglTestCase_019668_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019668_2 "erage.get_error.state.get_vertex_attribiv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019668, VkglTestCase_019668_1, VkglTestCase_019668_2);

#define VkglTestCase_019669_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019669_2 "rage.get_error.state.get_vertex_attribi_iv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019669, VkglTestCase_019669_1, VkglTestCase_019669_2);

#define VkglTestCase_019670_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019670_2 "rage.get_error.state.get_vertex_attribi_uiv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019670, VkglTestCase_019670_1, VkglTestCase_019670_2);

#define VkglTestCase_019671_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019671_2 "ge.get_error.state.get_vertex_attrib_pointerv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019671, VkglTestCase_019671_1, VkglTestCase_019671_2);

#define VkglTestCase_019672_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019672_2 "rage.get_error.state.get_frag_data_location"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019672, VkglTestCase_019672_1, VkglTestCase_019672_2);

#define VkglTestCase_019673_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019673_2 "rage.get_error.state.get_buffer_parameteriv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019673, VkglTestCase_019673_1, VkglTestCase_019673_2);

#define VkglTestCase_019674_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_019674_2 "age.get_error.state.get_buffer_parameteri64v"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019674, VkglTestCase_019674_1, VkglTestCase_019674_2);

#define VkglTestCase_019675_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019675_2 "erage.get_error.state.get_buffer_pointerv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019675, VkglTestCase_019675_1, VkglTestCase_019675_2);

#define VkglTestCase_019676_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019676_2 "e.get_error.state.get_renderbuffer_parameteriv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019676, VkglTestCase_019676_1, VkglTestCase_019676_2);

#define VkglTestCase_019677_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019677_2 "erage.get_error.state.get_internalformativ"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019677, VkglTestCase_019677_1, VkglTestCase_019677_2);

#define VkglTestCase_019678_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_019678_2 "_coverage.get_error.state.get_queryiv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019678, VkglTestCase_019678_1, VkglTestCase_019678_2);

#define VkglTestCase_019679_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019679_2 "erage.get_error.state.get_query_objectuiv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019679, VkglTestCase_019679_1, VkglTestCase_019679_2);

#define VkglTestCase_019680_1 "dEQP-GLES31.functional.debug.negativ"
#define VkglTestCase_019680_2 "e_coverage.get_error.state.get_synciv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019680, VkglTestCase_019680_1, VkglTestCase_019680_2);

#define VkglTestCase_019681_1 "dEQP-GLES31.functional.debug.negativ"
#define VkglTestCase_019681_2 "e_coverage.get_error.state.is_enabled"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019681, VkglTestCase_019681_1, VkglTestCase_019681_2);

#define VkglTestCase_019682_1 "dEQP-GLES31.functional.debug.nega"
#define VkglTestCase_019682_2 "tive_coverage.get_error.state.hint"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019682, VkglTestCase_019682_1, VkglTestCase_019682_2);

#define VkglTestCase_019683_1 "dEQP-GLES31.functional.debug.negati"
#define VkglTestCase_019683_2 "ve_coverage.get_error.state.enablei"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019683, VkglTestCase_019683_1, VkglTestCase_019683_2);

#define VkglTestCase_019684_1 "dEQP-GLES31.functional.debug.negati"
#define VkglTestCase_019684_2 "ve_coverage.get_error.state.disablei"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019684, VkglTestCase_019684_1, VkglTestCase_019684_2);

#define VkglTestCase_019685_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019685_2 "erage.get_error.state.get_tex_parameteriiv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019685, VkglTestCase_019685_1, VkglTestCase_019685_2);

#define VkglTestCase_019686_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019686_2 "rage.get_error.state.get_tex_parameteriuiv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019686, VkglTestCase_019686_1, VkglTestCase_019686_2);

#define VkglTestCase_019687_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019687_2 "coverage.get_error.state.get_nuniformfv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019687, VkglTestCase_019687_1, VkglTestCase_019687_2);

#define VkglTestCase_019688_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019688_2 "coverage.get_error.state.get_nuniformiv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019688, VkglTestCase_019688_1, VkglTestCase_019688_2);

#define VkglTestCase_019689_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_019689_2 "overage.get_error.state.get_nuniformuiv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019689, VkglTestCase_019689_1, VkglTestCase_019689_2);

#define VkglTestCase_019690_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_019690_2 "_coverage.get_error.state.is_enabledi"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019690, VkglTestCase_019690_1, VkglTestCase_019690_2);
