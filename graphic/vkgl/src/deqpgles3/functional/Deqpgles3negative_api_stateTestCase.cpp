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
#include "../ActsDeqpgles30043TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_042170_1 "dEQP-GLES3.functional.n"
#define VkglTestCase_042170_2 "egative_api.state.enable"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042170, VkglTestCase_042170_1, VkglTestCase_042170_2);

#define VkglTestCase_042171_1 "dEQP-GLES3.functional.ne"
#define VkglTestCase_042171_2 "gative_api.state.disable"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042171, VkglTestCase_042171_1, VkglTestCase_042171_2);

#define VkglTestCase_042172_1 "dEQP-GLES3.functional.nega"
#define VkglTestCase_042172_2 "tive_api.state.get_booleanv"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042172, VkglTestCase_042172_1, VkglTestCase_042172_2);

#define VkglTestCase_042173_1 "dEQP-GLES3.functional.neg"
#define VkglTestCase_042173_2 "ative_api.state.get_floatv"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042173, VkglTestCase_042173_1, VkglTestCase_042173_2);

#define VkglTestCase_042174_1 "dEQP-GLES3.functional.nega"
#define VkglTestCase_042174_2 "tive_api.state.get_integerv"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042174, VkglTestCase_042174_1, VkglTestCase_042174_2);

#define VkglTestCase_042175_1 "dEQP-GLES3.functional.negat"
#define VkglTestCase_042175_2 "ive_api.state.get_integer64v"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042175, VkglTestCase_042175_1, VkglTestCase_042175_2);

#define VkglTestCase_042176_1 "dEQP-GLES3.functional.negat"
#define VkglTestCase_042176_2 "ive_api.state.get_integeri_v"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042176, VkglTestCase_042176_1, VkglTestCase_042176_2);

#define VkglTestCase_042177_1 "dEQP-GLES3.functional.negati"
#define VkglTestCase_042177_2 "ve_api.state.get_integer64i_v"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042177, VkglTestCase_042177_1, VkglTestCase_042177_2);

#define VkglTestCase_042178_1 "dEQP-GLES3.functional.neg"
#define VkglTestCase_042178_2 "ative_api.state.get_string"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042178, VkglTestCase_042178_1, VkglTestCase_042178_2);

#define VkglTestCase_042179_1 "dEQP-GLES3.functional.nega"
#define VkglTestCase_042179_2 "tive_api.state.get_stringi"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042179, VkglTestCase_042179_1, VkglTestCase_042179_2);

#define VkglTestCase_042180_1 "dEQP-GLES3.functional.negative"
#define VkglTestCase_042180_2 "_api.state.get_attached_shaders"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042180, VkglTestCase_042180_1, VkglTestCase_042180_2);

#define VkglTestCase_042181_1 "dEQP-GLES3.functional.nega"
#define VkglTestCase_042181_2 "tive_api.state.get_shaderiv"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042181, VkglTestCase_042181_1, VkglTestCase_042181_2);

#define VkglTestCase_042182_1 "dEQP-GLES3.functional.negative"
#define VkglTestCase_042182_2 "_api.state.get_shader_info_log"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042182, VkglTestCase_042182_1, VkglTestCase_042182_2);

#define VkglTestCase_042183_1 "dEQP-GLES3.functional.negative_api"
#define VkglTestCase_042183_2 ".state.get_shader_precision_format"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042183, VkglTestCase_042183_1, VkglTestCase_042183_2);

#define VkglTestCase_042184_1 "dEQP-GLES3.functional.negativ"
#define VkglTestCase_042184_2 "e_api.state.get_shader_source"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042184, VkglTestCase_042184_1, VkglTestCase_042184_2);

#define VkglTestCase_042185_1 "dEQP-GLES3.functional.negat"
#define VkglTestCase_042185_2 "ive_api.state.get_programiv"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042185, VkglTestCase_042185_1, VkglTestCase_042185_2);

#define VkglTestCase_042186_1 "dEQP-GLES3.functional.negative"
#define VkglTestCase_042186_2 "_api.state.get_program_info_log"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042186, VkglTestCase_042186_1, VkglTestCase_042186_2);

#define VkglTestCase_042187_1 "dEQP-GLES3.functional.negative"
#define VkglTestCase_042187_2 "_api.state.get_tex_parameterfv"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042187, VkglTestCase_042187_1, VkglTestCase_042187_2);

