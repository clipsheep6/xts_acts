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
#include "../ActsDeqpgles30038TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_037129_1 "dEQP-GLES3.functional.uniform_api.va"
#define VkglTestCase_037129_2 "lue.initial.render.basic.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037129, VkglTestCase_037129_1, VkglTestCase_037129_2);

#define VkglTestCase_037130_1 "dEQP-GLES3.functional.uniform_api.val"
#define VkglTestCase_037130_2 "ue.initial.render.basic.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037130, VkglTestCase_037130_1, VkglTestCase_037130_2);

#define VkglTestCase_037131_1 "dEQP-GLES3.functional.uniform_api.v"
#define VkglTestCase_037131_2 "alue.initial.render.basic.float_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037131, VkglTestCase_037131_1, VkglTestCase_037131_2);

#define VkglTestCase_037132_1 "dEQP-GLES3.functional.uniform_api.va"
#define VkglTestCase_037132_2 "lue.initial.render.basic.vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037132, VkglTestCase_037132_1, VkglTestCase_037132_2);

#define VkglTestCase_037133_1 "dEQP-GLES3.functional.uniform_api.val"
#define VkglTestCase_037133_2 "ue.initial.render.basic.vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037133, VkglTestCase_037133_1, VkglTestCase_037133_2);

#define VkglTestCase_037134_1 "dEQP-GLES3.functional.uniform_api.v"
#define VkglTestCase_037134_2 "alue.initial.render.basic.vec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037134, VkglTestCase_037134_1, VkglTestCase_037134_2);

#define VkglTestCase_037135_1 "dEQP-GLES3.functional.uniform_api.va"
#define VkglTestCase_037135_2 "lue.initial.render.basic.vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037135, VkglTestCase_037135_1, VkglTestCase_037135_2);

#define VkglTestCase_037136_1 "dEQP-GLES3.functional.uniform_api.val"
#define VkglTestCase_037136_2 "ue.initial.render.basic.vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037136, VkglTestCase_037136_1, VkglTestCase_037136_2);

#define VkglTestCase_037137_1 "dEQP-GLES3.functional.uniform_api.v"
#define VkglTestCase_037137_2 "alue.initial.render.basic.vec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037137, VkglTestCase_037137_1, VkglTestCase_037137_2);

#define VkglTestCase_037138_1 "dEQP-GLES3.functional.uniform_api.va"
#define VkglTestCase_037138_2 "lue.initial.render.basic.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037138, VkglTestCase_037138_1, VkglTestCase_037138_2);

#define VkglTestCase_037139_1 "dEQP-GLES3.functional.uniform_api.val"
#define VkglTestCase_037139_2 "ue.initial.render.basic.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037139, VkglTestCase_037139_1, VkglTestCase_037139_2);

#define VkglTestCase_037140_1 "dEQP-GLES3.functional.uniform_api.v"
#define VkglTestCase_037140_2 "alue.initial.render.basic.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037140, VkglTestCase_037140_1, VkglTestCase_037140_2);

#define VkglTestCase_037141_1 "dEQP-GLES3.functional.uniform_api.va"
#define VkglTestCase_037141_2 "lue.initial.render.basic.mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037141, VkglTestCase_037141_1, VkglTestCase_037141_2);

#define VkglTestCase_037142_1 "dEQP-GLES3.functional.uniform_api.val"
#define VkglTestCase_037142_2 "ue.initial.render.basic.mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037142, VkglTestCase_037142_1, VkglTestCase_037142_2);

#define VkglTestCase_037143_1 "dEQP-GLES3.functional.uniform_api.v"
#define VkglTestCase_037143_2 "alue.initial.render.basic.mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037143, VkglTestCase_037143_1, VkglTestCase_037143_2);

#define VkglTestCase_037144_1 "dEQP-GLES3.functional.uniform_api.val"
#define VkglTestCase_037144_2 "ue.initial.render.basic.mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037144, VkglTestCase_037144_1, VkglTestCase_037144_2);

#define VkglTestCase_037145_1 "dEQP-GLES3.functional.uniform_api.valu"
#define VkglTestCase_037145_2 "e.initial.render.basic.mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037145, VkglTestCase_037145_1, VkglTestCase_037145_2);

#define VkglTestCase_037146_1 "dEQP-GLES3.functional.uniform_api.va"
#define VkglTestCase_037146_2 "lue.initial.render.basic.mat2x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037146, VkglTestCase_037146_1, VkglTestCase_037146_2);

#define VkglTestCase_037147_1 "dEQP-GLES3.functional.uniform_api.val"
#define VkglTestCase_037147_2 "ue.initial.render.basic.mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037147, VkglTestCase_037147_1, VkglTestCase_037147_2);

#define VkglTestCase_037148_1 "dEQP-GLES3.functional.uniform_api.valu"
#define VkglTestCase_037148_2 "e.initial.render.basic.mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037148, VkglTestCase_037148_1, VkglTestCase_037148_2);

#define VkglTestCase_037149_1 "dEQP-GLES3.functional.uniform_api.va"
#define VkglTestCase_037149_2 "lue.initial.render.basic.mat2x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037149, VkglTestCase_037149_1, VkglTestCase_037149_2);

#define VkglTestCase_037150_1 "dEQP-GLES3.functional.uniform_api.val"
#define VkglTestCase_037150_2 "ue.initial.render.basic.mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037150, VkglTestCase_037150_1, VkglTestCase_037150_2);

#define VkglTestCase_037151_1 "dEQP-GLES3.functional.uniform_api.valu"
#define VkglTestCase_037151_2 "e.initial.render.basic.mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037151, VkglTestCase_037151_1, VkglTestCase_037151_2);

#define VkglTestCase_037152_1 "dEQP-GLES3.functional.uniform_api.va"
#define VkglTestCase_037152_2 "lue.initial.render.basic.mat3x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037152, VkglTestCase_037152_1, VkglTestCase_037152_2);

#define VkglTestCase_037153_1 "dEQP-GLES3.functional.uniform_api.va"
#define VkglTestCase_037153_2 "lue.initial.render.basic.mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037153, VkglTestCase_037153_1, VkglTestCase_037153_2);

