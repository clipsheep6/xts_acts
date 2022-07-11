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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20015TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_014149_1 "dEQP-GLES2.functional.uniform_api.value"
#define VkglTestCase_014149_2 ".initial.get_uniform.basic.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014149, VkglTestCase_014149_1, VkglTestCase_014149_2);

#define VkglTestCase_014150_1 "dEQP-GLES2.functional.uniform_api.value."
#define VkglTestCase_014150_2 "initial.get_uniform.basic.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014150, VkglTestCase_014150_1, VkglTestCase_014150_2);

#define VkglTestCase_014151_1 "dEQP-GLES2.functional.uniform_api.valu"
#define VkglTestCase_014151_2 "e.initial.get_uniform.basic.float_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014151, VkglTestCase_014151_1, VkglTestCase_014151_2);

#define VkglTestCase_014152_1 "dEQP-GLES2.functional.uniform_api.valu"
#define VkglTestCase_014152_2 "e.initial.get_uniform.basic.vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014152, VkglTestCase_014152_1, VkglTestCase_014152_2);

#define VkglTestCase_014153_1 "dEQP-GLES2.functional.uniform_api.value"
#define VkglTestCase_014153_2 ".initial.get_uniform.basic.vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014153, VkglTestCase_014153_1, VkglTestCase_014153_2);

#define VkglTestCase_014154_1 "dEQP-GLES2.functional.uniform_api.val"
#define VkglTestCase_014154_2 "ue.initial.get_uniform.basic.vec2_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014154, VkglTestCase_014154_1, VkglTestCase_014154_2);

#define VkglTestCase_014155_1 "dEQP-GLES2.functional.uniform_api.valu"
#define VkglTestCase_014155_2 "e.initial.get_uniform.basic.vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014155, VkglTestCase_014155_1, VkglTestCase_014155_2);

#define VkglTestCase_014156_1 "dEQP-GLES2.functional.uniform_api.value"
#define VkglTestCase_014156_2 ".initial.get_uniform.basic.vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014156, VkglTestCase_014156_1, VkglTestCase_014156_2);

#define VkglTestCase_014157_1 "dEQP-GLES2.functional.uniform_api.val"
#define VkglTestCase_014157_2 "ue.initial.get_uniform.basic.vec3_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014157, VkglTestCase_014157_1, VkglTestCase_014157_2);

#define VkglTestCase_014158_1 "dEQP-GLES2.functional.uniform_api.valu"
#define VkglTestCase_014158_2 "e.initial.get_uniform.basic.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014158, VkglTestCase_014158_1, VkglTestCase_014158_2);

#define VkglTestCase_014159_1 "dEQP-GLES2.functional.uniform_api.value"
#define VkglTestCase_014159_2 ".initial.get_uniform.basic.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014159, VkglTestCase_014159_1, VkglTestCase_014159_2);

#define VkglTestCase_014160_1 "dEQP-GLES2.functional.uniform_api.val"
#define VkglTestCase_014160_2 "ue.initial.get_uniform.basic.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014160, VkglTestCase_014160_1, VkglTestCase_014160_2);

#define VkglTestCase_014161_1 "dEQP-GLES2.functional.uniform_api.valu"
#define VkglTestCase_014161_2 "e.initial.get_uniform.basic.mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014161, VkglTestCase_014161_1, VkglTestCase_014161_2);

#define VkglTestCase_014162_1 "dEQP-GLES2.functional.uniform_api.value"
#define VkglTestCase_014162_2 ".initial.get_uniform.basic.mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014162, VkglTestCase_014162_1, VkglTestCase_014162_2);

#define VkglTestCase_014163_1 "dEQP-GLES2.functional.uniform_api.val"
#define VkglTestCase_014163_2 "ue.initial.get_uniform.basic.mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014163, VkglTestCase_014163_1, VkglTestCase_014163_2);

#define VkglTestCase_014164_1 "dEQP-GLES2.functional.uniform_api.valu"
#define VkglTestCase_014164_2 "e.initial.get_uniform.basic.mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014164, VkglTestCase_014164_1, VkglTestCase_014164_2);

#define VkglTestCase_014165_1 "dEQP-GLES2.functional.uniform_api.value"
#define VkglTestCase_014165_2 ".initial.get_uniform.basic.mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014165, VkglTestCase_014165_1, VkglTestCase_014165_2);

#define VkglTestCase_014166_1 "dEQP-GLES2.functional.uniform_api.val"
#define VkglTestCase_014166_2 "ue.initial.get_uniform.basic.mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014166, VkglTestCase_014166_1, VkglTestCase_014166_2);

#define VkglTestCase_014167_1 "dEQP-GLES2.functional.uniform_api.valu"
#define VkglTestCase_014167_2 "e.initial.get_uniform.basic.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014167, VkglTestCase_014167_1, VkglTestCase_014167_2);

#define VkglTestCase_014168_1 "dEQP-GLES2.functional.uniform_api.value"
#define VkglTestCase_014168_2 ".initial.get_uniform.basic.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014168, VkglTestCase_014168_1, VkglTestCase_014168_2);

#define VkglTestCase_014169_1 "dEQP-GLES2.functional.uniform_api.val"
#define VkglTestCase_014169_2 "ue.initial.get_uniform.basic.mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014169, VkglTestCase_014169_1, VkglTestCase_014169_2);

