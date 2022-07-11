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
#include "../ActsDeqpgles30012TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_011114_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011114_2 "_operator.div_assign_result.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011114, VkglTestCase_011114_1, VkglTestCase_011114_2);

#define VkglTestCase_011115_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011115_2 "operator.div_assign_result.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011115, VkglTestCase_011115_1, VkglTestCase_011115_2);

#define VkglTestCase_011116_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011116_2 "operator.div_assign_result.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011116, VkglTestCase_011116_1, VkglTestCase_011116_2);

#define VkglTestCase_011117_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011117_2 "perator.div_assign_result.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011117, VkglTestCase_011117_1, VkglTestCase_011117_2);

#define VkglTestCase_011118_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011118_2 "_operator.div_assign_result.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011118, VkglTestCase_011118_1, VkglTestCase_011118_2);

#define VkglTestCase_011119_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011119_2 "operator.div_assign_result.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011119, VkglTestCase_011119_1, VkglTestCase_011119_2);

#define VkglTestCase_011120_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_011120_2 "y_operator.div_assign_result.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011120, VkglTestCase_011120_1, VkglTestCase_011120_2);

#define VkglTestCase_011121_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011121_2 "_operator.div_assign_result.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011121, VkglTestCase_011121_1, VkglTestCase_011121_2);

#define VkglTestCase_011122_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011122_2 "operator.div_assign_result.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011122, VkglTestCase_011122_1, VkglTestCase_011122_2);

#define VkglTestCase_011123_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011123_2 "perator.div_assign_result.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011123, VkglTestCase_011123_1, VkglTestCase_011123_2);

#define VkglTestCase_011124_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011124_2 "_operator.div_assign_result.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011124, VkglTestCase_011124_1, VkglTestCase_011124_2);

#define VkglTestCase_011125_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011125_2 "operator.div_assign_result.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011125, VkglTestCase_011125_1, VkglTestCase_011125_2);

#define VkglTestCase_011126_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_011126_2 "y_operator.div_assign_result.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011126, VkglTestCase_011126_1, VkglTestCase_011126_2);

#define VkglTestCase_011127_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011127_2 "_operator.div_assign_result.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011127, VkglTestCase_011127_1, VkglTestCase_011127_2);

#define VkglTestCase_011128_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011128_2 "operator.div_assign_result.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011128, VkglTestCase_011128_1, VkglTestCase_011128_2);

#define VkglTestCase_011129_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011129_2 "perator.div_assign_result.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011129, VkglTestCase_011129_1, VkglTestCase_011129_2);

#define VkglTestCase_011130_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011130_2 "_operator.div_assign_result.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011130, VkglTestCase_011130_1, VkglTestCase_011130_2);

#define VkglTestCase_011131_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011131_2 "operator.div_assign_result.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011131, VkglTestCase_011131_1, VkglTestCase_011131_2);

#define VkglTestCase_011132_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_011132_2 "y_operator.div_assign_result.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011132, VkglTestCase_011132_1, VkglTestCase_011132_2);

#define VkglTestCase_011133_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011133_2 "_operator.div_assign_result.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011133, VkglTestCase_011133_1, VkglTestCase_011133_2);

#define VkglTestCase_011134_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011134_2 "operator.div_assign_result.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011134, VkglTestCase_011134_1, VkglTestCase_011134_2);

#define VkglTestCase_011135_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011135_2 "perator.div_assign_result.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011135, VkglTestCase_011135_1, VkglTestCase_011135_2);

#define VkglTestCase_011136_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011136_2 "_operator.div_assign_result.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011136, VkglTestCase_011136_1, VkglTestCase_011136_2);

#define VkglTestCase_011137_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011137_2 "operator.div_assign_result.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011137, VkglTestCase_011137_1, VkglTestCase_011137_2);

#define VkglTestCase_011138_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_011138_2 "y_operator.div_assign_result.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011138, VkglTestCase_011138_1, VkglTestCase_011138_2);