#define VkglTestCase_037154_1 "dEQP-GLES3.functional.uniform_api.val"
#define VkglTestCase_037154_2 "ue.initial.render.basic.mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037154, VkglTestCase_037154_1, VkglTestCase_037154_2);

#define VkglTestCase_037155_1 "dEQP-GLES3.functional.uniform_api.v"
#define VkglTestCase_037155_2 "alue.initial.render.basic.mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037155, VkglTestCase_037155_1, VkglTestCase_037155_2);

#define VkglTestCase_037156_1 "dEQP-GLES3.functional.uniform_api.val"
#define VkglTestCase_037156_2 "ue.initial.render.basic.mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037156, VkglTestCase_037156_1, VkglTestCase_037156_2);

#define VkglTestCase_037157_1 "dEQP-GLES3.functional.uniform_api.valu"
#define VkglTestCase_037157_2 "e.initial.render.basic.mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037157, VkglTestCase_037157_1, VkglTestCase_037157_2);

#define VkglTestCase_037158_1 "dEQP-GLES3.functional.uniform_api.va"
#define VkglTestCase_037158_2 "lue.initial.render.basic.mat3x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037158, VkglTestCase_037158_1, VkglTestCase_037158_2);

#define VkglTestCase_037159_1 "dEQP-GLES3.functional.uniform_api.val"
#define VkglTestCase_037159_2 "ue.initial.render.basic.mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037159, VkglTestCase_037159_1, VkglTestCase_037159_2);

#define VkglTestCase_037160_1 "dEQP-GLES3.functional.uniform_api.valu"
#define VkglTestCase_037160_2 "e.initial.render.basic.mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037160, VkglTestCase_037160_1, VkglTestCase_037160_2);

#define VkglTestCase_037161_1 "dEQP-GLES3.functional.uniform_api.va"
#define VkglTestCase_037161_2 "lue.initial.render.basic.mat4x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037161, VkglTestCase_037161_1, VkglTestCase_037161_2);

#define VkglTestCase_037162_1 "dEQP-GLES3.functional.uniform_api.val"
#define VkglTestCase_037162_2 "ue.initial.render.basic.mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037162, VkglTestCase_037162_1, VkglTestCase_037162_2);

#define VkglTestCase_037163_1 "dEQP-GLES3.functional.uniform_api.valu"
#define VkglTestCase_037163_2 "e.initial.render.basic.mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037163, VkglTestCase_037163_1, VkglTestCase_037163_2);

#define VkglTestCase_037164_1 "dEQP-GLES3.functional.uniform_api.va"
#define VkglTestCase_037164_2 "lue.initial.render.basic.mat4x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037164, VkglTestCase_037164_1, VkglTestCase_037164_2);

#define VkglTestCase_037165_1 "dEQP-GLES3.functional.uniform_api.va"
#define VkglTestCase_037165_2 "lue.initial.render.basic.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037165, VkglTestCase_037165_1, VkglTestCase_037165_2);

#define VkglTestCase_037166_1 "dEQP-GLES3.functional.uniform_api.val"
#define VkglTestCase_037166_2 "ue.initial.render.basic.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037166, VkglTestCase_037166_1, VkglTestCase_037166_2);

#define VkglTestCase_037167_1 "dEQP-GLES3.functional.uniform_api.v"
#define VkglTestCase_037167_2 "alue.initial.render.basic.mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037167, VkglTestCase_037167_1, VkglTestCase_037167_2);

#define VkglTestCase_037168_1 "dEQP-GLES3.functional.uniform_api.v"
#define VkglTestCase_037168_2 "alue.initial.render.basic.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037168, VkglTestCase_037168_1, VkglTestCase_037168_2);

#define VkglTestCase_037169_1 "dEQP-GLES3.functional.uniform_api.va"
#define VkglTestCase_037169_2 "lue.initial.render.basic.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037169, VkglTestCase_037169_1, VkglTestCase_037169_2);

#define VkglTestCase_037170_1 "dEQP-GLES3.functional.uniform_api."
#define VkglTestCase_037170_2 "value.initial.render.basic.int_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037170, VkglTestCase_037170_1, VkglTestCase_037170_2);

#define VkglTestCase_037171_1 "dEQP-GLES3.functional.uniform_api.va"
#define VkglTestCase_037171_2 "lue.initial.render.basic.ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037171, VkglTestCase_037171_1, VkglTestCase_037171_2);

#define VkglTestCase_037172_1 "dEQP-GLES3.functional.uniform_api.val"
#define VkglTestCase_037172_2 "ue.initial.render.basic.ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037172, VkglTestCase_037172_1, VkglTestCase_037172_2);

#define VkglTestCase_037173_1 "dEQP-GLES3.functional.uniform_api.v"
#define VkglTestCase_037173_2 "alue.initial.render.basic.ivec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037173, VkglTestCase_037173_1, VkglTestCase_037173_2);

#define VkglTestCase_037174_1 "dEQP-GLES3.functional.uniform_api.va"
#define VkglTestCase_037174_2 "lue.initial.render.basic.ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037174, VkglTestCase_037174_1, VkglTestCase_037174_2);

#define VkglTestCase_037175_1 "dEQP-GLES3.functional.uniform_api.val"
#define VkglTestCase_037175_2 "ue.initial.render.basic.ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037175, VkglTestCase_037175_1, VkglTestCase_037175_2);

#define VkglTestCase_037176_1 "dEQP-GLES3.functional.uniform_api.v"
#define VkglTestCase_037176_2 "alue.initial.render.basic.ivec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037176, VkglTestCase_037176_1, VkglTestCase_037176_2);

#define VkglTestCase_037177_1 "dEQP-GLES3.functional.uniform_api.va"
#define VkglTestCase_037177_2 "lue.initial.render.basic.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037177, VkglTestCase_037177_1, VkglTestCase_037177_2);

#define VkglTestCase_037178_1 "dEQP-GLES3.functional.uniform_api.val"
#define VkglTestCase_037178_2 "ue.initial.render.basic.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037178, VkglTestCase_037178_1, VkglTestCase_037178_2);

#define VkglTestCase_037179_1 "dEQP-GLES3.functional.uniform_api.v"
#define VkglTestCase_037179_2 "alue.initial.render.basic.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037179, VkglTestCase_037179_1, VkglTestCase_037179_2);

