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
#include "../ActsDeqpgles20006TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_005146_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005146_2 "_operator.div_assign_effect.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005146, VkglTestCase_005146_1, VkglTestCase_005146_2);

#define VkglTestCase_005147_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005147_2 "operator.div_assign_effect.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005147, VkglTestCase_005147_1, VkglTestCase_005147_2);

#define VkglTestCase_005148_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005148_2 "operator.div_assign_effect.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005148, VkglTestCase_005148_1, VkglTestCase_005148_2);

#define VkglTestCase_005149_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005149_2 "perator.div_assign_effect.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005149, VkglTestCase_005149_1, VkglTestCase_005149_2);

#define VkglTestCase_005150_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005150_2 "_operator.div_assign_effect.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005150, VkglTestCase_005150_1, VkglTestCase_005150_2);

#define VkglTestCase_005151_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005151_2 "operator.div_assign_effect.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005151, VkglTestCase_005151_1, VkglTestCase_005151_2);

#define VkglTestCase_005152_1 "dEQP-GLES2.functional.shaders.operator.binar"
#define VkglTestCase_005152_2 "y_operator.div_assign_effect.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005152, VkglTestCase_005152_1, VkglTestCase_005152_2);

#define VkglTestCase_005153_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005153_2 "_operator.div_assign_effect.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005153, VkglTestCase_005153_1, VkglTestCase_005153_2);

#define VkglTestCase_005154_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005154_2 "operator.div_assign_effect.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005154, VkglTestCase_005154_1, VkglTestCase_005154_2);

#define VkglTestCase_005155_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005155_2 "perator.div_assign_effect.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005155, VkglTestCase_005155_1, VkglTestCase_005155_2);

#define VkglTestCase_005156_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005156_2 "_operator.div_assign_effect.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005156, VkglTestCase_005156_1, VkglTestCase_005156_2);

#define VkglTestCase_005157_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005157_2 "operator.div_assign_effect.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005157, VkglTestCase_005157_1, VkglTestCase_005157_2);

#define VkglTestCase_005158_1 "dEQP-GLES2.functional.shaders.operator.binar"
#define VkglTestCase_005158_2 "y_operator.div_assign_effect.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005158, VkglTestCase_005158_1, VkglTestCase_005158_2);

#define VkglTestCase_005159_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005159_2 "_operator.div_assign_effect.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005159, VkglTestCase_005159_1, VkglTestCase_005159_2);

#define VkglTestCase_005160_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005160_2 "operator.div_assign_effect.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005160, VkglTestCase_005160_1, VkglTestCase_005160_2);

#define VkglTestCase_005161_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005161_2 "perator.div_assign_effect.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005161, VkglTestCase_005161_1, VkglTestCase_005161_2);

#define VkglTestCase_005162_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005162_2 "_operator.div_assign_effect.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005162, VkglTestCase_005162_1, VkglTestCase_005162_2);

#define VkglTestCase_005163_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005163_2 "operator.div_assign_effect.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005163, VkglTestCase_005163_1, VkglTestCase_005163_2);

#define VkglTestCase_005164_1 "dEQP-GLES2.functional.shaders.operator.binar"
#define VkglTestCase_005164_2 "y_operator.div_assign_effect.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005164, VkglTestCase_005164_1, VkglTestCase_005164_2);

#define VkglTestCase_005165_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005165_2 "_operator.div_assign_effect.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005165, VkglTestCase_005165_1, VkglTestCase_005165_2);

#define VkglTestCase_005166_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005166_2 "operator.div_assign_effect.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005166, VkglTestCase_005166_1, VkglTestCase_005166_2);

#define VkglTestCase_005167_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005167_2 "perator.div_assign_effect.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005167, VkglTestCase_005167_1, VkglTestCase_005167_2);

#define VkglTestCase_005168_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005168_2 "_operator.div_assign_effect.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005168, VkglTestCase_005168_1, VkglTestCase_005168_2);

#define VkglTestCase_005169_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005169_2 "operator.div_assign_effect.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005169, VkglTestCase_005169_1, VkglTestCase_005169_2);

#define VkglTestCase_005170_1 "dEQP-GLES2.functional.shaders.operator.binar"
#define VkglTestCase_005170_2 "y_operator.div_assign_effect.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005170, VkglTestCase_005170_1, VkglTestCase_005170_2);

#define VkglTestCase_005171_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005171_2 "_operator.div_assign_effect.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005171, VkglTestCase_005171_1, VkglTestCase_005171_2);

#define VkglTestCase_005172_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005172_2 "_operator.div_assign_effect.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005172, VkglTestCase_005172_1, VkglTestCase_005172_2);

#define VkglTestCase_005173_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005173_2 "operator.div_assign_effect.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005173, VkglTestCase_005173_1, VkglTestCase_005173_2);