#define VkglTestCase_011139_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011139_2 "_operator.div_assign_result.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011139, VkglTestCase_011139_1, VkglTestCase_011139_2);

#define VkglTestCase_011140_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011140_2 "_operator.div_assign_result.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011140, VkglTestCase_011140_1, VkglTestCase_011140_2);

#define VkglTestCase_011141_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011141_2 "operator.div_assign_result.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011141, VkglTestCase_011141_1, VkglTestCase_011141_2);

#define VkglTestCase_011142_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011142_2 "_operator.div_assign_result.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011142, VkglTestCase_011142_1, VkglTestCase_011142_2);

#define VkglTestCase_011143_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011143_2 "operator.div_assign_result.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011143, VkglTestCase_011143_1, VkglTestCase_011143_2);

#define VkglTestCase_011144_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011144_2 "operator.div_assign_result.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011144, VkglTestCase_011144_1, VkglTestCase_011144_2);

#define VkglTestCase_011145_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011145_2 "perator.div_assign_result.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011145, VkglTestCase_011145_1, VkglTestCase_011145_2);

#define VkglTestCase_011146_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011146_2 "_operator.div_assign_result.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011146, VkglTestCase_011146_1, VkglTestCase_011146_2);

#define VkglTestCase_011147_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011147_2 "operator.div_assign_result.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011147, VkglTestCase_011147_1, VkglTestCase_011147_2);

#define VkglTestCase_011148_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011148_2 "operator.div_assign_result.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011148, VkglTestCase_011148_1, VkglTestCase_011148_2);

#define VkglTestCase_011149_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011149_2 "perator.div_assign_result.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011149, VkglTestCase_011149_1, VkglTestCase_011149_2);

#define VkglTestCase_011150_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011150_2 "_operator.div_assign_result.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011150, VkglTestCase_011150_1, VkglTestCase_011150_2);

#define VkglTestCase_011151_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011151_2 "operator.div_assign_result.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011151, VkglTestCase_011151_1, VkglTestCase_011151_2);

#define VkglTestCase_011152_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011152_2 "operator.div_assign_result.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011152, VkglTestCase_011152_1, VkglTestCase_011152_2);

#define VkglTestCase_011153_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011153_2 "perator.div_assign_result.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011153, VkglTestCase_011153_1, VkglTestCase_011153_2);

#define VkglTestCase_011154_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_011154_2 "y_operator.div_assign_result.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011154, VkglTestCase_011154_1, VkglTestCase_011154_2);

#define VkglTestCase_011155_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011155_2 "_operator.div_assign_result.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011155, VkglTestCase_011155_1, VkglTestCase_011155_2);

#define VkglTestCase_011156_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011156_2 "_operator.div_assign_result.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011156, VkglTestCase_011156_1, VkglTestCase_011156_2);

#define VkglTestCase_011157_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011157_2 "operator.div_assign_result.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011157, VkglTestCase_011157_1, VkglTestCase_011157_2);

#define VkglTestCase_011158_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011158_2 "_operator.div_assign_result.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011158, VkglTestCase_011158_1, VkglTestCase_011158_2);

#define VkglTestCase_011159_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011159_2 "operator.div_assign_result.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011159, VkglTestCase_011159_1, VkglTestCase_011159_2);

#define VkglTestCase_011160_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011160_2 "_operator.div_assign_result.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011160, VkglTestCase_011160_1, VkglTestCase_011160_2);

#define VkglTestCase_011161_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011161_2 "operator.div_assign_result.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011161, VkglTestCase_011161_1, VkglTestCase_011161_2);

#define VkglTestCase_011162_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_011162_2 "y_operator.div_assign_result.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011162, VkglTestCase_011162_1, VkglTestCase_011162_2);

#define VkglTestCase_011163_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011163_2 "_operator.div_assign_result.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011163, VkglTestCase_011163_1, VkglTestCase_011163_2);

#define VkglTestCase_011164_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011164_2 "operator.div_assign_result.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011164, VkglTestCase_011164_1, VkglTestCase_011164_2);