#define VkglTestCase_042188_1 "dEQP-GLES3.functional.negative"
#define VkglTestCase_042188_2 "_api.state.get_tex_parameteriv"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042188, VkglTestCase_042188_1, VkglTestCase_042188_2);

#define VkglTestCase_042189_1 "dEQP-GLES3.functional.negat"
#define VkglTestCase_042189_2 "ive_api.state.get_uniformfv"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042189, VkglTestCase_042189_1, VkglTestCase_042189_2);

#define VkglTestCase_042190_1 "dEQP-GLES3.functional.negat"
#define VkglTestCase_042190_2 "ive_api.state.get_uniformiv"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042190, VkglTestCase_042190_1, VkglTestCase_042190_2);

#define VkglTestCase_042191_1 "dEQP-GLES3.functional.negat"
#define VkglTestCase_042191_2 "ive_api.state.get_uniformuiv"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042191, VkglTestCase_042191_1, VkglTestCase_042191_2);

#define VkglTestCase_042192_1 "dEQP-GLES3.functional.negativ"
#define VkglTestCase_042192_2 "e_api.state.get_active_uniform"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042192, VkglTestCase_042192_1, VkglTestCase_042192_2);

#define VkglTestCase_042193_1 "dEQP-GLES3.functional.negative_"
#define VkglTestCase_042193_2 "api.state.get_active_uniformsiv"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042193, VkglTestCase_042193_1, VkglTestCase_042193_2);

#define VkglTestCase_042194_1 "dEQP-GLES3.functional.negative_ap"
#define VkglTestCase_042194_2 "i.state.get_active_uniform_blockiv"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042194, VkglTestCase_042194_1, VkglTestCase_042194_2);

#define VkglTestCase_042195_1 "dEQP-GLES3.functional.negative_api."
#define VkglTestCase_042195_2 "state.get_active_uniform_block_name"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042195, VkglTestCase_042195_1, VkglTestCase_042195_2);

#define VkglTestCase_042196_1 "dEQP-GLES3.functional.negativ"
#define VkglTestCase_042196_2 "e_api.state.get_active_attrib"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042196, VkglTestCase_042196_1, VkglTestCase_042196_2);

#define VkglTestCase_042197_1 "dEQP-GLES3.functional.negative"
#define VkglTestCase_042197_2 "_api.state.get_uniform_indices"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042197, VkglTestCase_042197_1, VkglTestCase_042197_2);

#define VkglTestCase_042198_1 "dEQP-GLES3.functional.negative"
#define VkglTestCase_042198_2 "_api.state.get_vertex_attribfv"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042198, VkglTestCase_042198_1, VkglTestCase_042198_2);

#define VkglTestCase_042199_1 "dEQP-GLES3.functional.negative"
#define VkglTestCase_042199_2 "_api.state.get_vertex_attribiv"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042199, VkglTestCase_042199_1, VkglTestCase_042199_2);

#define VkglTestCase_042200_1 "dEQP-GLES3.functional.negative_"
#define VkglTestCase_042200_2 "api.state.get_vertex_attribi_iv"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042200, VkglTestCase_042200_1, VkglTestCase_042200_2);

#define VkglTestCase_042201_1 "dEQP-GLES3.functional.negative_"
#define VkglTestCase_042201_2 "api.state.get_vertex_attribi_uiv"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042201, VkglTestCase_042201_1, VkglTestCase_042201_2);

#define VkglTestCase_042202_1 "dEQP-GLES3.functional.negative_ap"
#define VkglTestCase_042202_2 "i.state.get_vertex_attrib_pointerv"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042202, VkglTestCase_042202_1, VkglTestCase_042202_2);

#define VkglTestCase_042203_1 "dEQP-GLES3.functional.negative_"
#define VkglTestCase_042203_2 "api.state.get_frag_data_location"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042203, VkglTestCase_042203_1, VkglTestCase_042203_2);

#define VkglTestCase_042204_1 "dEQP-GLES3.functional.negative_"
#define VkglTestCase_042204_2 "api.state.get_buffer_parameteriv"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042204, VkglTestCase_042204_1, VkglTestCase_042204_2);

#define VkglTestCase_042205_1 "dEQP-GLES3.functional.negative_a"
#define VkglTestCase_042205_2 "pi.state.get_buffer_parameteri64v"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042205, VkglTestCase_042205_1, VkglTestCase_042205_2);

#define VkglTestCase_042206_1 "dEQP-GLES3.functional.negative"
#define VkglTestCase_042206_2 "_api.state.get_buffer_pointerv"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042206, VkglTestCase_042206_1, VkglTestCase_042206_2);

