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

#define VkglTestCase_005230_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005230_2 "_operator.add_assign_result.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005230, VkglTestCase_005230_1, VkglTestCase_005230_2);

#define VkglTestCase_005231_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005231_2 "operator.add_assign_result.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005231, VkglTestCase_005231_1, VkglTestCase_005231_2);

#define VkglTestCase_005232_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005232_2 "operator.add_assign_result.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005232, VkglTestCase_005232_1, VkglTestCase_005232_2);

#define VkglTestCase_005233_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005233_2 "perator.add_assign_result.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005233, VkglTestCase_005233_1, VkglTestCase_005233_2);

#define VkglTestCase_005234_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005234_2 "_operator.add_assign_result.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005234, VkglTestCase_005234_1, VkglTestCase_005234_2);

#define VkglTestCase_005235_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005235_2 "operator.add_assign_result.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005235, VkglTestCase_005235_1, VkglTestCase_005235_2);

#define VkglTestCase_005236_1 "dEQP-GLES2.functional.shaders.operator.binar"
#define VkglTestCase_005236_2 "y_operator.add_assign_result.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005236, VkglTestCase_005236_1, VkglTestCase_005236_2);

#define VkglTestCase_005237_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005237_2 "_operator.add_assign_result.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005237, VkglTestCase_005237_1, VkglTestCase_005237_2);

#define VkglTestCase_005238_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005238_2 "operator.add_assign_result.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005238, VkglTestCase_005238_1, VkglTestCase_005238_2);

#define VkglTestCase_005239_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005239_2 "perator.add_assign_result.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005239, VkglTestCase_005239_1, VkglTestCase_005239_2);

#define VkglTestCase_005240_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005240_2 "_operator.add_assign_result.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005240, VkglTestCase_005240_1, VkglTestCase_005240_2);

#define VkglTestCase_005241_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005241_2 "operator.add_assign_result.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005241, VkglTestCase_005241_1, VkglTestCase_005241_2);

#define VkglTestCase_005242_1 "dEQP-GLES2.functional.shaders.operator.binar"
#define VkglTestCase_005242_2 "y_operator.add_assign_result.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005242, VkglTestCase_005242_1, VkglTestCase_005242_2);

#define VkglTestCase_005243_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005243_2 "_operator.add_assign_result.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005243, VkglTestCase_005243_1, VkglTestCase_005243_2);

#define VkglTestCase_005244_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005244_2 "operator.add_assign_result.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005244, VkglTestCase_005244_1, VkglTestCase_005244_2);

#define VkglTestCase_005245_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005245_2 "perator.add_assign_result.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005245, VkglTestCase_005245_1, VkglTestCase_005245_2);

#define VkglTestCase_005246_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005246_2 "_operator.add_assign_result.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005246, VkglTestCase_005246_1, VkglTestCase_005246_2);

#define VkglTestCase_005247_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005247_2 "operator.add_assign_result.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005247, VkglTestCase_005247_1, VkglTestCase_005247_2);

#define VkglTestCase_005248_1 "dEQP-GLES2.functional.shaders.operator.binar"
#define VkglTestCase_005248_2 "y_operator.add_assign_result.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005248, VkglTestCase_005248_1, VkglTestCase_005248_2);

#define VkglTestCase_005249_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005249_2 "_operator.add_assign_result.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005249, VkglTestCase_005249_1, VkglTestCase_005249_2);

#define VkglTestCase_005250_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005250_2 "operator.add_assign_result.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005250, VkglTestCase_005250_1, VkglTestCase_005250_2);

#define VkglTestCase_005251_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005251_2 "perator.add_assign_result.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005251, VkglTestCase_005251_1, VkglTestCase_005251_2);

#define VkglTestCase_005252_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005252_2 "_operator.add_assign_result.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005252, VkglTestCase_005252_1, VkglTestCase_005252_2);

#define VkglTestCase_005253_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005253_2 "operator.add_assign_result.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005253, VkglTestCase_005253_1, VkglTestCase_005253_2);

#define VkglTestCase_005254_1 "dEQP-GLES2.functional.shaders.operator.binar"
#define VkglTestCase_005254_2 "y_operator.add_assign_result.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005254, VkglTestCase_005254_1, VkglTestCase_005254_2);

#define VkglTestCase_005255_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005255_2 "_operator.add_assign_result.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005255, VkglTestCase_005255_1, VkglTestCase_005255_2);

#define VkglTestCase_005256_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005256_2 "_operator.add_assign_result.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005256, VkglTestCase_005256_1, VkglTestCase_005256_2);

#define VkglTestCase_005257_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005257_2 "operator.add_assign_result.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005257, VkglTestCase_005257_1, VkglTestCase_005257_2);

