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

#define VkglTestCase_019141_1 "dEQP-GLES31.functional.debug.ne"
#define VkglTestCase_019141_2 "gative_coverage.log.state.enable"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019141, VkglTestCase_019141_1, VkglTestCase_019141_2);

#define VkglTestCase_019142_1 "dEQP-GLES31.functional.debug.neg"
#define VkglTestCase_019142_2 "ative_coverage.log.state.disable"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019142, VkglTestCase_019142_1, VkglTestCase_019142_2);

#define VkglTestCase_019143_1 "dEQP-GLES31.functional.debug.negat"
#define VkglTestCase_019143_2 "ive_coverage.log.state.get_booleanv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019143, VkglTestCase_019143_1, VkglTestCase_019143_2);

#define VkglTestCase_019144_1 "dEQP-GLES31.functional.debug.nega"
#define VkglTestCase_019144_2 "tive_coverage.log.state.get_floatv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019144, VkglTestCase_019144_1, VkglTestCase_019144_2);

#define VkglTestCase_019145_1 "dEQP-GLES31.functional.debug.negat"
#define VkglTestCase_019145_2 "ive_coverage.log.state.get_integerv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019145, VkglTestCase_019145_1, VkglTestCase_019145_2);

#define VkglTestCase_019146_1 "dEQP-GLES31.functional.debug.negati"
#define VkglTestCase_019146_2 "ve_coverage.log.state.get_integer64v"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019146, VkglTestCase_019146_1, VkglTestCase_019146_2);

#define VkglTestCase_019147_1 "dEQP-GLES31.functional.debug.negati"
#define VkglTestCase_019147_2 "ve_coverage.log.state.get_integeri_v"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019147, VkglTestCase_019147_1, VkglTestCase_019147_2);

#define VkglTestCase_019148_1 "dEQP-GLES31.functional.debug.negati"
#define VkglTestCase_019148_2 "ve_coverage.log.state.get_booleani_v"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019148, VkglTestCase_019148_1, VkglTestCase_019148_2);

#define VkglTestCase_019149_1 "dEQP-GLES31.functional.debug.negativ"
#define VkglTestCase_019149_2 "e_coverage.log.state.get_integer64i_v"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019149, VkglTestCase_019149_1, VkglTestCase_019149_2);

#define VkglTestCase_019150_1 "dEQP-GLES31.functional.debug.nega"
#define VkglTestCase_019150_2 "tive_coverage.log.state.get_string"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019150, VkglTestCase_019150_1, VkglTestCase_019150_2);

#define VkglTestCase_019151_1 "dEQP-GLES31.functional.debug.negat"
#define VkglTestCase_019151_2 "ive_coverage.log.state.get_stringi"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019151, VkglTestCase_019151_1, VkglTestCase_019151_2);

#define VkglTestCase_019152_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019152_2 "coverage.log.state.get_attached_shaders"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019152, VkglTestCase_019152_1, VkglTestCase_019152_2);

#define VkglTestCase_019153_1 "dEQP-GLES31.functional.debug.negat"
#define VkglTestCase_019153_2 "ive_coverage.log.state.get_shaderiv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019153, VkglTestCase_019153_1, VkglTestCase_019153_2);

#define VkglTestCase_019154_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019154_2 "coverage.log.state.get_shader_info_log"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019154, VkglTestCase_019154_1, VkglTestCase_019154_2);

#define VkglTestCase_019155_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019155_2 "rage.log.state.get_shader_precision_format"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019155, VkglTestCase_019155_1, VkglTestCase_019155_2);

#define VkglTestCase_019156_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_019156_2 "_coverage.log.state.get_shader_source"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019156, VkglTestCase_019156_1, VkglTestCase_019156_2);

#define VkglTestCase_019157_1 "dEQP-GLES31.functional.debug.negati"
#define VkglTestCase_019157_2 "ve_coverage.log.state.get_programiv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019157, VkglTestCase_019157_1, VkglTestCase_019157_2);

#define VkglTestCase_019158_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019158_2 "coverage.log.state.get_program_info_log"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019158, VkglTestCase_019158_1, VkglTestCase_019158_2);

#define VkglTestCase_019159_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019159_2 "coverage.log.state.get_tex_parameterfv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019159, VkglTestCase_019159_1, VkglTestCase_019159_2);

#define VkglTestCase_019160_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019160_2 "coverage.log.state.get_tex_parameteriv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019160, VkglTestCase_019160_1, VkglTestCase_019160_2);

#define VkglTestCase_019161_1 "dEQP-GLES31.functional.debug.negati"
#define VkglTestCase_019161_2 "ve_coverage.log.state.get_uniformfv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019161, VkglTestCase_019161_1, VkglTestCase_019161_2);

#define VkglTestCase_019162_1 "dEQP-GLES31.functional.debug.negati"
#define VkglTestCase_019162_2 "ve_coverage.log.state.get_uniformiv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019162, VkglTestCase_019162_1, VkglTestCase_019162_2);

#define VkglTestCase_019163_1 "dEQP-GLES31.functional.debug.negati"
#define VkglTestCase_019163_2 "ve_coverage.log.state.get_uniformuiv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019163, VkglTestCase_019163_1, VkglTestCase_019163_2);

#define VkglTestCase_019164_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_019164_2 "_coverage.log.state.get_active_uniform"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019164, VkglTestCase_019164_1, VkglTestCase_019164_2);

#define VkglTestCase_019165_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_019165_2 "overage.log.state.get_active_uniformsiv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019165, VkglTestCase_019165_1, VkglTestCase_019165_2);

#define VkglTestCase_019166_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019166_2 "erage.log.state.get_active_uniform_blockiv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019166, VkglTestCase_019166_1, VkglTestCase_019166_2);