#define VkglTestCase_037180_1 "dEQP-GLES3.functional.uniform_api.va"
#define VkglTestCase_037180_2 "lue.initial.render.basic.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037180, VkglTestCase_037180_1, VkglTestCase_037180_2);

#define VkglTestCase_037181_1 "dEQP-GLES3.functional.uniform_api.val"
#define VkglTestCase_037181_2 "ue.initial.render.basic.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037181, VkglTestCase_037181_1, VkglTestCase_037181_2);

#define VkglTestCase_037182_1 "dEQP-GLES3.functional.uniform_api.v"
#define VkglTestCase_037182_2 "alue.initial.render.basic.uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037182, VkglTestCase_037182_1, VkglTestCase_037182_2);

#define VkglTestCase_037183_1 "dEQP-GLES3.functional.uniform_api.va"
#define VkglTestCase_037183_2 "lue.initial.render.basic.uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037183, VkglTestCase_037183_1, VkglTestCase_037183_2);

#define VkglTestCase_037184_1 "dEQP-GLES3.functional.uniform_api.val"
#define VkglTestCase_037184_2 "ue.initial.render.basic.uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037184, VkglTestCase_037184_1, VkglTestCase_037184_2);

#define VkglTestCase_037185_1 "dEQP-GLES3.functional.uniform_api.v"
#define VkglTestCase_037185_2 "alue.initial.render.basic.uvec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037185, VkglTestCase_037185_1, VkglTestCase_037185_2);

#define VkglTestCase_037186_1 "dEQP-GLES3.functional.uniform_api.va"
#define VkglTestCase_037186_2 "lue.initial.render.basic.uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037186, VkglTestCase_037186_1, VkglTestCase_037186_2);

#define VkglTestCase_037187_1 "dEQP-GLES3.functional.uniform_api.val"
#define VkglTestCase_037187_2 "ue.initial.render.basic.uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037187, VkglTestCase_037187_1, VkglTestCase_037187_2);

#define VkglTestCase_037188_1 "dEQP-GLES3.functional.uniform_api.v"
#define VkglTestCase_037188_2 "alue.initial.render.basic.uvec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037188, VkglTestCase_037188_1, VkglTestCase_037188_2);

#define VkglTestCase_037189_1 "dEQP-GLES3.functional.uniform_api.va"
#define VkglTestCase_037189_2 "lue.initial.render.basic.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037189, VkglTestCase_037189_1, VkglTestCase_037189_2);

#define VkglTestCase_037190_1 "dEQP-GLES3.functional.uniform_api.val"
#define VkglTestCase_037190_2 "ue.initial.render.basic.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037190, VkglTestCase_037190_1, VkglTestCase_037190_2);

#define VkglTestCase_037191_1 "dEQP-GLES3.functional.uniform_api.v"
#define VkglTestCase_037191_2 "alue.initial.render.basic.uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037191, VkglTestCase_037191_1, VkglTestCase_037191_2);

#define VkglTestCase_037192_1 "dEQP-GLES3.functional.uniform_api.va"
#define VkglTestCase_037192_2 "lue.initial.render.basic.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037192, VkglTestCase_037192_1, VkglTestCase_037192_2);

#define VkglTestCase_037193_1 "dEQP-GLES3.functional.uniform_api.val"
#define VkglTestCase_037193_2 "ue.initial.render.basic.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037193, VkglTestCase_037193_1, VkglTestCase_037193_2);

#define VkglTestCase_037194_1 "dEQP-GLES3.functional.uniform_api.v"
#define VkglTestCase_037194_2 "alue.initial.render.basic.bool_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037194, VkglTestCase_037194_1, VkglTestCase_037194_2);

#define VkglTestCase_037195_1 "dEQP-GLES3.functional.uniform_api.va"
#define VkglTestCase_037195_2 "lue.initial.render.basic.bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037195, VkglTestCase_037195_1, VkglTestCase_037195_2);

#define VkglTestCase_037196_1 "dEQP-GLES3.functional.uniform_api.val"
#define VkglTestCase_037196_2 "ue.initial.render.basic.bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037196, VkglTestCase_037196_1, VkglTestCase_037196_2);

#define VkglTestCase_037197_1 "dEQP-GLES3.functional.uniform_api.v"
#define VkglTestCase_037197_2 "alue.initial.render.basic.bvec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037197, VkglTestCase_037197_1, VkglTestCase_037197_2);

#define VkglTestCase_037198_1 "dEQP-GLES3.functional.uniform_api.va"
#define VkglTestCase_037198_2 "lue.initial.render.basic.bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037198, VkglTestCase_037198_1, VkglTestCase_037198_2);

#define VkglTestCase_037199_1 "dEQP-GLES3.functional.uniform_api.val"
#define VkglTestCase_037199_2 "ue.initial.render.basic.bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037199, VkglTestCase_037199_1, VkglTestCase_037199_2);

#define VkglTestCase_037200_1 "dEQP-GLES3.functional.uniform_api.v"
#define VkglTestCase_037200_2 "alue.initial.render.basic.bvec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037200, VkglTestCase_037200_1, VkglTestCase_037200_2);

#define VkglTestCase_037201_1 "dEQP-GLES3.functional.uniform_api.va"
#define VkglTestCase_037201_2 "lue.initial.render.basic.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037201, VkglTestCase_037201_1, VkglTestCase_037201_2);

#define VkglTestCase_037202_1 "dEQP-GLES3.functional.uniform_api.val"
#define VkglTestCase_037202_2 "ue.initial.render.basic.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037202, VkglTestCase_037202_1, VkglTestCase_037202_2);

#define VkglTestCase_037203_1 "dEQP-GLES3.functional.uniform_api.v"
#define VkglTestCase_037203_2 "alue.initial.render.basic.bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037203, VkglTestCase_037203_1, VkglTestCase_037203_2);

#define VkglTestCase_037204_1 "dEQP-GLES3.functional.uniform_api.valu"
#define VkglTestCase_037204_2 "e.initial.render.basic.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037204, VkglTestCase_037204_1, VkglTestCase_037204_2);

#define VkglTestCase_037205_1 "dEQP-GLES3.functional.uniform_api.value"
#define VkglTestCase_037205_2 ".initial.render.basic.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037205, VkglTestCase_037205_1, VkglTestCase_037205_2);