#define VkglTestCase_005258_1 "dEQP-GLES2.functional.shaders.operator.binar"
#define VkglTestCase_005258_2 "y_operator.add_assign_result.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005258, VkglTestCase_005258_1, VkglTestCase_005258_2);

#define VkglTestCase_005259_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005259_2 "_operator.add_assign_result.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005259, VkglTestCase_005259_1, VkglTestCase_005259_2);

#define VkglTestCase_005260_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005260_2 "_operator.add_assign_result.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005260, VkglTestCase_005260_1, VkglTestCase_005260_2);

#define VkglTestCase_005261_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005261_2 "operator.add_assign_result.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005261, VkglTestCase_005261_1, VkglTestCase_005261_2);

#define VkglTestCase_005262_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005262_2 "operator.add_assign_result.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005262, VkglTestCase_005262_1, VkglTestCase_005262_2);

#define VkglTestCase_005263_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005263_2 "perator.add_assign_result.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005263, VkglTestCase_005263_1, VkglTestCase_005263_2);

#define VkglTestCase_005264_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005264_2 "_operator.add_assign_result.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005264, VkglTestCase_005264_1, VkglTestCase_005264_2);

#define VkglTestCase_005265_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005265_2 "operator.add_assign_result.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005265, VkglTestCase_005265_1, VkglTestCase_005265_2);

#define VkglTestCase_005266_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005266_2 "_operator.add_assign_result.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005266, VkglTestCase_005266_1, VkglTestCase_005266_2);

#define VkglTestCase_005267_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005267_2 "operator.add_assign_result.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005267, VkglTestCase_005267_1, VkglTestCase_005267_2);

#define VkglTestCase_005268_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005268_2 "operator.add_assign_result.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005268, VkglTestCase_005268_1, VkglTestCase_005268_2);

#define VkglTestCase_005269_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005269_2 "perator.add_assign_result.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005269, VkglTestCase_005269_1, VkglTestCase_005269_2);

#define VkglTestCase_005270_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005270_2 "_operator.add_assign_result.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005270, VkglTestCase_005270_1, VkglTestCase_005270_2);

#define VkglTestCase_005271_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005271_2 "operator.add_assign_result.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005271, VkglTestCase_005271_1, VkglTestCase_005271_2);

#define VkglTestCase_005272_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005272_2 "_operator.add_assign_result.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005272, VkglTestCase_005272_1, VkglTestCase_005272_2);

#define VkglTestCase_005273_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005273_2 "operator.add_assign_result.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005273, VkglTestCase_005273_1, VkglTestCase_005273_2);

#define VkglTestCase_005274_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005274_2 "operator.add_assign_result.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005274, VkglTestCase_005274_1, VkglTestCase_005274_2);

#define VkglTestCase_005275_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005275_2 "perator.add_assign_result.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005275, VkglTestCase_005275_1, VkglTestCase_005275_2);

#define VkglTestCase_005276_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005276_2 "_operator.add_assign_result.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005276, VkglTestCase_005276_1, VkglTestCase_005276_2);

#define VkglTestCase_005277_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005277_2 "operator.add_assign_result.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005277, VkglTestCase_005277_1, VkglTestCase_005277_2);

#define VkglTestCase_005278_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005278_2 "perator.add_assign_result.lowp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005278, VkglTestCase_005278_1, VkglTestCase_005278_2);

#define VkglTestCase_005279_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005279_2 "erator.add_assign_result.lowp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005279, VkglTestCase_005279_1, VkglTestCase_005279_2);

#define VkglTestCase_005280_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005280_2 "rator.add_assign_result.mediump_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005280, VkglTestCase_005280_1, VkglTestCase_005280_2);

#define VkglTestCase_005281_1 "dEQP-GLES2.functional.shaders.operator.binary_oper"
#define VkglTestCase_005281_2 "ator.add_assign_result.mediump_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005281, VkglTestCase_005281_1, VkglTestCase_005281_2);

#define VkglTestCase_005282_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005282_2 "erator.add_assign_result.highp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005282, VkglTestCase_005282_1, VkglTestCase_005282_2);

#define VkglTestCase_005283_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005283_2 "rator.add_assign_result.highp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005283, VkglTestCase_005283_1, VkglTestCase_005283_2);

#define VkglTestCase_005284_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005284_2 "perator.add_assign_result.lowp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005284, VkglTestCase_005284_1, VkglTestCase_005284_2);

#define VkglTestCase_005285_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005285_2 "erator.add_assign_result.lowp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005285, VkglTestCase_005285_1, VkglTestCase_005285_2);