#define VkglTestCase_019167_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_019167_2 "age.log.state.get_active_uniform_block_name"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019167, VkglTestCase_019167_1, VkglTestCase_019167_2);

#define VkglTestCase_019168_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_019168_2 "_coverage.log.state.get_active_attrib"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019168, VkglTestCase_019168_1, VkglTestCase_019168_2);

#define VkglTestCase_019169_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019169_2 "coverage.log.state.get_uniform_indices"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019169, VkglTestCase_019169_1, VkglTestCase_019169_2);

#define VkglTestCase_019170_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019170_2 "coverage.log.state.get_vertex_attribfv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019170, VkglTestCase_019170_1, VkglTestCase_019170_2);

#define VkglTestCase_019171_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019171_2 "coverage.log.state.get_vertex_attribiv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019171, VkglTestCase_019171_1, VkglTestCase_019171_2);

#define VkglTestCase_019172_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_019172_2 "overage.log.state.get_vertex_attribi_iv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019172, VkglTestCase_019172_1, VkglTestCase_019172_2);

#define VkglTestCase_019173_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_019173_2 "overage.log.state.get_vertex_attribi_uiv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019173, VkglTestCase_019173_1, VkglTestCase_019173_2);

#define VkglTestCase_019174_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019174_2 "erage.log.state.get_vertex_attrib_pointerv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019174, VkglTestCase_019174_1, VkglTestCase_019174_2);

#define VkglTestCase_019175_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_019175_2 "overage.log.state.get_frag_data_location"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019175, VkglTestCase_019175_1, VkglTestCase_019175_2);

#define VkglTestCase_019176_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_019176_2 "overage.log.state.get_buffer_parameteriv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019176, VkglTestCase_019176_1, VkglTestCase_019176_2);

#define VkglTestCase_019177_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019177_2 "verage.log.state.get_buffer_parameteri64v"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019177, VkglTestCase_019177_1, VkglTestCase_019177_2);

#define VkglTestCase_019178_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019178_2 "coverage.log.state.get_buffer_pointerv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019178, VkglTestCase_019178_1, VkglTestCase_019178_2);

#define VkglTestCase_019179_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_019179_2 "log.state.get_framebuffer_attachment_parameteriv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019179, VkglTestCase_019179_1, VkglTestCase_019179_2);

#define VkglTestCase_019180_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019180_2 "rage.log.state.get_renderbuffer_parameteriv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019180, VkglTestCase_019180_1, VkglTestCase_019180_2);

#define VkglTestCase_019181_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019181_2 "coverage.log.state.get_internalformativ"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019181, VkglTestCase_019181_1, VkglTestCase_019181_2);

#define VkglTestCase_019182_1 "dEQP-GLES31.functional.debug.negat"
#define VkglTestCase_019182_2 "ive_coverage.log.state.get_queryiv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019182, VkglTestCase_019182_1, VkglTestCase_019182_2);

#define VkglTestCase_019183_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019183_2 "coverage.log.state.get_query_objectuiv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019183, VkglTestCase_019183_1, VkglTestCase_019183_2);

#define VkglTestCase_019184_1 "dEQP-GLES31.functional.debug.nega"
#define VkglTestCase_019184_2 "tive_coverage.log.state.get_synciv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019184, VkglTestCase_019184_1, VkglTestCase_019184_2);

#define VkglTestCase_019185_1 "dEQP-GLES31.functional.debug.nega"
#define VkglTestCase_019185_2 "tive_coverage.log.state.is_enabled"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019185, VkglTestCase_019185_1, VkglTestCase_019185_2);

#define VkglTestCase_019186_1 "dEQP-GLES31.functional.debug.n"
#define VkglTestCase_019186_2 "egative_coverage.log.state.hint"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019186, VkglTestCase_019186_1, VkglTestCase_019186_2);

#define VkglTestCase_019187_1 "dEQP-GLES31.functional.debug.neg"
#define VkglTestCase_019187_2 "ative_coverage.log.state.enablei"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019187, VkglTestCase_019187_1, VkglTestCase_019187_2);

#define VkglTestCase_019188_1 "dEQP-GLES31.functional.debug.neg"
#define VkglTestCase_019188_2 "ative_coverage.log.state.disablei"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019188, VkglTestCase_019188_1, VkglTestCase_019188_2);

#define VkglTestCase_019189_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019189_2 "coverage.log.state.get_tex_parameteriiv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019189, VkglTestCase_019189_1, VkglTestCase_019189_2);

#define VkglTestCase_019190_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_019190_2 "overage.log.state.get_tex_parameteriuiv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019190, VkglTestCase_019190_1, VkglTestCase_019190_2);

#define VkglTestCase_019191_1 "dEQP-GLES31.functional.debug.negati"
#define VkglTestCase_019191_2 "ve_coverage.log.state.get_nuniformfv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019191, VkglTestCase_019191_1, VkglTestCase_019191_2);

#define VkglTestCase_019192_1 "dEQP-GLES31.functional.debug.negati"
#define VkglTestCase_019192_2 "ve_coverage.log.state.get_nuniformiv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019192, VkglTestCase_019192_1, VkglTestCase_019192_2);

#define VkglTestCase_019193_1 "dEQP-GLES31.functional.debug.negativ"
#define VkglTestCase_019193_2 "e_coverage.log.state.get_nuniformuiv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019193, VkglTestCase_019193_1, VkglTestCase_019193_2);

#define VkglTestCase_019194_1 "dEQP-GLES31.functional.debug.negat"
#define VkglTestCase_019194_2 "ive_coverage.log.state.is_enabledi"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019194, VkglTestCase_019194_1, VkglTestCase_019194_2);