#define VkglTestCase_005174_1 "dEQP-GLES2.functional.shaders.operator.binar"
#define VkglTestCase_005174_2 "y_operator.div_assign_effect.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005174, VkglTestCase_005174_1, VkglTestCase_005174_2);

#define VkglTestCase_005175_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005175_2 "_operator.div_assign_effect.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005175, VkglTestCase_005175_1, VkglTestCase_005175_2);

#define VkglTestCase_005176_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005176_2 "_operator.div_assign_effect.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005176, VkglTestCase_005176_1, VkglTestCase_005176_2);

#define VkglTestCase_005177_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005177_2 "operator.div_assign_effect.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005177, VkglTestCase_005177_1, VkglTestCase_005177_2);

#define VkglTestCase_005178_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005178_2 "operator.div_assign_effect.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005178, VkglTestCase_005178_1, VkglTestCase_005178_2);

#define VkglTestCase_005179_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005179_2 "perator.div_assign_effect.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005179, VkglTestCase_005179_1, VkglTestCase_005179_2);

#define VkglTestCase_005180_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005180_2 "_operator.div_assign_effect.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005180, VkglTestCase_005180_1, VkglTestCase_005180_2);

#define VkglTestCase_005181_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005181_2 "operator.div_assign_effect.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005181, VkglTestCase_005181_1, VkglTestCase_005181_2);

#define VkglTestCase_005182_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005182_2 "_operator.div_assign_effect.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005182, VkglTestCase_005182_1, VkglTestCase_005182_2);

#define VkglTestCase_005183_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005183_2 "operator.div_assign_effect.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005183, VkglTestCase_005183_1, VkglTestCase_005183_2);

#define VkglTestCase_005184_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005184_2 "operator.div_assign_effect.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005184, VkglTestCase_005184_1, VkglTestCase_005184_2);

#define VkglTestCase_005185_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005185_2 "perator.div_assign_effect.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005185, VkglTestCase_005185_1, VkglTestCase_005185_2);

#define VkglTestCase_005186_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005186_2 "_operator.div_assign_effect.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005186, VkglTestCase_005186_1, VkglTestCase_005186_2);

#define VkglTestCase_005187_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005187_2 "operator.div_assign_effect.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005187, VkglTestCase_005187_1, VkglTestCase_005187_2);

#define VkglTestCase_005188_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005188_2 "_operator.div_assign_effect.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005188, VkglTestCase_005188_1, VkglTestCase_005188_2);

#define VkglTestCase_005189_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005189_2 "operator.div_assign_effect.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005189, VkglTestCase_005189_1, VkglTestCase_005189_2);

#define VkglTestCase_005190_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005190_2 "operator.div_assign_effect.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005190, VkglTestCase_005190_1, VkglTestCase_005190_2);

#define VkglTestCase_005191_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005191_2 "perator.div_assign_effect.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005191, VkglTestCase_005191_1, VkglTestCase_005191_2);

#define VkglTestCase_005192_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005192_2 "_operator.div_assign_effect.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005192, VkglTestCase_005192_1, VkglTestCase_005192_2);

#define VkglTestCase_005193_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005193_2 "operator.div_assign_effect.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005193, VkglTestCase_005193_1, VkglTestCase_005193_2);

#define VkglTestCase_005194_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005194_2 "perator.div_assign_effect.lowp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005194, VkglTestCase_005194_1, VkglTestCase_005194_2);

#define VkglTestCase_005195_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005195_2 "erator.div_assign_effect.lowp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005195, VkglTestCase_005195_1, VkglTestCase_005195_2);

#define VkglTestCase_005196_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005196_2 "rator.div_assign_effect.mediump_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005196, VkglTestCase_005196_1, VkglTestCase_005196_2);

#define VkglTestCase_005197_1 "dEQP-GLES2.functional.shaders.operator.binary_oper"
#define VkglTestCase_005197_2 "ator.div_assign_effect.mediump_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005197, VkglTestCase_005197_1, VkglTestCase_005197_2);

#define VkglTestCase_005198_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005198_2 "erator.div_assign_effect.highp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005198, VkglTestCase_005198_1, VkglTestCase_005198_2);

#define VkglTestCase_005199_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005199_2 "rator.div_assign_effect.highp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005199, VkglTestCase_005199_1, VkglTestCase_005199_2);

#define VkglTestCase_005200_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005200_2 "perator.div_assign_effect.lowp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005200, VkglTestCase_005200_1, VkglTestCase_005200_2);

#define VkglTestCase_005201_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005201_2 "erator.div_assign_effect.lowp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005201, VkglTestCase_005201_1, VkglTestCase_005201_2);