#define VkglTestCase_011165_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011165_2 "perator.div_assign_result.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011165, VkglTestCase_011165_1, VkglTestCase_011165_2);

#define VkglTestCase_011166_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011166_2 "_operator.div_assign_result.lowp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011166, VkglTestCase_011166_1, VkglTestCase_011166_2);

#define VkglTestCase_011167_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011167_2 "operator.div_assign_result.lowp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011167, VkglTestCase_011167_1, VkglTestCase_011167_2);

#define VkglTestCase_011168_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011168_2 "operator.div_assign_result.mediump_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011168, VkglTestCase_011168_1, VkglTestCase_011168_2);

#define VkglTestCase_011169_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011169_2 "perator.div_assign_result.mediump_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011169, VkglTestCase_011169_1, VkglTestCase_011169_2);

#define VkglTestCase_011170_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011170_2 "_operator.div_assign_result.lowp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011170, VkglTestCase_011170_1, VkglTestCase_011170_2);

#define VkglTestCase_011171_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011171_2 "operator.div_assign_result.lowp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011171, VkglTestCase_011171_1, VkglTestCase_011171_2);

#define VkglTestCase_011172_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011172_2 "operator.div_assign_result.mediump_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011172, VkglTestCase_011172_1, VkglTestCase_011172_2);

#define VkglTestCase_011173_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011173_2 "perator.div_assign_result.mediump_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011173, VkglTestCase_011173_1, VkglTestCase_011173_2);

#define VkglTestCase_011174_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011174_2 "_operator.div_assign_result.lowp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011174, VkglTestCase_011174_1, VkglTestCase_011174_2);

#define VkglTestCase_011175_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011175_2 "operator.div_assign_result.lowp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011175, VkglTestCase_011175_1, VkglTestCase_011175_2);

#define VkglTestCase_011176_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011176_2 "operator.div_assign_result.mediump_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011176, VkglTestCase_011176_1, VkglTestCase_011176_2);

#define VkglTestCase_011177_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011177_2 "perator.div_assign_result.mediump_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011177, VkglTestCase_011177_1, VkglTestCase_011177_2);

#define VkglTestCase_011178_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011178_2 "_operator.div_assign_result.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011178, VkglTestCase_011178_1, VkglTestCase_011178_2);

#define VkglTestCase_011179_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011179_2 "operator.div_assign_result.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011179, VkglTestCase_011179_1, VkglTestCase_011179_2);

#define VkglTestCase_011180_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011180_2 "_operator.div_assign_result.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011180, VkglTestCase_011180_1, VkglTestCase_011180_2);

#define VkglTestCase_011181_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011181_2 "operator.div_assign_result.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011181, VkglTestCase_011181_1, VkglTestCase_011181_2);

#define VkglTestCase_011182_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011182_2 "_operator.div_assign_result.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011182, VkglTestCase_011182_1, VkglTestCase_011182_2);

#define VkglTestCase_011183_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011183_2 "operator.div_assign_result.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011183, VkglTestCase_011183_1, VkglTestCase_011183_2);

#define VkglTestCase_011184_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011184_2 "_operator.div_assign_result.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011184, VkglTestCase_011184_1, VkglTestCase_011184_2);

#define VkglTestCase_011185_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011185_2 "operator.div_assign_result.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011185, VkglTestCase_011185_1, VkglTestCase_011185_2);

#define VkglTestCase_011186_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011186_2 "perator.div_assign_result.lowp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011186, VkglTestCase_011186_1, VkglTestCase_011186_2);

#define VkglTestCase_011187_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011187_2 "erator.div_assign_result.lowp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011187, VkglTestCase_011187_1, VkglTestCase_011187_2);

#define VkglTestCase_011188_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011188_2 "rator.div_assign_result.mediump_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011188, VkglTestCase_011188_1, VkglTestCase_011188_2);

#define VkglTestCase_011189_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011189_2 "ator.div_assign_result.mediump_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011189, VkglTestCase_011189_1, VkglTestCase_011189_2);