#define VkglTestCase_014170_1 "dEQP-GLES2.functional.uniform_api.valu"
#define VkglTestCase_014170_2 "e.initial.get_uniform.basic.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014170, VkglTestCase_014170_1, VkglTestCase_014170_2);

#define VkglTestCase_014171_1 "dEQP-GLES2.functional.uniform_api.value"
#define VkglTestCase_014171_2 ".initial.get_uniform.basic.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014171, VkglTestCase_014171_1, VkglTestCase_014171_2);

#define VkglTestCase_014172_1 "dEQP-GLES2.functional.uniform_api.val"
#define VkglTestCase_014172_2 "ue.initial.get_uniform.basic.int_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014172, VkglTestCase_014172_1, VkglTestCase_014172_2);

#define VkglTestCase_014173_1 "dEQP-GLES2.functional.uniform_api.value"
#define VkglTestCase_014173_2 ".initial.get_uniform.basic.ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014173, VkglTestCase_014173_1, VkglTestCase_014173_2);

#define VkglTestCase_014174_1 "dEQP-GLES2.functional.uniform_api.value."
#define VkglTestCase_014174_2 "initial.get_uniform.basic.ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014174, VkglTestCase_014174_1, VkglTestCase_014174_2);

#define VkglTestCase_014175_1 "dEQP-GLES2.functional.uniform_api.valu"
#define VkglTestCase_014175_2 "e.initial.get_uniform.basic.ivec2_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014175, VkglTestCase_014175_1, VkglTestCase_014175_2);

#define VkglTestCase_014176_1 "dEQP-GLES2.functional.uniform_api.value"
#define VkglTestCase_014176_2 ".initial.get_uniform.basic.ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014176, VkglTestCase_014176_1, VkglTestCase_014176_2);

#define VkglTestCase_014177_1 "dEQP-GLES2.functional.uniform_api.value."
#define VkglTestCase_014177_2 "initial.get_uniform.basic.ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014177, VkglTestCase_014177_1, VkglTestCase_014177_2);

#define VkglTestCase_014178_1 "dEQP-GLES2.functional.uniform_api.valu"
#define VkglTestCase_014178_2 "e.initial.get_uniform.basic.ivec3_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014178, VkglTestCase_014178_1, VkglTestCase_014178_2);

#define VkglTestCase_014179_1 "dEQP-GLES2.functional.uniform_api.value"
#define VkglTestCase_014179_2 ".initial.get_uniform.basic.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014179, VkglTestCase_014179_1, VkglTestCase_014179_2);

#define VkglTestCase_014180_1 "dEQP-GLES2.functional.uniform_api.value."
#define VkglTestCase_014180_2 "initial.get_uniform.basic.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014180, VkglTestCase_014180_1, VkglTestCase_014180_2);

#define VkglTestCase_014181_1 "dEQP-GLES2.functional.uniform_api.valu"
#define VkglTestCase_014181_2 "e.initial.get_uniform.basic.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014181, VkglTestCase_014181_1, VkglTestCase_014181_2);

#define VkglTestCase_014182_1 "dEQP-GLES2.functional.uniform_api.value.ini"
#define VkglTestCase_014182_2 "tial.get_uniform.basic.bool_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014182, VkglTestCase_014182_1, VkglTestCase_014182_2);

#define VkglTestCase_014183_1 "dEQP-GLES2.functional.uniform_api.value.init"
#define VkglTestCase_014183_2 "ial.get_uniform.basic.bool_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014183, VkglTestCase_014183_1, VkglTestCase_014183_2);

#define VkglTestCase_014184_1 "dEQP-GLES2.functional.uniform_api.value.in"
#define VkglTestCase_014184_2 "itial.get_uniform.basic.bool_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014184, VkglTestCase_014184_1, VkglTestCase_014184_2);

#define VkglTestCase_014185_1 "dEQP-GLES2.functional.uniform_api.value.in"
#define VkglTestCase_014185_2 "itial.get_uniform.basic.bool_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014185, VkglTestCase_014185_1, VkglTestCase_014185_2);

#define VkglTestCase_014186_1 "dEQP-GLES2.functional.uniform_api.value.ini"
#define VkglTestCase_014186_2 "tial.get_uniform.basic.bool_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014186, VkglTestCase_014186_1, VkglTestCase_014186_2);

#define VkglTestCase_014187_1 "dEQP-GLES2.functional.uniform_api.value.i"
#define VkglTestCase_014187_2 "nitial.get_uniform.basic.bool_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014187, VkglTestCase_014187_1, VkglTestCase_014187_2);

#define VkglTestCase_014188_1 "dEQP-GLES2.functional.uniform_api.value.init"
#define VkglTestCase_014188_2 "ial.get_uniform.basic.bvec2_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014188, VkglTestCase_014188_1, VkglTestCase_014188_2);

#define VkglTestCase_014189_1 "dEQP-GLES2.functional.uniform_api.value.initi"
#define VkglTestCase_014189_2 "al.get_uniform.basic.bvec2_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014189, VkglTestCase_014189_1, VkglTestCase_014189_2);

#define VkglTestCase_014190_1 "dEQP-GLES2.functional.uniform_api.value.ini"
#define VkglTestCase_014190_2 "tial.get_uniform.basic.bvec2_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014190, VkglTestCase_014190_1, VkglTestCase_014190_2);

#define VkglTestCase_014191_1 "dEQP-GLES2.functional.uniform_api.value.ini"
#define VkglTestCase_014191_2 "tial.get_uniform.basic.bvec2_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014191, VkglTestCase_014191_1, VkglTestCase_014191_2);