#define VkglTestCase_042207_1 "dEQP-GLES3.functional.negative_api.stat"
#define VkglTestCase_042207_2 "e.get_framebuffer_attachment_parameteriv"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042207, VkglTestCase_042207_1, VkglTestCase_042207_2);

#define VkglTestCase_042208_1 "dEQP-GLES3.functional.negative_api"
#define VkglTestCase_042208_2 ".state.get_renderbuffer_parameteriv"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042208, VkglTestCase_042208_1, VkglTestCase_042208_2);

#define VkglTestCase_042209_1 "dEQP-GLES3.functional.negative"
#define VkglTestCase_042209_2 "_api.state.get_internalformativ"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042209, VkglTestCase_042209_1, VkglTestCase_042209_2);

#define VkglTestCase_042210_1 "dEQP-GLES3.functional.nega"
#define VkglTestCase_042210_2 "tive_api.state.get_queryiv"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042210, VkglTestCase_042210_1, VkglTestCase_042210_2);

#define VkglTestCase_042211_1 "dEQP-GLES3.functional.negative"
#define VkglTestCase_042211_2 "_api.state.get_query_objectuiv"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042211, VkglTestCase_042211_1, VkglTestCase_042211_2);

#define VkglTestCase_042212_1 "dEQP-GLES3.functional.neg"
#define VkglTestCase_042212_2 "ative_api.state.get_synciv"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042212, VkglTestCase_042212_1, VkglTestCase_042212_2);

#define VkglTestCase_042213_1 "dEQP-GLES3.functional.neg"
#define VkglTestCase_042213_2 "ative_api.state.is_enabled"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042213, VkglTestCase_042213_1, VkglTestCase_042213_2);

#define VkglTestCase_042214_1 "dEQP-GLES3.functional."
#define VkglTestCase_042214_2 "negative_api.state.hint"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042214, VkglTestCase_042214_1, VkglTestCase_042214_2);

#define VkglTestCase_042215_1 "dEQP-GLES3.functional.neg"
#define VkglTestCase_042215_2 "ative_api.state.is_buffer"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042215, VkglTestCase_042215_1, VkglTestCase_042215_2);

#define VkglTestCase_042216_1 "dEQP-GLES3.functional.negat"
#define VkglTestCase_042216_2 "ive_api.state.is_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042216, VkglTestCase_042216_1, VkglTestCase_042216_2);

#define VkglTestCase_042217_1 "dEQP-GLES3.functional.neg"
#define VkglTestCase_042217_2 "ative_api.state.is_program"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042217, VkglTestCase_042217_1, VkglTestCase_042217_2);

#define VkglTestCase_042218_1 "dEQP-GLES3.functional.negati"
#define VkglTestCase_042218_2 "ve_api.state.is_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042218, VkglTestCase_042218_1, VkglTestCase_042218_2);

#define VkglTestCase_042219_1 "dEQP-GLES3.functional.neg"
#define VkglTestCase_042219_2 "ative_api.state.is_shader"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042219, VkglTestCase_042219_1, VkglTestCase_042219_2);

#define VkglTestCase_042220_1 "dEQP-GLES3.functional.neg"
#define VkglTestCase_042220_2 "ative_api.state.is_texture"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042220, VkglTestCase_042220_1, VkglTestCase_042220_2);

#define VkglTestCase_042221_1 "dEQP-GLES3.functional.ne"
#define VkglTestCase_042221_2 "gative_api.state.is_query"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042221, VkglTestCase_042221_1, VkglTestCase_042221_2);

#define VkglTestCase_042222_1 "dEQP-GLES3.functional.neg"
#define VkglTestCase_042222_2 "ative_api.state.is_sampler"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042222, VkglTestCase_042222_1, VkglTestCase_042222_2);

#define VkglTestCase_042223_1 "dEQP-GLES3.functional.ne"
#define VkglTestCase_042223_2 "gative_api.state.is_sync"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042223, VkglTestCase_042223_1, VkglTestCase_042223_2);

#define VkglTestCase_042224_1 "dEQP-GLES3.functional.negative_"
#define VkglTestCase_042224_2 "api.state.is_transform_feedback"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042224, VkglTestCase_042224_1, VkglTestCase_042224_2);

#define VkglTestCase_042225_1 "dEQP-GLES3.functional.negati"
#define VkglTestCase_042225_2 "ve_api.state.is_vertex_array"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042225, VkglTestCase_042225_1, VkglTestCase_042225_2);