#define VkglTestCase_011190_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011190_2 "erator.div_assign_result.highp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011190, VkglTestCase_011190_1, VkglTestCase_011190_2);

#define VkglTestCase_011191_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011191_2 "rator.div_assign_result.highp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011191, VkglTestCase_011191_1, VkglTestCase_011191_2);

#define VkglTestCase_011192_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011192_2 "perator.div_assign_result.lowp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011192, VkglTestCase_011192_1, VkglTestCase_011192_2);

#define VkglTestCase_011193_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011193_2 "erator.div_assign_result.lowp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011193, VkglTestCase_011193_1, VkglTestCase_011193_2);

#define VkglTestCase_011194_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011194_2 "rator.div_assign_result.mediump_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011194, VkglTestCase_011194_1, VkglTestCase_011194_2);

#define VkglTestCase_011195_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011195_2 "ator.div_assign_result.mediump_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011195, VkglTestCase_011195_1, VkglTestCase_011195_2);

#define VkglTestCase_011196_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011196_2 "erator.div_assign_result.highp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011196, VkglTestCase_011196_1, VkglTestCase_011196_2);

#define VkglTestCase_011197_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011197_2 "rator.div_assign_result.highp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011197, VkglTestCase_011197_1, VkglTestCase_011197_2);

#define VkglTestCase_011198_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011198_2 "perator.div_assign_result.lowp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011198, VkglTestCase_011198_1, VkglTestCase_011198_2);

#define VkglTestCase_011199_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011199_2 "erator.div_assign_result.lowp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011199, VkglTestCase_011199_1, VkglTestCase_011199_2);

#define VkglTestCase_011200_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011200_2 "rator.div_assign_result.mediump_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011200, VkglTestCase_011200_1, VkglTestCase_011200_2);

#define VkglTestCase_011201_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011201_2 "ator.div_assign_result.mediump_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011201, VkglTestCase_011201_1, VkglTestCase_011201_2);

#define VkglTestCase_011202_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011202_2 "erator.div_assign_result.highp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011202, VkglTestCase_011202_1, VkglTestCase_011202_2);

#define VkglTestCase_011203_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011203_2 "rator.div_assign_result.highp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011203, VkglTestCase_011203_1, VkglTestCase_011203_2);

#define VkglTestCase_011204_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011204_2 "perator.div_assign_result.lowp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011204, VkglTestCase_011204_1, VkglTestCase_011204_2);

#define VkglTestCase_011205_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011205_2 "erator.div_assign_result.lowp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011205, VkglTestCase_011205_1, VkglTestCase_011205_2);

#define VkglTestCase_011206_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011206_2 "erator.div_assign_result.mediump_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011206, VkglTestCase_011206_1, VkglTestCase_011206_2);

#define VkglTestCase_011207_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011207_2 "rator.div_assign_result.mediump_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011207, VkglTestCase_011207_1, VkglTestCase_011207_2);

#define VkglTestCase_011208_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011208_2 "perator.div_assign_result.lowp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011208, VkglTestCase_011208_1, VkglTestCase_011208_2);

#define VkglTestCase_011209_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011209_2 "erator.div_assign_result.lowp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011209, VkglTestCase_011209_1, VkglTestCase_011209_2);

#define VkglTestCase_011210_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011210_2 "erator.div_assign_result.mediump_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011210, VkglTestCase_011210_1, VkglTestCase_011210_2);

#define VkglTestCase_011211_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011211_2 "rator.div_assign_result.mediump_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011211, VkglTestCase_011211_1, VkglTestCase_011211_2);

#define VkglTestCase_011212_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011212_2 "perator.div_assign_result.lowp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011212, VkglTestCase_011212_1, VkglTestCase_011212_2);

#define VkglTestCase_011213_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011213_2 "erator.div_assign_result.lowp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011213, VkglTestCase_011213_1, VkglTestCase_011213_2);

#define VkglTestCase_011214_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011214_2 "erator.div_assign_result.mediump_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011214, VkglTestCase_011214_1, VkglTestCase_011214_2);