#define VkglTestCase_014192_1 "dEQP-GLES2.functional.uniform_api.value.init"
#define VkglTestCase_014192_2 "ial.get_uniform.basic.bvec2_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014192, VkglTestCase_014192_1, VkglTestCase_014192_2);

#define VkglTestCase_014193_1 "dEQP-GLES2.functional.uniform_api.value.in"
#define VkglTestCase_014193_2 "itial.get_uniform.basic.bvec2_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014193, VkglTestCase_014193_1, VkglTestCase_014193_2);

#define VkglTestCase_014194_1 "dEQP-GLES2.functional.uniform_api.value.init"
#define VkglTestCase_014194_2 "ial.get_uniform.basic.bvec3_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014194, VkglTestCase_014194_1, VkglTestCase_014194_2);

#define VkglTestCase_014195_1 "dEQP-GLES2.functional.uniform_api.value.initi"
#define VkglTestCase_014195_2 "al.get_uniform.basic.bvec3_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014195, VkglTestCase_014195_1, VkglTestCase_014195_2);

#define VkglTestCase_014196_1 "dEQP-GLES2.functional.uniform_api.value.ini"
#define VkglTestCase_014196_2 "tial.get_uniform.basic.bvec3_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014196, VkglTestCase_014196_1, VkglTestCase_014196_2);

#define VkglTestCase_014197_1 "dEQP-GLES2.functional.uniform_api.value.ini"
#define VkglTestCase_014197_2 "tial.get_uniform.basic.bvec3_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014197, VkglTestCase_014197_1, VkglTestCase_014197_2);

#define VkglTestCase_014198_1 "dEQP-GLES2.functional.uniform_api.value.init"
#define VkglTestCase_014198_2 "ial.get_uniform.basic.bvec3_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014198, VkglTestCase_014198_1, VkglTestCase_014198_2);

#define VkglTestCase_014199_1 "dEQP-GLES2.functional.uniform_api.value.in"
#define VkglTestCase_014199_2 "itial.get_uniform.basic.bvec3_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014199, VkglTestCase_014199_1, VkglTestCase_014199_2);

#define VkglTestCase_014200_1 "dEQP-GLES2.functional.uniform_api.value.init"
#define VkglTestCase_014200_2 "ial.get_uniform.basic.bvec4_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014200, VkglTestCase_014200_1, VkglTestCase_014200_2);

#define VkglTestCase_014201_1 "dEQP-GLES2.functional.uniform_api.value.initi"
#define VkglTestCase_014201_2 "al.get_uniform.basic.bvec4_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014201, VkglTestCase_014201_1, VkglTestCase_014201_2);

#define VkglTestCase_014202_1 "dEQP-GLES2.functional.uniform_api.value.ini"
#define VkglTestCase_014202_2 "tial.get_uniform.basic.bvec4_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014202, VkglTestCase_014202_1, VkglTestCase_014202_2);

#define VkglTestCase_014203_1 "dEQP-GLES2.functional.uniform_api.value.ini"
#define VkglTestCase_014203_2 "tial.get_uniform.basic.bvec4_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014203, VkglTestCase_014203_1, VkglTestCase_014203_2);

#define VkglTestCase_014204_1 "dEQP-GLES2.functional.uniform_api.value.init"
#define VkglTestCase_014204_2 "ial.get_uniform.basic.bvec4_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014204, VkglTestCase_014204_1, VkglTestCase_014204_2);

#define VkglTestCase_014205_1 "dEQP-GLES2.functional.uniform_api.value.in"
#define VkglTestCase_014205_2 "itial.get_uniform.basic.bvec4_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014205, VkglTestCase_014205_1, VkglTestCase_014205_2);

#define VkglTestCase_014206_1 "dEQP-GLES2.functional.uniform_api.value.i"
#define VkglTestCase_014206_2 "nitial.get_uniform.basic.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014206, VkglTestCase_014206_1, VkglTestCase_014206_2);

#define VkglTestCase_014207_1 "dEQP-GLES2.functional.uniform_api.value.in"
#define VkglTestCase_014207_2 "itial.get_uniform.basic.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014207, VkglTestCase_014207_1, VkglTestCase_014207_2);

#define VkglTestCase_014208_1 "dEQP-GLES2.functional.uniform_api.value."
#define VkglTestCase_014208_2 "initial.get_uniform.basic.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014208, VkglTestCase_014208_1, VkglTestCase_014208_2);

#define VkglTestCase_014209_1 "dEQP-GLES2.functional.uniform_api.value.in"
#define VkglTestCase_014209_2 "itial.get_uniform.basic.samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014209, VkglTestCase_014209_1, VkglTestCase_014209_2);

#define VkglTestCase_014210_1 "dEQP-GLES2.functional.uniform_api.value.ini"
#define VkglTestCase_014210_2 "tial.get_uniform.basic.samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014210, VkglTestCase_014210_1, VkglTestCase_014210_2);

#define VkglTestCase_014211_1 "dEQP-GLES2.functional.uniform_api.value.i"
#define VkglTestCase_014211_2 "nitial.get_uniform.basic.samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014211, VkglTestCase_014211_1, VkglTestCase_014211_2);

#define VkglTestCase_014439_1 "dEQP-GLES2.functional.uniform_api.value.assig"
#define VkglTestCase_014439_2 "ned.by_pointer.get_uniform.basic.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014439, VkglTestCase_014439_1, VkglTestCase_014439_2);