#define VkglTestCase_037206_1 "dEQP-GLES3.functional.uniform_api.val"
#define VkglTestCase_037206_2 "ue.initial.render.basic.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037206, VkglTestCase_037206_1, VkglTestCase_037206_2);

#define VkglTestCase_037207_1 "dEQP-GLES3.functional.uniform_api.value"
#define VkglTestCase_037207_2 ".initial.render.basic.samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037207, VkglTestCase_037207_1, VkglTestCase_037207_2);

#define VkglTestCase_037208_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_037208_2 "initial.render.basic.samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037208, VkglTestCase_037208_1, VkglTestCase_037208_2);

#define VkglTestCase_037209_1 "dEQP-GLES3.functional.uniform_api.valu"
#define VkglTestCase_037209_2 "e.initial.render.basic.samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037209, VkglTestCase_037209_1, VkglTestCase_037209_2);

#define VkglTestCase_037612_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_037612_2 "signed.by_pointer.render.basic.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037612, VkglTestCase_037612_1, VkglTestCase_037612_2);

#define VkglTestCase_037613_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_037613_2 "igned.by_pointer.render.basic.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037613, VkglTestCase_037613_1, VkglTestCase_037613_2);

#define VkglTestCase_037614_1 "dEQP-GLES3.functional.uniform_api.value.a"
#define VkglTestCase_037614_2 "ssigned.by_pointer.render.basic.float_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037614, VkglTestCase_037614_1, VkglTestCase_037614_2);

#define VkglTestCase_037615_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_037615_2 "signed.by_pointer.render.basic.vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037615, VkglTestCase_037615_1, VkglTestCase_037615_2);

#define VkglTestCase_037616_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_037616_2 "igned.by_pointer.render.basic.vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037616, VkglTestCase_037616_1, VkglTestCase_037616_2);

#define VkglTestCase_037617_1 "dEQP-GLES3.functional.uniform_api.value.a"
#define VkglTestCase_037617_2 "ssigned.by_pointer.render.basic.vec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037617, VkglTestCase_037617_1, VkglTestCase_037617_2);

#define VkglTestCase_037618_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_037618_2 "signed.by_pointer.render.basic.vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037618, VkglTestCase_037618_1, VkglTestCase_037618_2);

#define VkglTestCase_037619_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_037619_2 "igned.by_pointer.render.basic.vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037619, VkglTestCase_037619_1, VkglTestCase_037619_2);

#define VkglTestCase_037620_1 "dEQP-GLES3.functional.uniform_api.value.a"
#define VkglTestCase_037620_2 "ssigned.by_pointer.render.basic.vec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037620, VkglTestCase_037620_1, VkglTestCase_037620_2);

#define VkglTestCase_037621_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_037621_2 "signed.by_pointer.render.basic.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037621, VkglTestCase_037621_1, VkglTestCase_037621_2);

#define VkglTestCase_037622_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_037622_2 "igned.by_pointer.render.basic.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037622, VkglTestCase_037622_1, VkglTestCase_037622_2);

#define VkglTestCase_037623_1 "dEQP-GLES3.functional.uniform_api.value.a"
#define VkglTestCase_037623_2 "ssigned.by_pointer.render.basic.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037623, VkglTestCase_037623_1, VkglTestCase_037623_2);

#define VkglTestCase_037624_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_037624_2 "signed.by_pointer.render.basic.mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037624, VkglTestCase_037624_1, VkglTestCase_037624_2);

#define VkglTestCase_037625_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_037625_2 "igned.by_pointer.render.basic.mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037625, VkglTestCase_037625_1, VkglTestCase_037625_2);

#define VkglTestCase_037626_1 "dEQP-GLES3.functional.uniform_api.value.a"
#define VkglTestCase_037626_2 "ssigned.by_pointer.render.basic.mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037626, VkglTestCase_037626_1, VkglTestCase_037626_2);

#define VkglTestCase_037627_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_037627_2 "d.by_pointer.render.basic.mat2_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037627, VkglTestCase_037627_1, VkglTestCase_037627_2);

#define VkglTestCase_037628_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037628_2 ".by_pointer.render.basic.mat2_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037628, VkglTestCase_037628_1, VkglTestCase_037628_2);

#define VkglTestCase_037629_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_037629_2 "ed.by_pointer.render.basic.mat2_row_major_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037629, VkglTestCase_037629_1, VkglTestCase_037629_2);

#define VkglTestCase_037630_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_037630_2 "igned.by_pointer.render.basic.mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037630, VkglTestCase_037630_1, VkglTestCase_037630_2);

#define VkglTestCase_037631_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037631_2 "gned.by_pointer.render.basic.mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037631, VkglTestCase_037631_1, VkglTestCase_037631_2);

#define VkglTestCase_037632_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_037632_2 "signed.by_pointer.render.basic.mat2x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037632, VkglTestCase_037632_1, VkglTestCase_037632_2);

#define VkglTestCase_037633_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037633_2 ".by_pointer.render.basic.mat2x3_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037633, VkglTestCase_037633_1, VkglTestCase_037633_2);

#define VkglTestCase_037634_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037634_2 "by_pointer.render.basic.mat2x3_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037634, VkglTestCase_037634_1, VkglTestCase_037634_2);

#define VkglTestCase_037635_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_037635_2 "d.by_pointer.render.basic.mat2x3_row_major_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037635, VkglTestCase_037635_1, VkglTestCase_037635_2);

#define VkglTestCase_037636_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_037636_2 "igned.by_pointer.render.basic.mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037636, VkglTestCase_037636_1, VkglTestCase_037636_2);

#define VkglTestCase_037637_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037637_2 "gned.by_pointer.render.basic.mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037637, VkglTestCase_037637_1, VkglTestCase_037637_2);

#define VkglTestCase_037638_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_037638_2 "signed.by_pointer.render.basic.mat2x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037638, VkglTestCase_037638_1, VkglTestCase_037638_2);

#define VkglTestCase_037639_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037639_2 ".by_pointer.render.basic.mat2x4_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037639, VkglTestCase_037639_1, VkglTestCase_037639_2);

#define VkglTestCase_037640_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037640_2 "by_pointer.render.basic.mat2x4_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037640, VkglTestCase_037640_1, VkglTestCase_037640_2);