#define VkglTestCase_011215_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011215_2 "rator.div_assign_result.mediump_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011215, VkglTestCase_011215_1, VkglTestCase_011215_2);

#define VkglTestCase_011216_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011216_2 "perator.div_assign_result.highp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011216, VkglTestCase_011216_1, VkglTestCase_011216_2);

#define VkglTestCase_011217_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011217_2 "erator.div_assign_result.highp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011217, VkglTestCase_011217_1, VkglTestCase_011217_2);

#define VkglTestCase_011218_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011218_2 "perator.div_assign_result.highp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011218, VkglTestCase_011218_1, VkglTestCase_011218_2);

#define VkglTestCase_011219_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011219_2 "erator.div_assign_result.highp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011219, VkglTestCase_011219_1, VkglTestCase_011219_2);

#define VkglTestCase_011220_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011220_2 "perator.div_assign_result.highp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011220, VkglTestCase_011220_1, VkglTestCase_011220_2);

#define VkglTestCase_011221_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011221_2 "erator.div_assign_result.highp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011221, VkglTestCase_011221_1, VkglTestCase_011221_2);

#define VkglTestCase_011222_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011222_2 "perator.div_assign_result.lowp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011222, VkglTestCase_011222_1, VkglTestCase_011222_2);

#define VkglTestCase_011223_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011223_2 "erator.div_assign_result.lowp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011223, VkglTestCase_011223_1, VkglTestCase_011223_2);

#define VkglTestCase_011224_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011224_2 "rator.div_assign_result.mediump_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011224, VkglTestCase_011224_1, VkglTestCase_011224_2);

#define VkglTestCase_011225_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011225_2 "ator.div_assign_result.mediump_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011225, VkglTestCase_011225_1, VkglTestCase_011225_2);

#define VkglTestCase_011226_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011226_2 "perator.div_assign_result.lowp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011226, VkglTestCase_011226_1, VkglTestCase_011226_2);

#define VkglTestCase_011227_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011227_2 "erator.div_assign_result.lowp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011227, VkglTestCase_011227_1, VkglTestCase_011227_2);

#define VkglTestCase_011228_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011228_2 "rator.div_assign_result.mediump_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011228, VkglTestCase_011228_1, VkglTestCase_011228_2);

#define VkglTestCase_011229_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011229_2 "ator.div_assign_result.mediump_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011229, VkglTestCase_011229_1, VkglTestCase_011229_2);

#define VkglTestCase_011230_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011230_2 "perator.div_assign_result.lowp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011230, VkglTestCase_011230_1, VkglTestCase_011230_2);

#define VkglTestCase_011231_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011231_2 "erator.div_assign_result.lowp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011231, VkglTestCase_011231_1, VkglTestCase_011231_2);

#define VkglTestCase_011232_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011232_2 "rator.div_assign_result.mediump_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011232, VkglTestCase_011232_1, VkglTestCase_011232_2);

#define VkglTestCase_011233_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011233_2 "ator.div_assign_result.mediump_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011233, VkglTestCase_011233_1, VkglTestCase_011233_2);

#define VkglTestCase_011234_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011234_2 "erator.div_assign_result.highp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011234, VkglTestCase_011234_1, VkglTestCase_011234_2);

#define VkglTestCase_011235_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011235_2 "rator.div_assign_result.highp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011235, VkglTestCase_011235_1, VkglTestCase_011235_2);

#define VkglTestCase_011236_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011236_2 "erator.div_assign_result.highp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011236, VkglTestCase_011236_1, VkglTestCase_011236_2);

#define VkglTestCase_011237_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011237_2 "rator.div_assign_result.highp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011237, VkglTestCase_011237_1, VkglTestCase_011237_2);

#define VkglTestCase_011238_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011238_2 "erator.div_assign_result.highp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011238, VkglTestCase_011238_1, VkglTestCase_011238_2);

#define VkglTestCase_011239_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011239_2 "rator.div_assign_result.highp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011239, VkglTestCase_011239_1, VkglTestCase_011239_2);