#define VkglTestCase_014440_1 "dEQP-GLES2.functional.uniform_api.value.assign"
#define VkglTestCase_014440_2 "ed.by_pointer.get_uniform.basic.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014440, VkglTestCase_014440_1, VkglTestCase_014440_2);

#define VkglTestCase_014441_1 "dEQP-GLES2.functional.uniform_api.value.assi"
#define VkglTestCase_014441_2 "gned.by_pointer.get_uniform.basic.float_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014441, VkglTestCase_014441_1, VkglTestCase_014441_2);

#define VkglTestCase_014442_1 "dEQP-GLES2.functional.uniform_api.value.assi"
#define VkglTestCase_014442_2 "gned.by_pointer.get_uniform.basic.vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014442, VkglTestCase_014442_1, VkglTestCase_014442_2);

#define VkglTestCase_014443_1 "dEQP-GLES2.functional.uniform_api.value.assig"
#define VkglTestCase_014443_2 "ned.by_pointer.get_uniform.basic.vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014443, VkglTestCase_014443_1, VkglTestCase_014443_2);

#define VkglTestCase_014444_1 "dEQP-GLES2.functional.uniform_api.value.ass"
#define VkglTestCase_014444_2 "igned.by_pointer.get_uniform.basic.vec2_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014444, VkglTestCase_014444_1, VkglTestCase_014444_2);

#define VkglTestCase_014445_1 "dEQP-GLES2.functional.uniform_api.value.assi"
#define VkglTestCase_014445_2 "gned.by_pointer.get_uniform.basic.vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014445, VkglTestCase_014445_1, VkglTestCase_014445_2);

#define VkglTestCase_014446_1 "dEQP-GLES2.functional.uniform_api.value.assig"
#define VkglTestCase_014446_2 "ned.by_pointer.get_uniform.basic.vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014446, VkglTestCase_014446_1, VkglTestCase_014446_2);

#define VkglTestCase_014447_1 "dEQP-GLES2.functional.uniform_api.value.ass"
#define VkglTestCase_014447_2 "igned.by_pointer.get_uniform.basic.vec3_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014447, VkglTestCase_014447_1, VkglTestCase_014447_2);

#define VkglTestCase_014448_1 "dEQP-GLES2.functional.uniform_api.value.assi"
#define VkglTestCase_014448_2 "gned.by_pointer.get_uniform.basic.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014448, VkglTestCase_014448_1, VkglTestCase_014448_2);

#define VkglTestCase_014449_1 "dEQP-GLES2.functional.uniform_api.value.assig"
#define VkglTestCase_014449_2 "ned.by_pointer.get_uniform.basic.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014449, VkglTestCase_014449_1, VkglTestCase_014449_2);

#define VkglTestCase_014450_1 "dEQP-GLES2.functional.uniform_api.value.ass"
#define VkglTestCase_014450_2 "igned.by_pointer.get_uniform.basic.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014450, VkglTestCase_014450_1, VkglTestCase_014450_2);

#define VkglTestCase_014451_1 "dEQP-GLES2.functional.uniform_api.value.assi"
#define VkglTestCase_014451_2 "gned.by_pointer.get_uniform.basic.mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014451, VkglTestCase_014451_1, VkglTestCase_014451_2);

#define VkglTestCase_014452_1 "dEQP-GLES2.functional.uniform_api.value.assig"
#define VkglTestCase_014452_2 "ned.by_pointer.get_uniform.basic.mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014452, VkglTestCase_014452_1, VkglTestCase_014452_2);

#define VkglTestCase_014453_1 "dEQP-GLES2.functional.uniform_api.value.ass"
#define VkglTestCase_014453_2 "igned.by_pointer.get_uniform.basic.mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014453, VkglTestCase_014453_1, VkglTestCase_014453_2);

#define VkglTestCase_014454_1 "dEQP-GLES2.functional.uniform_api.value.assi"
#define VkglTestCase_014454_2 "gned.by_pointer.get_uniform.basic.mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014454, VkglTestCase_014454_1, VkglTestCase_014454_2);

#define VkglTestCase_014455_1 "dEQP-GLES2.functional.uniform_api.value.assig"
#define VkglTestCase_014455_2 "ned.by_pointer.get_uniform.basic.mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014455, VkglTestCase_014455_1, VkglTestCase_014455_2);

#define VkglTestCase_014456_1 "dEQP-GLES2.functional.uniform_api.value.ass"
#define VkglTestCase_014456_2 "igned.by_pointer.get_uniform.basic.mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014456, VkglTestCase_014456_1, VkglTestCase_014456_2);

#define VkglTestCase_014457_1 "dEQP-GLES2.functional.uniform_api.value.assi"
#define VkglTestCase_014457_2 "gned.by_pointer.get_uniform.basic.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014457, VkglTestCase_014457_1, VkglTestCase_014457_2);

#define VkglTestCase_014458_1 "dEQP-GLES2.functional.uniform_api.value.assig"
#define VkglTestCase_014458_2 "ned.by_pointer.get_uniform.basic.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014458, VkglTestCase_014458_1, VkglTestCase_014458_2);

#define VkglTestCase_014459_1 "dEQP-GLES2.functional.uniform_api.value.ass"
#define VkglTestCase_014459_2 "igned.by_pointer.get_uniform.basic.mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014459, VkglTestCase_014459_1, VkglTestCase_014459_2);