#define VkglTestCase_037641_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_037641_2 "d.by_pointer.render.basic.mat2x4_row_major_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037641, VkglTestCase_037641_1, VkglTestCase_037641_2);

#define VkglTestCase_037642_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_037642_2 "igned.by_pointer.render.basic.mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037642, VkglTestCase_037642_1, VkglTestCase_037642_2);

#define VkglTestCase_037643_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037643_2 "gned.by_pointer.render.basic.mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037643, VkglTestCase_037643_1, VkglTestCase_037643_2);

#define VkglTestCase_037644_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_037644_2 "signed.by_pointer.render.basic.mat3x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037644, VkglTestCase_037644_1, VkglTestCase_037644_2);

#define VkglTestCase_037645_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037645_2 ".by_pointer.render.basic.mat3x2_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037645, VkglTestCase_037645_1, VkglTestCase_037645_2);

#define VkglTestCase_037646_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037646_2 "by_pointer.render.basic.mat3x2_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037646, VkglTestCase_037646_1, VkglTestCase_037646_2);

#define VkglTestCase_037647_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_037647_2 "d.by_pointer.render.basic.mat3x2_row_major_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037647, VkglTestCase_037647_1, VkglTestCase_037647_2);

#define VkglTestCase_037648_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_037648_2 "signed.by_pointer.render.basic.mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037648, VkglTestCase_037648_1, VkglTestCase_037648_2);

#define VkglTestCase_037649_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_037649_2 "igned.by_pointer.render.basic.mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037649, VkglTestCase_037649_1, VkglTestCase_037649_2);

#define VkglTestCase_037650_1 "dEQP-GLES3.functional.uniform_api.value.a"
#define VkglTestCase_037650_2 "ssigned.by_pointer.render.basic.mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037650, VkglTestCase_037650_1, VkglTestCase_037650_2);

#define VkglTestCase_037651_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_037651_2 "d.by_pointer.render.basic.mat3_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037651, VkglTestCase_037651_1, VkglTestCase_037651_2);

#define VkglTestCase_037652_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037652_2 ".by_pointer.render.basic.mat3_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037652, VkglTestCase_037652_1, VkglTestCase_037652_2);

#define VkglTestCase_037653_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_037653_2 "ed.by_pointer.render.basic.mat3_row_major_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037653, VkglTestCase_037653_1, VkglTestCase_037653_2);

#define VkglTestCase_037654_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_037654_2 "igned.by_pointer.render.basic.mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037654, VkglTestCase_037654_1, VkglTestCase_037654_2);

#define VkglTestCase_037655_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037655_2 "gned.by_pointer.render.basic.mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037655, VkglTestCase_037655_1, VkglTestCase_037655_2);

#define VkglTestCase_037656_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_037656_2 "signed.by_pointer.render.basic.mat3x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037656, VkglTestCase_037656_1, VkglTestCase_037656_2);

#define VkglTestCase_037657_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037657_2 ".by_pointer.render.basic.mat3x4_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037657, VkglTestCase_037657_1, VkglTestCase_037657_2);

#define VkglTestCase_037658_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037658_2 "by_pointer.render.basic.mat3x4_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037658, VkglTestCase_037658_1, VkglTestCase_037658_2);

#define VkglTestCase_037659_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_037659_2 "d.by_pointer.render.basic.mat3x4_row_major_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037659, VkglTestCase_037659_1, VkglTestCase_037659_2);

#define VkglTestCase_037660_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_037660_2 "igned.by_pointer.render.basic.mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037660, VkglTestCase_037660_1, VkglTestCase_037660_2);

#define VkglTestCase_037661_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037661_2 "gned.by_pointer.render.basic.mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037661, VkglTestCase_037661_1, VkglTestCase_037661_2);

#define VkglTestCase_037662_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_037662_2 "signed.by_pointer.render.basic.mat4x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037662, VkglTestCase_037662_1, VkglTestCase_037662_2);

#define VkglTestCase_037663_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037663_2 ".by_pointer.render.basic.mat4x2_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037663, VkglTestCase_037663_1, VkglTestCase_037663_2);

#define VkglTestCase_037664_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037664_2 "by_pointer.render.basic.mat4x2_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037664, VkglTestCase_037664_1, VkglTestCase_037664_2);

#define VkglTestCase_037665_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_037665_2 "d.by_pointer.render.basic.mat4x2_row_major_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037665, VkglTestCase_037665_1, VkglTestCase_037665_2);

#define VkglTestCase_037666_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_037666_2 "igned.by_pointer.render.basic.mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037666, VkglTestCase_037666_1, VkglTestCase_037666_2);

#define VkglTestCase_037667_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037667_2 "gned.by_pointer.render.basic.mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037667, VkglTestCase_037667_1, VkglTestCase_037667_2);

#define VkglTestCase_037668_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_037668_2 "signed.by_pointer.render.basic.mat4x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037668, VkglTestCase_037668_1, VkglTestCase_037668_2);

#define VkglTestCase_037669_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037669_2 ".by_pointer.render.basic.mat4x3_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037669, VkglTestCase_037669_1, VkglTestCase_037669_2);

#define VkglTestCase_037670_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037670_2 "by_pointer.render.basic.mat4x3_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037670, VkglTestCase_037670_1, VkglTestCase_037670_2);

#define VkglTestCase_037671_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_037671_2 "d.by_pointer.render.basic.mat4x3_row_major_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037671, VkglTestCase_037671_1, VkglTestCase_037671_2);

#define VkglTestCase_037672_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_037672_2 "signed.by_pointer.render.basic.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037672, VkglTestCase_037672_1, VkglTestCase_037672_2);

#define VkglTestCase_037673_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_037673_2 "igned.by_pointer.render.basic.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037673, VkglTestCase_037673_1, VkglTestCase_037673_2);

#define VkglTestCase_037674_1 "dEQP-GLES3.functional.uniform_api.value.a"
#define VkglTestCase_037674_2 "ssigned.by_pointer.render.basic.mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037674, VkglTestCase_037674_1, VkglTestCase_037674_2);

#define VkglTestCase_037675_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_037675_2 "d.by_pointer.render.basic.mat4_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037675, VkglTestCase_037675_1, VkglTestCase_037675_2);