#define VkglTestCase_005202_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005202_2 "rator.div_assign_effect.mediump_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005202, VkglTestCase_005202_1, VkglTestCase_005202_2);

#define VkglTestCase_005203_1 "dEQP-GLES2.functional.shaders.operator.binary_oper"
#define VkglTestCase_005203_2 "ator.div_assign_effect.mediump_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005203, VkglTestCase_005203_1, VkglTestCase_005203_2);

#define VkglTestCase_005204_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005204_2 "erator.div_assign_effect.highp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005204, VkglTestCase_005204_1, VkglTestCase_005204_2);

#define VkglTestCase_005205_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005205_2 "rator.div_assign_effect.highp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005205, VkglTestCase_005205_1, VkglTestCase_005205_2);

#define VkglTestCase_005206_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005206_2 "perator.div_assign_effect.lowp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005206, VkglTestCase_005206_1, VkglTestCase_005206_2);

#define VkglTestCase_005207_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005207_2 "erator.div_assign_effect.lowp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005207, VkglTestCase_005207_1, VkglTestCase_005207_2);

#define VkglTestCase_005208_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005208_2 "rator.div_assign_effect.mediump_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005208, VkglTestCase_005208_1, VkglTestCase_005208_2);

#define VkglTestCase_005209_1 "dEQP-GLES2.functional.shaders.operator.binary_oper"
#define VkglTestCase_005209_2 "ator.div_assign_effect.mediump_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005209, VkglTestCase_005209_1, VkglTestCase_005209_2);

#define VkglTestCase_005210_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005210_2 "erator.div_assign_effect.highp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005210, VkglTestCase_005210_1, VkglTestCase_005210_2);

#define VkglTestCase_005211_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005211_2 "rator.div_assign_effect.highp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005211, VkglTestCase_005211_1, VkglTestCase_005211_2);

#define VkglTestCase_005212_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005212_2 "perator.div_assign_effect.lowp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005212, VkglTestCase_005212_1, VkglTestCase_005212_2);

#define VkglTestCase_005213_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005213_2 "erator.div_assign_effect.lowp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005213, VkglTestCase_005213_1, VkglTestCase_005213_2);

#define VkglTestCase_005214_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005214_2 "erator.div_assign_effect.mediump_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005214, VkglTestCase_005214_1, VkglTestCase_005214_2);

#define VkglTestCase_005215_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005215_2 "rator.div_assign_effect.mediump_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005215, VkglTestCase_005215_1, VkglTestCase_005215_2);

#define VkglTestCase_005216_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005216_2 "perator.div_assign_effect.highp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005216, VkglTestCase_005216_1, VkglTestCase_005216_2);

#define VkglTestCase_005217_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005217_2 "erator.div_assign_effect.highp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005217, VkglTestCase_005217_1, VkglTestCase_005217_2);

#define VkglTestCase_005218_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005218_2 "perator.div_assign_effect.lowp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005218, VkglTestCase_005218_1, VkglTestCase_005218_2);

#define VkglTestCase_005219_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005219_2 "erator.div_assign_effect.lowp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005219, VkglTestCase_005219_1, VkglTestCase_005219_2);

#define VkglTestCase_005220_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005220_2 "erator.div_assign_effect.mediump_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005220, VkglTestCase_005220_1, VkglTestCase_005220_2);

#define VkglTestCase_005221_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005221_2 "rator.div_assign_effect.mediump_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005221, VkglTestCase_005221_1, VkglTestCase_005221_2);

#define VkglTestCase_005222_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005222_2 "perator.div_assign_effect.highp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005222, VkglTestCase_005222_1, VkglTestCase_005222_2);

#define VkglTestCase_005223_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005223_2 "erator.div_assign_effect.highp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005223, VkglTestCase_005223_1, VkglTestCase_005223_2);

#define VkglTestCase_005224_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005224_2 "perator.div_assign_effect.lowp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005224, VkglTestCase_005224_1, VkglTestCase_005224_2);

#define VkglTestCase_005225_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005225_2 "erator.div_assign_effect.lowp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005225, VkglTestCase_005225_1, VkglTestCase_005225_2);

#define VkglTestCase_005226_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005226_2 "erator.div_assign_effect.mediump_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005226, VkglTestCase_005226_1, VkglTestCase_005226_2);

#define VkglTestCase_005227_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005227_2 "rator.div_assign_effect.mediump_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005227, VkglTestCase_005227_1, VkglTestCase_005227_2);

#define VkglTestCase_005228_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005228_2 "perator.div_assign_effect.highp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005228, VkglTestCase_005228_1, VkglTestCase_005228_2);

#define VkglTestCase_005229_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005229_2 "erator.div_assign_effect.highp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005229, VkglTestCase_005229_1, VkglTestCase_005229_2);