#define VkglTestCase_014460_1 "dEQP-GLES2.functional.uniform_api.value.assi"
#define VkglTestCase_014460_2 "gned.by_pointer.get_uniform.basic.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014460, VkglTestCase_014460_1, VkglTestCase_014460_2);

#define VkglTestCase_014461_1 "dEQP-GLES2.functional.uniform_api.value.assig"
#define VkglTestCase_014461_2 "ned.by_pointer.get_uniform.basic.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014461, VkglTestCase_014461_1, VkglTestCase_014461_2);

#define VkglTestCase_014462_1 "dEQP-GLES2.functional.uniform_api.value.ass"
#define VkglTestCase_014462_2 "igned.by_pointer.get_uniform.basic.int_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014462, VkglTestCase_014462_1, VkglTestCase_014462_2);

#define VkglTestCase_014463_1 "dEQP-GLES2.functional.uniform_api.value.assig"
#define VkglTestCase_014463_2 "ned.by_pointer.get_uniform.basic.ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014463, VkglTestCase_014463_1, VkglTestCase_014463_2);

#define VkglTestCase_014464_1 "dEQP-GLES2.functional.uniform_api.value.assign"
#define VkglTestCase_014464_2 "ed.by_pointer.get_uniform.basic.ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014464, VkglTestCase_014464_1, VkglTestCase_014464_2);

#define VkglTestCase_014465_1 "dEQP-GLES2.functional.uniform_api.value.assi"
#define VkglTestCase_014465_2 "gned.by_pointer.get_uniform.basic.ivec2_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014465, VkglTestCase_014465_1, VkglTestCase_014465_2);

#define VkglTestCase_014466_1 "dEQP-GLES2.functional.uniform_api.value.assig"
#define VkglTestCase_014466_2 "ned.by_pointer.get_uniform.basic.ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014466, VkglTestCase_014466_1, VkglTestCase_014466_2);

#define VkglTestCase_014467_1 "dEQP-GLES2.functional.uniform_api.value.assign"
#define VkglTestCase_014467_2 "ed.by_pointer.get_uniform.basic.ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014467, VkglTestCase_014467_1, VkglTestCase_014467_2);

#define VkglTestCase_014468_1 "dEQP-GLES2.functional.uniform_api.value.assi"
#define VkglTestCase_014468_2 "gned.by_pointer.get_uniform.basic.ivec3_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014468, VkglTestCase_014468_1, VkglTestCase_014468_2);

#define VkglTestCase_014469_1 "dEQP-GLES2.functional.uniform_api.value.assig"
#define VkglTestCase_014469_2 "ned.by_pointer.get_uniform.basic.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014469, VkglTestCase_014469_1, VkglTestCase_014469_2);

#define VkglTestCase_014470_1 "dEQP-GLES2.functional.uniform_api.value.assign"
#define VkglTestCase_014470_2 "ed.by_pointer.get_uniform.basic.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014470, VkglTestCase_014470_1, VkglTestCase_014470_2);

#define VkglTestCase_014471_1 "dEQP-GLES2.functional.uniform_api.value.assi"
#define VkglTestCase_014471_2 "gned.by_pointer.get_uniform.basic.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014471, VkglTestCase_014471_1, VkglTestCase_014471_2);

#define VkglTestCase_014472_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_014472_2 "by_pointer.get_uniform.basic.bool_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014472, VkglTestCase_014472_1, VkglTestCase_014472_2);

#define VkglTestCase_014473_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_014473_2 "y_pointer.get_uniform.basic.bool_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014473, VkglTestCase_014473_1, VkglTestCase_014473_2);

#define VkglTestCase_014474_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_014474_2 ".by_pointer.get_uniform.basic.bool_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014474, VkglTestCase_014474_1, VkglTestCase_014474_2);

#define VkglTestCase_014475_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_014475_2 ".by_pointer.get_uniform.basic.bool_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014475, VkglTestCase_014475_1, VkglTestCase_014475_2);

#define VkglTestCase_014476_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_014476_2 "by_pointer.get_uniform.basic.bool_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014476, VkglTestCase_014476_1, VkglTestCase_014476_2);

#define VkglTestCase_014477_1 "dEQP-GLES2.functional.uniform_api.value.assigne"
#define VkglTestCase_014477_2 "d.by_pointer.get_uniform.basic.bool_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014477, VkglTestCase_014477_1, VkglTestCase_014477_2);

#define VkglTestCase_014478_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_014478_2 "y_pointer.get_uniform.basic.bvec2_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014478, VkglTestCase_014478_1, VkglTestCase_014478_2);

#define VkglTestCase_014479_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by"
#define VkglTestCase_014479_2 "_pointer.get_uniform.basic.bvec2_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014479, VkglTestCase_014479_1, VkglTestCase_014479_2);

#define VkglTestCase_014480_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_014480_2 "by_pointer.get_uniform.basic.bvec2_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014480, VkglTestCase_014480_1, VkglTestCase_014480_2);

#define VkglTestCase_014481_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_014481_2 "by_pointer.get_uniform.basic.bvec2_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014481, VkglTestCase_014481_1, VkglTestCase_014481_2);

#define VkglTestCase_014482_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_014482_2 "y_pointer.get_uniform.basic.bvec2_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014482, VkglTestCase_014482_1, VkglTestCase_014482_2);