#define VkglTestCase_005286_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005286_2 "rator.add_assign_result.mediump_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005286, VkglTestCase_005286_1, VkglTestCase_005286_2);

#define VkglTestCase_005287_1 "dEQP-GLES2.functional.shaders.operator.binary_oper"
#define VkglTestCase_005287_2 "ator.add_assign_result.mediump_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005287, VkglTestCase_005287_1, VkglTestCase_005287_2);

#define VkglTestCase_005288_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005288_2 "erator.add_assign_result.highp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005288, VkglTestCase_005288_1, VkglTestCase_005288_2);

#define VkglTestCase_005289_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005289_2 "rator.add_assign_result.highp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005289, VkglTestCase_005289_1, VkglTestCase_005289_2);

#define VkglTestCase_005290_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005290_2 "perator.add_assign_result.lowp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005290, VkglTestCase_005290_1, VkglTestCase_005290_2);

#define VkglTestCase_005291_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005291_2 "erator.add_assign_result.lowp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005291, VkglTestCase_005291_1, VkglTestCase_005291_2);

#define VkglTestCase_005292_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005292_2 "rator.add_assign_result.mediump_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005292, VkglTestCase_005292_1, VkglTestCase_005292_2);

#define VkglTestCase_005293_1 "dEQP-GLES2.functional.shaders.operator.binary_oper"
#define VkglTestCase_005293_2 "ator.add_assign_result.mediump_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005293, VkglTestCase_005293_1, VkglTestCase_005293_2);

#define VkglTestCase_005294_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005294_2 "erator.add_assign_result.highp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005294, VkglTestCase_005294_1, VkglTestCase_005294_2);

#define VkglTestCase_005295_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005295_2 "rator.add_assign_result.highp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005295, VkglTestCase_005295_1, VkglTestCase_005295_2);

#define VkglTestCase_005296_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005296_2 "perator.add_assign_result.lowp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005296, VkglTestCase_005296_1, VkglTestCase_005296_2);

#define VkglTestCase_005297_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005297_2 "erator.add_assign_result.lowp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005297, VkglTestCase_005297_1, VkglTestCase_005297_2);

#define VkglTestCase_005298_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005298_2 "erator.add_assign_result.mediump_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005298, VkglTestCase_005298_1, VkglTestCase_005298_2);

#define VkglTestCase_005299_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005299_2 "rator.add_assign_result.mediump_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005299, VkglTestCase_005299_1, VkglTestCase_005299_2);

#define VkglTestCase_005300_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005300_2 "perator.add_assign_result.highp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005300, VkglTestCase_005300_1, VkglTestCase_005300_2);

#define VkglTestCase_005301_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005301_2 "erator.add_assign_result.highp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005301, VkglTestCase_005301_1, VkglTestCase_005301_2);

#define VkglTestCase_005302_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005302_2 "perator.add_assign_result.lowp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005302, VkglTestCase_005302_1, VkglTestCase_005302_2);

#define VkglTestCase_005303_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005303_2 "erator.add_assign_result.lowp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005303, VkglTestCase_005303_1, VkglTestCase_005303_2);

#define VkglTestCase_005304_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005304_2 "erator.add_assign_result.mediump_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005304, VkglTestCase_005304_1, VkglTestCase_005304_2);

#define VkglTestCase_005305_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005305_2 "rator.add_assign_result.mediump_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005305, VkglTestCase_005305_1, VkglTestCase_005305_2);

#define VkglTestCase_005306_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005306_2 "perator.add_assign_result.highp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005306, VkglTestCase_005306_1, VkglTestCase_005306_2);

#define VkglTestCase_005307_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005307_2 "erator.add_assign_result.highp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005307, VkglTestCase_005307_1, VkglTestCase_005307_2);

#define VkglTestCase_005308_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005308_2 "perator.add_assign_result.lowp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005308, VkglTestCase_005308_1, VkglTestCase_005308_2);

#define VkglTestCase_005309_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005309_2 "erator.add_assign_result.lowp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005309, VkglTestCase_005309_1, VkglTestCase_005309_2);

#define VkglTestCase_005310_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005310_2 "erator.add_assign_result.mediump_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005310, VkglTestCase_005310_1, VkglTestCase_005310_2);

#define VkglTestCase_005311_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005311_2 "rator.add_assign_result.mediump_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005311, VkglTestCase_005311_1, VkglTestCase_005311_2);

#define VkglTestCase_005312_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005312_2 "perator.add_assign_result.highp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005312, VkglTestCase_005312_1, VkglTestCase_005312_2);

#define VkglTestCase_005313_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005313_2 "erator.add_assign_result.highp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005313, VkglTestCase_005313_1, VkglTestCase_005313_2);