#define VkglTestCase_037676_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037676_2 ".by_pointer.render.basic.mat4_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037676, VkglTestCase_037676_1, VkglTestCase_037676_2);

#define VkglTestCase_037677_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_037677_2 "ed.by_pointer.render.basic.mat4_row_major_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037677, VkglTestCase_037677_1, VkglTestCase_037677_2);

#define VkglTestCase_037678_1 "dEQP-GLES3.functional.uniform_api.value.a"
#define VkglTestCase_037678_2 "ssigned.by_pointer.render.basic.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037678, VkglTestCase_037678_1, VkglTestCase_037678_2);

#define VkglTestCase_037679_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_037679_2 "signed.by_pointer.render.basic.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037679, VkglTestCase_037679_1, VkglTestCase_037679_2);

#define VkglTestCase_037680_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_037680_2 "assigned.by_pointer.render.basic.int_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037680, VkglTestCase_037680_1, VkglTestCase_037680_2);

#define VkglTestCase_037681_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_037681_2 "signed.by_pointer.render.basic.ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037681, VkglTestCase_037681_1, VkglTestCase_037681_2);

#define VkglTestCase_037682_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_037682_2 "igned.by_pointer.render.basic.ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037682, VkglTestCase_037682_1, VkglTestCase_037682_2);

#define VkglTestCase_037683_1 "dEQP-GLES3.functional.uniform_api.value.a"
#define VkglTestCase_037683_2 "ssigned.by_pointer.render.basic.ivec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037683, VkglTestCase_037683_1, VkglTestCase_037683_2);

#define VkglTestCase_037684_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_037684_2 "signed.by_pointer.render.basic.ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037684, VkglTestCase_037684_1, VkglTestCase_037684_2);

#define VkglTestCase_037685_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_037685_2 "igned.by_pointer.render.basic.ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037685, VkglTestCase_037685_1, VkglTestCase_037685_2);

#define VkglTestCase_037686_1 "dEQP-GLES3.functional.uniform_api.value.a"
#define VkglTestCase_037686_2 "ssigned.by_pointer.render.basic.ivec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037686, VkglTestCase_037686_1, VkglTestCase_037686_2);

#define VkglTestCase_037687_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_037687_2 "signed.by_pointer.render.basic.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037687, VkglTestCase_037687_1, VkglTestCase_037687_2);

#define VkglTestCase_037688_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_037688_2 "igned.by_pointer.render.basic.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037688, VkglTestCase_037688_1, VkglTestCase_037688_2);

#define VkglTestCase_037689_1 "dEQP-GLES3.functional.uniform_api.value.a"
#define VkglTestCase_037689_2 "ssigned.by_pointer.render.basic.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037689, VkglTestCase_037689_1, VkglTestCase_037689_2);

#define VkglTestCase_037690_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_037690_2 "signed.by_pointer.render.basic.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037690, VkglTestCase_037690_1, VkglTestCase_037690_2);

#define VkglTestCase_037691_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_037691_2 "igned.by_pointer.render.basic.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037691, VkglTestCase_037691_1, VkglTestCase_037691_2);

#define VkglTestCase_037692_1 "dEQP-GLES3.functional.uniform_api.value.a"
#define VkglTestCase_037692_2 "ssigned.by_pointer.render.basic.uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037692, VkglTestCase_037692_1, VkglTestCase_037692_2);

#define VkglTestCase_037693_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_037693_2 "signed.by_pointer.render.basic.uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037693, VkglTestCase_037693_1, VkglTestCase_037693_2);

#define VkglTestCase_037694_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_037694_2 "igned.by_pointer.render.basic.uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037694, VkglTestCase_037694_1, VkglTestCase_037694_2);

#define VkglTestCase_037695_1 "dEQP-GLES3.functional.uniform_api.value.a"
#define VkglTestCase_037695_2 "ssigned.by_pointer.render.basic.uvec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037695, VkglTestCase_037695_1, VkglTestCase_037695_2);

#define VkglTestCase_037696_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_037696_2 "signed.by_pointer.render.basic.uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037696, VkglTestCase_037696_1, VkglTestCase_037696_2);

#define VkglTestCase_037697_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_037697_2 "igned.by_pointer.render.basic.uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037697, VkglTestCase_037697_1, VkglTestCase_037697_2);

#define VkglTestCase_037698_1 "dEQP-GLES3.functional.uniform_api.value.a"
#define VkglTestCase_037698_2 "ssigned.by_pointer.render.basic.uvec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037698, VkglTestCase_037698_1, VkglTestCase_037698_2);

#define VkglTestCase_037699_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_037699_2 "signed.by_pointer.render.basic.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037699, VkglTestCase_037699_1, VkglTestCase_037699_2);

#define VkglTestCase_037700_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_037700_2 "igned.by_pointer.render.basic.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037700, VkglTestCase_037700_1, VkglTestCase_037700_2);

#define VkglTestCase_037701_1 "dEQP-GLES3.functional.uniform_api.value.a"
#define VkglTestCase_037701_2 "ssigned.by_pointer.render.basic.uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037701, VkglTestCase_037701_1, VkglTestCase_037701_2);

#define VkglTestCase_037702_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_037702_2 "signed.by_pointer.render.basic.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037702, VkglTestCase_037702_1, VkglTestCase_037702_2);

#define VkglTestCase_037703_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_037703_2 "igned.by_pointer.render.basic.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037703, VkglTestCase_037703_1, VkglTestCase_037703_2);

#define VkglTestCase_037704_1 "dEQP-GLES3.functional.uniform_api.value.a"
#define VkglTestCase_037704_2 "ssigned.by_pointer.render.basic.bool_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037704, VkglTestCase_037704_1, VkglTestCase_037704_2);

#define VkglTestCase_037705_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_037705_2 "signed.by_pointer.render.basic.bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037705, VkglTestCase_037705_1, VkglTestCase_037705_2);

#define VkglTestCase_037706_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_037706_2 "igned.by_pointer.render.basic.bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037706, VkglTestCase_037706_1, VkglTestCase_037706_2);

#define VkglTestCase_037707_1 "dEQP-GLES3.functional.uniform_api.value.a"
#define VkglTestCase_037707_2 "ssigned.by_pointer.render.basic.bvec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037707, VkglTestCase_037707_1, VkglTestCase_037707_2);