#define VkglTestCase_014483_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_014483_2 ".by_pointer.get_uniform.basic.bvec2_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014483, VkglTestCase_014483_1, VkglTestCase_014483_2);

#define VkglTestCase_014484_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_014484_2 "y_pointer.get_uniform.basic.bvec3_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014484, VkglTestCase_014484_1, VkglTestCase_014484_2);

#define VkglTestCase_014485_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by"
#define VkglTestCase_014485_2 "_pointer.get_uniform.basic.bvec3_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014485, VkglTestCase_014485_1, VkglTestCase_014485_2);

#define VkglTestCase_014486_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_014486_2 "by_pointer.get_uniform.basic.bvec3_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014486, VkglTestCase_014486_1, VkglTestCase_014486_2);

#define VkglTestCase_014487_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_014487_2 "by_pointer.get_uniform.basic.bvec3_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014487, VkglTestCase_014487_1, VkglTestCase_014487_2);

#define VkglTestCase_014488_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_014488_2 "y_pointer.get_uniform.basic.bvec3_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014488, VkglTestCase_014488_1, VkglTestCase_014488_2);

#define VkglTestCase_014489_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_014489_2 ".by_pointer.get_uniform.basic.bvec3_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014489, VkglTestCase_014489_1, VkglTestCase_014489_2);

#define VkglTestCase_014490_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_014490_2 "y_pointer.get_uniform.basic.bvec4_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014490, VkglTestCase_014490_1, VkglTestCase_014490_2);

#define VkglTestCase_014491_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by"
#define VkglTestCase_014491_2 "_pointer.get_uniform.basic.bvec4_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014491, VkglTestCase_014491_1, VkglTestCase_014491_2);

#define VkglTestCase_014492_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_014492_2 "by_pointer.get_uniform.basic.bvec4_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014492, VkglTestCase_014492_1, VkglTestCase_014492_2);

#define VkglTestCase_014493_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_014493_2 "by_pointer.get_uniform.basic.bvec4_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014493, VkglTestCase_014493_1, VkglTestCase_014493_2);

#define VkglTestCase_014494_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_014494_2 "y_pointer.get_uniform.basic.bvec4_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014494, VkglTestCase_014494_1, VkglTestCase_014494_2);

#define VkglTestCase_014495_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_014495_2 ".by_pointer.get_uniform.basic.bvec4_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014495, VkglTestCase_014495_1, VkglTestCase_014495_2);

#define VkglTestCase_014496_1 "dEQP-GLES2.functional.uniform_api.value.assigne"
#define VkglTestCase_014496_2 "d.by_pointer.get_uniform.basic.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014496, VkglTestCase_014496_1, VkglTestCase_014496_2);

#define VkglTestCase_014497_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_014497_2 ".by_pointer.get_uniform.basic.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014497, VkglTestCase_014497_1, VkglTestCase_014497_2);

#define VkglTestCase_014498_1 "dEQP-GLES2.functional.uniform_api.value.assign"
#define VkglTestCase_014498_2 "ed.by_pointer.get_uniform.basic.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014498, VkglTestCase_014498_1, VkglTestCase_014498_2);

#define VkglTestCase_014499_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_014499_2 ".by_pointer.get_uniform.basic.samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014499, VkglTestCase_014499_1, VkglTestCase_014499_2);

#define VkglTestCase_014500_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_014500_2 "by_pointer.get_uniform.basic.samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014500, VkglTestCase_014500_1, VkglTestCase_014500_2);

#define VkglTestCase_014501_1 "dEQP-GLES2.functional.uniform_api.value.assigne"
#define VkglTestCase_014501_2 "d.by_pointer.get_uniform.basic.samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014501, VkglTestCase_014501_1, VkglTestCase_014501_2);

#define VkglTestCase_014771_1 "dEQP-GLES2.functional.uniform_api.value.assi"
#define VkglTestCase_014771_2 "gned.by_value.get_uniform.basic.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014771, VkglTestCase_014771_1, VkglTestCase_014771_2);

#define VkglTestCase_014772_1 "dEQP-GLES2.functional.uniform_api.value.assig"
#define VkglTestCase_014772_2 "ned.by_value.get_uniform.basic.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014772, VkglTestCase_014772_1, VkglTestCase_014772_2);

#define VkglTestCase_014773_1 "dEQP-GLES2.functional.uniform_api.value.ass"
#define VkglTestCase_014773_2 "igned.by_value.get_uniform.basic.float_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014773, VkglTestCase_014773_1, VkglTestCase_014773_2);

#define VkglTestCase_014774_1 "dEQP-GLES2.functional.uniform_api.value.ass"
#define VkglTestCase_014774_2 "igned.by_value.get_uniform.basic.vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014774, VkglTestCase_014774_1, VkglTestCase_014774_2);

#define VkglTestCase_014775_1 "dEQP-GLES2.functional.uniform_api.value.assi"
#define VkglTestCase_014775_2 "gned.by_value.get_uniform.basic.vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014775, VkglTestCase_014775_1, VkglTestCase_014775_2);

#define VkglTestCase_014776_1 "dEQP-GLES2.functional.uniform_api.value.as"
#define VkglTestCase_014776_2 "signed.by_value.get_uniform.basic.vec2_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014776, VkglTestCase_014776_1, VkglTestCase_014776_2);

#define VkglTestCase_014777_1 "dEQP-GLES2.functional.uniform_api.value.ass"
#define VkglTestCase_014777_2 "igned.by_value.get_uniform.basic.vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014777, VkglTestCase_014777_1, VkglTestCase_014777_2);

#define VkglTestCase_014778_1 "dEQP-GLES2.functional.uniform_api.value.assi"
#define VkglTestCase_014778_2 "gned.by_value.get_uniform.basic.vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014778, VkglTestCase_014778_1, VkglTestCase_014778_2);

#define VkglTestCase_014779_1 "dEQP-GLES2.functional.uniform_api.value.as"
#define VkglTestCase_014779_2 "signed.by_value.get_uniform.basic.vec3_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014779, VkglTestCase_014779_1, VkglTestCase_014779_2);

#define VkglTestCase_014780_1 "dEQP-GLES2.functional.uniform_api.value.ass"
#define VkglTestCase_014780_2 "igned.by_value.get_uniform.basic.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014780, VkglTestCase_014780_1, VkglTestCase_014780_2);

#define VkglTestCase_014781_1 "dEQP-GLES2.functional.uniform_api.value.assi"
#define VkglTestCase_014781_2 "gned.by_value.get_uniform.basic.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014781, VkglTestCase_014781_1, VkglTestCase_014781_2);

#define VkglTestCase_014782_1 "dEQP-GLES2.functional.uniform_api.value.as"
#define VkglTestCase_014782_2 "signed.by_value.get_uniform.basic.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014782, VkglTestCase_014782_1, VkglTestCase_014782_2);

#define VkglTestCase_014783_1 "dEQP-GLES2.functional.uniform_api.value.ass"
#define VkglTestCase_014783_2 "igned.by_value.get_uniform.basic.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014783, VkglTestCase_014783_1, VkglTestCase_014783_2);

#define VkglTestCase_014784_1 "dEQP-GLES2.functional.uniform_api.value.assi"
#define VkglTestCase_014784_2 "gned.by_value.get_uniform.basic.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014784, VkglTestCase_014784_1, VkglTestCase_014784_2);

#define VkglTestCase_014785_1 "dEQP-GLES2.functional.uniform_api.value.as"
#define VkglTestCase_014785_2 "signed.by_value.get_uniform.basic.int_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014785, VkglTestCase_014785_1, VkglTestCase_014785_2);

#define VkglTestCase_014786_1 "dEQP-GLES2.functional.uniform_api.value.assi"
#define VkglTestCase_014786_2 "gned.by_value.get_uniform.basic.ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014786, VkglTestCase_014786_1, VkglTestCase_014786_2);

#define VkglTestCase_014787_1 "dEQP-GLES2.functional.uniform_api.value.assig"
#define VkglTestCase_014787_2 "ned.by_value.get_uniform.basic.ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014787, VkglTestCase_014787_1, VkglTestCase_014787_2);

#define VkglTestCase_014788_1 "dEQP-GLES2.functional.uniform_api.value.ass"
#define VkglTestCase_014788_2 "igned.by_value.get_uniform.basic.ivec2_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014788, VkglTestCase_014788_1, VkglTestCase_014788_2);

#define VkglTestCase_014789_1 "dEQP-GLES2.functional.uniform_api.value.assi"
#define VkglTestCase_014789_2 "gned.by_value.get_uniform.basic.ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014789, VkglTestCase_014789_1, VkglTestCase_014789_2);

#define VkglTestCase_014790_1 "dEQP-GLES2.functional.uniform_api.value.assig"
#define VkglTestCase_014790_2 "ned.by_value.get_uniform.basic.ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014790, VkglTestCase_014790_1, VkglTestCase_014790_2);

#define VkglTestCase_014791_1 "dEQP-GLES2.functional.uniform_api.value.ass"
#define VkglTestCase_014791_2 "igned.by_value.get_uniform.basic.ivec3_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014791, VkglTestCase_014791_1, VkglTestCase_014791_2);

#define VkglTestCase_014792_1 "dEQP-GLES2.functional.uniform_api.value.assi"
#define VkglTestCase_014792_2 "gned.by_value.get_uniform.basic.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014792, VkglTestCase_014792_1, VkglTestCase_014792_2);

#define VkglTestCase_014793_1 "dEQP-GLES2.functional.uniform_api.value.assig"
#define VkglTestCase_014793_2 "ned.by_value.get_uniform.basic.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014793, VkglTestCase_014793_1, VkglTestCase_014793_2);

#define VkglTestCase_014794_1 "dEQP-GLES2.functional.uniform_api.value.ass"
#define VkglTestCase_014794_2 "igned.by_value.get_uniform.basic.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014794, VkglTestCase_014794_1, VkglTestCase_014794_2);

#define VkglTestCase_014795_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_014795_2 ".by_value.get_uniform.basic.bool_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014795, VkglTestCase_014795_1, VkglTestCase_014795_2);

#define VkglTestCase_014796_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_014796_2 "by_value.get_uniform.basic.bool_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014796, VkglTestCase_014796_1, VkglTestCase_014796_2);

#define VkglTestCase_014797_1 "dEQP-GLES2.functional.uniform_api.value.assigne"
#define VkglTestCase_014797_2 "d.by_value.get_uniform.basic.bool_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014797, VkglTestCase_014797_1, VkglTestCase_014797_2);

#define VkglTestCase_014798_1 "dEQP-GLES2.functional.uniform_api.value.assigne"
#define VkglTestCase_014798_2 "d.by_value.get_uniform.basic.bool_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014798, VkglTestCase_014798_1, VkglTestCase_014798_2);