#define VkglTestCase_037708_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_037708_2 "signed.by_pointer.render.basic.bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037708, VkglTestCase_037708_1, VkglTestCase_037708_2);

#define VkglTestCase_037709_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_037709_2 "igned.by_pointer.render.basic.bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037709, VkglTestCase_037709_1, VkglTestCase_037709_2);

#define VkglTestCase_037710_1 "dEQP-GLES3.functional.uniform_api.value.a"
#define VkglTestCase_037710_2 "ssigned.by_pointer.render.basic.bvec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037710, VkglTestCase_037710_1, VkglTestCase_037710_2);

#define VkglTestCase_037711_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_037711_2 "signed.by_pointer.render.basic.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037711, VkglTestCase_037711_1, VkglTestCase_037711_2);

#define VkglTestCase_037712_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_037712_2 "igned.by_pointer.render.basic.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037712, VkglTestCase_037712_1, VkglTestCase_037712_2);

#define VkglTestCase_037713_1 "dEQP-GLES3.functional.uniform_api.value.a"
#define VkglTestCase_037713_2 "ssigned.by_pointer.render.basic.bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037713, VkglTestCase_037713_1, VkglTestCase_037713_2);

#define VkglTestCase_037714_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037714_2 "gned.by_pointer.render.basic.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037714, VkglTestCase_037714_1, VkglTestCase_037714_2);

#define VkglTestCase_037715_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_037715_2 "ned.by_pointer.render.basic.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037715, VkglTestCase_037715_1, VkglTestCase_037715_2);

#define VkglTestCase_037716_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_037716_2 "igned.by_pointer.render.basic.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037716, VkglTestCase_037716_1, VkglTestCase_037716_2);

#define VkglTestCase_037717_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_037717_2 "ned.by_pointer.render.basic.samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037717, VkglTestCase_037717_1, VkglTestCase_037717_2);

#define VkglTestCase_037718_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_037718_2 "ed.by_pointer.render.basic.samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037718, VkglTestCase_037718_1, VkglTestCase_037718_2);

#define VkglTestCase_037719_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037719_2 "gned.by_pointer.render.basic.samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037719, VkglTestCase_037719_1, VkglTestCase_037719_2);

#define VkglTestCase_038056_1 "dEQP-GLES3.functional.uniform_api.value.a"
#define VkglTestCase_038056_2 "ssigned.by_value.render.basic.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038056, VkglTestCase_038056_1, VkglTestCase_038056_2);

#define VkglTestCase_038057_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_038057_2 "signed.by_value.render.basic.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038057, VkglTestCase_038057_1, VkglTestCase_038057_2);

#define VkglTestCase_038058_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_038058_2 "assigned.by_value.render.basic.float_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038058, VkglTestCase_038058_1, VkglTestCase_038058_2);

#define VkglTestCase_038059_1 "dEQP-GLES3.functional.uniform_api.value.a"
#define VkglTestCase_038059_2 "ssigned.by_value.render.basic.vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038059, VkglTestCase_038059_1, VkglTestCase_038059_2);

#define VkglTestCase_038060_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_038060_2 "signed.by_value.render.basic.vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038060, VkglTestCase_038060_1, VkglTestCase_038060_2);

#define VkglTestCase_038061_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_038061_2 "assigned.by_value.render.basic.vec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038061, VkglTestCase_038061_1, VkglTestCase_038061_2);

#define VkglTestCase_038062_1 "dEQP-GLES3.functional.uniform_api.value.a"
#define VkglTestCase_038062_2 "ssigned.by_value.render.basic.vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038062, VkglTestCase_038062_1, VkglTestCase_038062_2);

#define VkglTestCase_038063_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_038063_2 "signed.by_value.render.basic.vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038063, VkglTestCase_038063_1, VkglTestCase_038063_2);

#define VkglTestCase_038064_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_038064_2 "assigned.by_value.render.basic.vec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038064, VkglTestCase_038064_1, VkglTestCase_038064_2);

#define VkglTestCase_038065_1 "dEQP-GLES3.functional.uniform_api.value.a"
#define VkglTestCase_038065_2 "ssigned.by_value.render.basic.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038065, VkglTestCase_038065_1, VkglTestCase_038065_2);

#define VkglTestCase_038066_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_038066_2 "signed.by_value.render.basic.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038066, VkglTestCase_038066_1, VkglTestCase_038066_2);

#define VkglTestCase_038067_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_038067_2 "assigned.by_value.render.basic.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038067, VkglTestCase_038067_1, VkglTestCase_038067_2);

#define VkglTestCase_038068_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_038068_2 "assigned.by_value.render.basic.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038068, VkglTestCase_038068_1, VkglTestCase_038068_2);

#define VkglTestCase_038069_1 "dEQP-GLES3.functional.uniform_api.value.a"
#define VkglTestCase_038069_2 "ssigned.by_value.render.basic.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038069, VkglTestCase_038069_1, VkglTestCase_038069_2);

#define VkglTestCase_038070_1 "dEQP-GLES3.functional.uniform_api.value"
#define VkglTestCase_038070_2 ".assigned.by_value.render.basic.int_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038070, VkglTestCase_038070_1, VkglTestCase_038070_2);

#define VkglTestCase_038071_1 "dEQP-GLES3.functional.uniform_api.value.a"
#define VkglTestCase_038071_2 "ssigned.by_value.render.basic.ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038071, VkglTestCase_038071_1, VkglTestCase_038071_2);

#define VkglTestCase_038072_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_038072_2 "signed.by_value.render.basic.ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038072, VkglTestCase_038072_1, VkglTestCase_038072_2);

#define VkglTestCase_038073_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_038073_2 "assigned.by_value.render.basic.ivec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038073, VkglTestCase_038073_1, VkglTestCase_038073_2);

#define VkglTestCase_038074_1 "dEQP-GLES3.functional.uniform_api.value.a"
#define VkglTestCase_038074_2 "ssigned.by_value.render.basic.ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038074, VkglTestCase_038074_1, VkglTestCase_038074_2);

#define VkglTestCase_038075_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_038075_2 "signed.by_value.render.basic.ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038075, VkglTestCase_038075_1, VkglTestCase_038075_2);

#define VkglTestCase_038076_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_038076_2 "assigned.by_value.render.basic.ivec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038076, VkglTestCase_038076_1, VkglTestCase_038076_2);