#define VkglTestCase_014799_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_014799_2 ".by_value.get_uniform.basic.bool_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014799, VkglTestCase_014799_1, VkglTestCase_014799_2);

#define VkglTestCase_014800_1 "dEQP-GLES2.functional.uniform_api.value.assign"
#define VkglTestCase_014800_2 "ed.by_value.get_uniform.basic.bool_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014800, VkglTestCase_014800_1, VkglTestCase_014800_2);

#define VkglTestCase_014801_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_014801_2 "by_value.get_uniform.basic.bvec2_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014801, VkglTestCase_014801_1, VkglTestCase_014801_2);

#define VkglTestCase_014802_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_014802_2 "y_value.get_uniform.basic.bvec2_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014802, VkglTestCase_014802_1, VkglTestCase_014802_2);

#define VkglTestCase_014803_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_014803_2 ".by_value.get_uniform.basic.bvec2_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014803, VkglTestCase_014803_1, VkglTestCase_014803_2);

#define VkglTestCase_014804_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_014804_2 ".by_value.get_uniform.basic.bvec2_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014804, VkglTestCase_014804_1, VkglTestCase_014804_2);

#define VkglTestCase_014805_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_014805_2 "by_value.get_uniform.basic.bvec2_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014805, VkglTestCase_014805_1, VkglTestCase_014805_2);

#define VkglTestCase_014806_1 "dEQP-GLES2.functional.uniform_api.value.assigne"
#define VkglTestCase_014806_2 "d.by_value.get_uniform.basic.bvec2_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014806, VkglTestCase_014806_1, VkglTestCase_014806_2);

#define VkglTestCase_014807_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_014807_2 "by_value.get_uniform.basic.bvec3_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014807, VkglTestCase_014807_1, VkglTestCase_014807_2);

#define VkglTestCase_014808_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_014808_2 "y_value.get_uniform.basic.bvec3_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014808, VkglTestCase_014808_1, VkglTestCase_014808_2);

#define VkglTestCase_014809_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_014809_2 ".by_value.get_uniform.basic.bvec3_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014809, VkglTestCase_014809_1, VkglTestCase_014809_2);

#define VkglTestCase_014810_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_014810_2 ".by_value.get_uniform.basic.bvec3_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014810, VkglTestCase_014810_1, VkglTestCase_014810_2);

#define VkglTestCase_014811_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_014811_2 "by_value.get_uniform.basic.bvec3_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014811, VkglTestCase_014811_1, VkglTestCase_014811_2);

#define VkglTestCase_014812_1 "dEQP-GLES2.functional.uniform_api.value.assigne"
#define VkglTestCase_014812_2 "d.by_value.get_uniform.basic.bvec3_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014812, VkglTestCase_014812_1, VkglTestCase_014812_2);

#define VkglTestCase_014813_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_014813_2 "by_value.get_uniform.basic.bvec4_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014813, VkglTestCase_014813_1, VkglTestCase_014813_2);

#define VkglTestCase_014814_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_014814_2 "y_value.get_uniform.basic.bvec4_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014814, VkglTestCase_014814_1, VkglTestCase_014814_2);

#define VkglTestCase_014815_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_014815_2 ".by_value.get_uniform.basic.bvec4_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014815, VkglTestCase_014815_1, VkglTestCase_014815_2);

#define VkglTestCase_014816_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_014816_2 ".by_value.get_uniform.basic.bvec4_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014816, VkglTestCase_014816_1, VkglTestCase_014816_2);

#define VkglTestCase_014817_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_014817_2 "by_value.get_uniform.basic.bvec4_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014817, VkglTestCase_014817_1, VkglTestCase_014817_2);

#define VkglTestCase_014818_1 "dEQP-GLES2.functional.uniform_api.value.assigne"
#define VkglTestCase_014818_2 "d.by_value.get_uniform.basic.bvec4_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014818, VkglTestCase_014818_1, VkglTestCase_014818_2);

#define VkglTestCase_014819_1 "dEQP-GLES2.functional.uniform_api.value.assign"
#define VkglTestCase_014819_2 "ed.by_value.get_uniform.basic.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014819, VkglTestCase_014819_1, VkglTestCase_014819_2);

#define VkglTestCase_014820_1 "dEQP-GLES2.functional.uniform_api.value.assigne"
#define VkglTestCase_014820_2 "d.by_value.get_uniform.basic.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014820, VkglTestCase_014820_1, VkglTestCase_014820_2);

#define VkglTestCase_014821_1 "dEQP-GLES2.functional.uniform_api.value.assig"
#define VkglTestCase_014821_2 "ned.by_value.get_uniform.basic.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014821, VkglTestCase_014821_1, VkglTestCase_014821_2);

#define VkglTestCase_014822_1 "dEQP-GLES2.functional.uniform_api.value.assigne"
#define VkglTestCase_014822_2 "d.by_value.get_uniform.basic.samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014822, VkglTestCase_014822_1, VkglTestCase_014822_2);

#define VkglTestCase_014823_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_014823_2 ".by_value.get_uniform.basic.samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014823, VkglTestCase_014823_1, VkglTestCase_014823_2);

#define VkglTestCase_014824_1 "dEQP-GLES2.functional.uniform_api.value.assign"
#define VkglTestCase_014824_2 "ed.by_value.get_uniform.basic.samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014824, VkglTestCase_014824_1, VkglTestCase_014824_2);