#define VkglTestCase_038077_1 "dEQP-GLES3.functional.uniform_api.value.a"
#define VkglTestCase_038077_2 "ssigned.by_value.render.basic.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038077, VkglTestCase_038077_1, VkglTestCase_038077_2);

#define VkglTestCase_038078_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_038078_2 "signed.by_value.render.basic.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038078, VkglTestCase_038078_1, VkglTestCase_038078_2);

#define VkglTestCase_038079_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_038079_2 "assigned.by_value.render.basic.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038079, VkglTestCase_038079_1, VkglTestCase_038079_2);

#define VkglTestCase_038080_1 "dEQP-GLES3.functional.uniform_api.value.a"
#define VkglTestCase_038080_2 "ssigned.by_value.render.basic.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038080, VkglTestCase_038080_1, VkglTestCase_038080_2);

#define VkglTestCase_038081_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_038081_2 "signed.by_value.render.basic.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038081, VkglTestCase_038081_1, VkglTestCase_038081_2);

#define VkglTestCase_038082_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_038082_2 "assigned.by_value.render.basic.uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038082, VkglTestCase_038082_1, VkglTestCase_038082_2);

#define VkglTestCase_038083_1 "dEQP-GLES3.functional.uniform_api.value.a"
#define VkglTestCase_038083_2 "ssigned.by_value.render.basic.uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038083, VkglTestCase_038083_1, VkglTestCase_038083_2);

#define VkglTestCase_038084_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_038084_2 "signed.by_value.render.basic.uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038084, VkglTestCase_038084_1, VkglTestCase_038084_2);

#define VkglTestCase_038085_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_038085_2 "assigned.by_value.render.basic.uvec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038085, VkglTestCase_038085_1, VkglTestCase_038085_2);

#define VkglTestCase_038086_1 "dEQP-GLES3.functional.uniform_api.value.a"
#define VkglTestCase_038086_2 "ssigned.by_value.render.basic.uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038086, VkglTestCase_038086_1, VkglTestCase_038086_2);

#define VkglTestCase_038087_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_038087_2 "signed.by_value.render.basic.uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038087, VkglTestCase_038087_1, VkglTestCase_038087_2);

#define VkglTestCase_038088_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_038088_2 "assigned.by_value.render.basic.uvec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038088, VkglTestCase_038088_1, VkglTestCase_038088_2);

#define VkglTestCase_038089_1 "dEQP-GLES3.functional.uniform_api.value.a"
#define VkglTestCase_038089_2 "ssigned.by_value.render.basic.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038089, VkglTestCase_038089_1, VkglTestCase_038089_2);

#define VkglTestCase_038090_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_038090_2 "signed.by_value.render.basic.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038090, VkglTestCase_038090_1, VkglTestCase_038090_2);

#define VkglTestCase_038091_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_038091_2 "assigned.by_value.render.basic.uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038091, VkglTestCase_038091_1, VkglTestCase_038091_2);

#define VkglTestCase_038092_1 "dEQP-GLES3.functional.uniform_api.value.a"
#define VkglTestCase_038092_2 "ssigned.by_value.render.basic.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038092, VkglTestCase_038092_1, VkglTestCase_038092_2);

#define VkglTestCase_038093_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_038093_2 "signed.by_value.render.basic.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038093, VkglTestCase_038093_1, VkglTestCase_038093_2);

#define VkglTestCase_038094_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_038094_2 "assigned.by_value.render.basic.bool_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038094, VkglTestCase_038094_1, VkglTestCase_038094_2);

#define VkglTestCase_038095_1 "dEQP-GLES3.functional.uniform_api.value.a"
#define VkglTestCase_038095_2 "ssigned.by_value.render.basic.bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038095, VkglTestCase_038095_1, VkglTestCase_038095_2);

#define VkglTestCase_038096_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_038096_2 "signed.by_value.render.basic.bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038096, VkglTestCase_038096_1, VkglTestCase_038096_2);

#define VkglTestCase_038097_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_038097_2 "assigned.by_value.render.basic.bvec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038097, VkglTestCase_038097_1, VkglTestCase_038097_2);

#define VkglTestCase_038098_1 "dEQP-GLES3.functional.uniform_api.value.a"
#define VkglTestCase_038098_2 "ssigned.by_value.render.basic.bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038098, VkglTestCase_038098_1, VkglTestCase_038098_2);

#define VkglTestCase_038099_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_038099_2 "signed.by_value.render.basic.bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038099, VkglTestCase_038099_1, VkglTestCase_038099_2);

#define VkglTestCase_038100_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_038100_2 "assigned.by_value.render.basic.bvec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038100, VkglTestCase_038100_1, VkglTestCase_038100_2);

#define VkglTestCase_038101_1 "dEQP-GLES3.functional.uniform_api.value.a"
#define VkglTestCase_038101_2 "ssigned.by_value.render.basic.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038101, VkglTestCase_038101_1, VkglTestCase_038101_2);

#define VkglTestCase_038102_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_038102_2 "signed.by_value.render.basic.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038102, VkglTestCase_038102_1, VkglTestCase_038102_2);

#define VkglTestCase_038103_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_038103_2 "assigned.by_value.render.basic.bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038103, VkglTestCase_038103_1, VkglTestCase_038103_2);

#define VkglTestCase_038104_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_038104_2 "igned.by_value.render.basic.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038104, VkglTestCase_038104_1, VkglTestCase_038104_2);

#define VkglTestCase_038105_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_038105_2 "gned.by_value.render.basic.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038105, VkglTestCase_038105_1, VkglTestCase_038105_2);

#define VkglTestCase_038106_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_038106_2 "signed.by_value.render.basic.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038106, VkglTestCase_038106_1, VkglTestCase_038106_2);

#define VkglTestCase_038107_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_038107_2 "gned.by_value.render.basic.samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038107, VkglTestCase_038107_1, VkglTestCase_038107_2);

#define VkglTestCase_038108_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_038108_2 "ned.by_value.render.basic.samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038108, VkglTestCase_038108_1, VkglTestCase_038108_2);

#define VkglTestCase_038109_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_038109_2 "igned.by_value.render.basic.samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038109, VkglTestCase_038109_1, VkglTestCase_038109_2);
