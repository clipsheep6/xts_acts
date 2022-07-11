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

#define VkglTestCase_005398_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005398_2 "_operator.mul_assign_result.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005398, VkglTestCase_005398_1, VkglTestCase_005398_2);

#define VkglTestCase_005399_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005399_2 "operator.mul_assign_result.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005399, VkglTestCase_005399_1, VkglTestCase_005399_2);

#define VkglTestCase_005400_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005400_2 "operator.mul_assign_result.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005400, VkglTestCase_005400_1, VkglTestCase_005400_2);

#define VkglTestCase_005401_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005401_2 "perator.mul_assign_result.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005401, VkglTestCase_005401_1, VkglTestCase_005401_2);

#define VkglTestCase_005402_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005402_2 "_operator.mul_assign_result.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005402, VkglTestCase_005402_1, VkglTestCase_005402_2);

#define VkglTestCase_005403_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005403_2 "operator.mul_assign_result.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005403, VkglTestCase_005403_1, VkglTestCase_005403_2);

#define VkglTestCase_005404_1 "dEQP-GLES2.functional.shaders.operator.binar"
#define VkglTestCase_005404_2 "y_operator.mul_assign_result.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005404, VkglTestCase_005404_1, VkglTestCase_005404_2);

#define VkglTestCase_005405_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005405_2 "_operator.mul_assign_result.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005405, VkglTestCase_005405_1, VkglTestCase_005405_2);

#define VkglTestCase_005406_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005406_2 "operator.mul_assign_result.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005406, VkglTestCase_005406_1, VkglTestCase_005406_2);

#define VkglTestCase_005407_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005407_2 "perator.mul_assign_result.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005407, VkglTestCase_005407_1, VkglTestCase_005407_2);

#define VkglTestCase_005408_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005408_2 "_operator.mul_assign_result.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005408, VkglTestCase_005408_1, VkglTestCase_005408_2);

#define VkglTestCase_005409_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005409_2 "operator.mul_assign_result.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005409, VkglTestCase_005409_1, VkglTestCase_005409_2);

#define VkglTestCase_005410_1 "dEQP-GLES2.functional.shaders.operator.binar"
#define VkglTestCase_005410_2 "y_operator.mul_assign_result.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005410, VkglTestCase_005410_1, VkglTestCase_005410_2);

#define VkglTestCase_005411_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005411_2 "_operator.mul_assign_result.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005411, VkglTestCase_005411_1, VkglTestCase_005411_2);

#define VkglTestCase_005412_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005412_2 "operator.mul_assign_result.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005412, VkglTestCase_005412_1, VkglTestCase_005412_2);

#define VkglTestCase_005413_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005413_2 "perator.mul_assign_result.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005413, VkglTestCase_005413_1, VkglTestCase_005413_2);

#define VkglTestCase_005414_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005414_2 "_operator.mul_assign_result.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005414, VkglTestCase_005414_1, VkglTestCase_005414_2);

#define VkglTestCase_005415_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005415_2 "operator.mul_assign_result.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005415, VkglTestCase_005415_1, VkglTestCase_005415_2);

#define VkglTestCase_005416_1 "dEQP-GLES2.functional.shaders.operator.binar"
#define VkglTestCase_005416_2 "y_operator.mul_assign_result.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005416, VkglTestCase_005416_1, VkglTestCase_005416_2);

#define VkglTestCase_005417_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005417_2 "_operator.mul_assign_result.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005417, VkglTestCase_005417_1, VkglTestCase_005417_2);

#define VkglTestCase_005418_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005418_2 "operator.mul_assign_result.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005418, VkglTestCase_005418_1, VkglTestCase_005418_2);

#define VkglTestCase_005419_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005419_2 "perator.mul_assign_result.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005419, VkglTestCase_005419_1, VkglTestCase_005419_2);

#define VkglTestCase_005420_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005420_2 "_operator.mul_assign_result.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005420, VkglTestCase_005420_1, VkglTestCase_005420_2);

#define VkglTestCase_005421_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005421_2 "operator.mul_assign_result.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005421, VkglTestCase_005421_1, VkglTestCase_005421_2);

#define VkglTestCase_005422_1 "dEQP-GLES2.functional.shaders.operator.binar"
#define VkglTestCase_005422_2 "y_operator.mul_assign_result.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005422, VkglTestCase_005422_1, VkglTestCase_005422_2);

#define VkglTestCase_005423_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005423_2 "_operator.mul_assign_result.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005423, VkglTestCase_005423_1, VkglTestCase_005423_2);

#define VkglTestCase_005424_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005424_2 "_operator.mul_assign_result.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005424, VkglTestCase_005424_1, VkglTestCase_005424_2);

#define VkglTestCase_005425_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005425_2 "operator.mul_assign_result.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005425, VkglTestCase_005425_1, VkglTestCase_005425_2);

#define VkglTestCase_005426_1 "dEQP-GLES2.functional.shaders.operator.binar"
#define VkglTestCase_005426_2 "y_operator.mul_assign_result.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005426, VkglTestCase_005426_1, VkglTestCase_005426_2);

#define VkglTestCase_005427_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005427_2 "_operator.mul_assign_result.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005427, VkglTestCase_005427_1, VkglTestCase_005427_2);

#define VkglTestCase_005428_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005428_2 "_operator.mul_assign_result.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005428, VkglTestCase_005428_1, VkglTestCase_005428_2);

#define VkglTestCase_005429_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005429_2 "operator.mul_assign_result.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005429, VkglTestCase_005429_1, VkglTestCase_005429_2);

#define VkglTestCase_005430_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005430_2 "operator.mul_assign_result.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005430, VkglTestCase_005430_1, VkglTestCase_005430_2);

#define VkglTestCase_005431_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005431_2 "perator.mul_assign_result.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005431, VkglTestCase_005431_1, VkglTestCase_005431_2);

#define VkglTestCase_005432_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005432_2 "_operator.mul_assign_result.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005432, VkglTestCase_005432_1, VkglTestCase_005432_2);

#define VkglTestCase_005433_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005433_2 "operator.mul_assign_result.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005433, VkglTestCase_005433_1, VkglTestCase_005433_2);

#define VkglTestCase_005434_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005434_2 "_operator.mul_assign_result.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005434, VkglTestCase_005434_1, VkglTestCase_005434_2);

#define VkglTestCase_005435_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005435_2 "operator.mul_assign_result.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005435, VkglTestCase_005435_1, VkglTestCase_005435_2);

#define VkglTestCase_005436_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005436_2 "operator.mul_assign_result.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005436, VkglTestCase_005436_1, VkglTestCase_005436_2);

#define VkglTestCase_005437_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005437_2 "perator.mul_assign_result.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005437, VkglTestCase_005437_1, VkglTestCase_005437_2);

#define VkglTestCase_005438_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005438_2 "_operator.mul_assign_result.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005438, VkglTestCase_005438_1, VkglTestCase_005438_2);

#define VkglTestCase_005439_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005439_2 "operator.mul_assign_result.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005439, VkglTestCase_005439_1, VkglTestCase_005439_2);

#define VkglTestCase_005440_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005440_2 "_operator.mul_assign_result.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005440, VkglTestCase_005440_1, VkglTestCase_005440_2);

#define VkglTestCase_005441_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005441_2 "operator.mul_assign_result.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005441, VkglTestCase_005441_1, VkglTestCase_005441_2);

#define VkglTestCase_005442_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005442_2 "operator.mul_assign_result.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005442, VkglTestCase_005442_1, VkglTestCase_005442_2);

#define VkglTestCase_005443_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005443_2 "perator.mul_assign_result.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005443, VkglTestCase_005443_1, VkglTestCase_005443_2);

#define VkglTestCase_005444_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005444_2 "_operator.mul_assign_result.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005444, VkglTestCase_005444_1, VkglTestCase_005444_2);

#define VkglTestCase_005445_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005445_2 "operator.mul_assign_result.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005445, VkglTestCase_005445_1, VkglTestCase_005445_2);

#define VkglTestCase_005446_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005446_2 "perator.mul_assign_result.lowp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005446, VkglTestCase_005446_1, VkglTestCase_005446_2);

#define VkglTestCase_005447_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005447_2 "erator.mul_assign_result.lowp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005447, VkglTestCase_005447_1, VkglTestCase_005447_2);

#define VkglTestCase_005448_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005448_2 "rator.mul_assign_result.mediump_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005448, VkglTestCase_005448_1, VkglTestCase_005448_2);

#define VkglTestCase_005449_1 "dEQP-GLES2.functional.shaders.operator.binary_oper"
#define VkglTestCase_005449_2 "ator.mul_assign_result.mediump_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005449, VkglTestCase_005449_1, VkglTestCase_005449_2);

#define VkglTestCase_005450_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005450_2 "erator.mul_assign_result.highp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005450, VkglTestCase_005450_1, VkglTestCase_005450_2);

#define VkglTestCase_005451_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005451_2 "rator.mul_assign_result.highp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005451, VkglTestCase_005451_1, VkglTestCase_005451_2);

#define VkglTestCase_005452_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005452_2 "perator.mul_assign_result.lowp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005452, VkglTestCase_005452_1, VkglTestCase_005452_2);

#define VkglTestCase_005453_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005453_2 "erator.mul_assign_result.lowp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005453, VkglTestCase_005453_1, VkglTestCase_005453_2);

#define VkglTestCase_005454_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005454_2 "rator.mul_assign_result.mediump_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005454, VkglTestCase_005454_1, VkglTestCase_005454_2);

#define VkglTestCase_005455_1 "dEQP-GLES2.functional.shaders.operator.binary_oper"
#define VkglTestCase_005455_2 "ator.mul_assign_result.mediump_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005455, VkglTestCase_005455_1, VkglTestCase_005455_2);

#define VkglTestCase_005456_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005456_2 "erator.mul_assign_result.highp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005456, VkglTestCase_005456_1, VkglTestCase_005456_2);

#define VkglTestCase_005457_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005457_2 "rator.mul_assign_result.highp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005457, VkglTestCase_005457_1, VkglTestCase_005457_2);

#define VkglTestCase_005458_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005458_2 "perator.mul_assign_result.lowp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005458, VkglTestCase_005458_1, VkglTestCase_005458_2);

#define VkglTestCase_005459_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005459_2 "erator.mul_assign_result.lowp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005459, VkglTestCase_005459_1, VkglTestCase_005459_2);

#define VkglTestCase_005460_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005460_2 "rator.mul_assign_result.mediump_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005460, VkglTestCase_005460_1, VkglTestCase_005460_2);

#define VkglTestCase_005461_1 "dEQP-GLES2.functional.shaders.operator.binary_oper"
#define VkglTestCase_005461_2 "ator.mul_assign_result.mediump_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005461, VkglTestCase_005461_1, VkglTestCase_005461_2);

#define VkglTestCase_005462_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005462_2 "erator.mul_assign_result.highp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005462, VkglTestCase_005462_1, VkglTestCase_005462_2);

#define VkglTestCase_005463_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005463_2 "rator.mul_assign_result.highp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005463, VkglTestCase_005463_1, VkglTestCase_005463_2);

#define VkglTestCase_005464_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005464_2 "perator.mul_assign_result.lowp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005464, VkglTestCase_005464_1, VkglTestCase_005464_2);

#define VkglTestCase_005465_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005465_2 "erator.mul_assign_result.lowp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005465, VkglTestCase_005465_1, VkglTestCase_005465_2);

#define VkglTestCase_005466_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005466_2 "erator.mul_assign_result.mediump_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005466, VkglTestCase_005466_1, VkglTestCase_005466_2);

#define VkglTestCase_005467_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005467_2 "rator.mul_assign_result.mediump_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005467, VkglTestCase_005467_1, VkglTestCase_005467_2);

#define VkglTestCase_005468_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005468_2 "perator.mul_assign_result.highp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005468, VkglTestCase_005468_1, VkglTestCase_005468_2);

#define VkglTestCase_005469_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005469_2 "erator.mul_assign_result.highp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005469, VkglTestCase_005469_1, VkglTestCase_005469_2);

#define VkglTestCase_005470_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005470_2 "perator.mul_assign_result.lowp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005470, VkglTestCase_005470_1, VkglTestCase_005470_2);

#define VkglTestCase_005471_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005471_2 "erator.mul_assign_result.lowp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005471, VkglTestCase_005471_1, VkglTestCase_005471_2);

#define VkglTestCase_005472_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005472_2 "erator.mul_assign_result.mediump_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005472, VkglTestCase_005472_1, VkglTestCase_005472_2);

#define VkglTestCase_005473_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005473_2 "rator.mul_assign_result.mediump_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005473, VkglTestCase_005473_1, VkglTestCase_005473_2);

#define VkglTestCase_005474_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005474_2 "perator.mul_assign_result.highp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005474, VkglTestCase_005474_1, VkglTestCase_005474_2);

#define VkglTestCase_005475_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005475_2 "erator.mul_assign_result.highp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005475, VkglTestCase_005475_1, VkglTestCase_005475_2);

#define VkglTestCase_005476_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005476_2 "perator.mul_assign_result.lowp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005476, VkglTestCase_005476_1, VkglTestCase_005476_2);

#define VkglTestCase_005477_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005477_2 "erator.mul_assign_result.lowp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005477, VkglTestCase_005477_1, VkglTestCase_005477_2);

#define VkglTestCase_005478_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005478_2 "erator.mul_assign_result.mediump_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005478, VkglTestCase_005478_1, VkglTestCase_005478_2);

#define VkglTestCase_005479_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005479_2 "rator.mul_assign_result.mediump_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005479, VkglTestCase_005479_1, VkglTestCase_005479_2);

#define VkglTestCase_005480_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005480_2 "perator.mul_assign_result.highp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005480, VkglTestCase_005480_1, VkglTestCase_005480_2);

#define VkglTestCase_005481_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005481_2 "erator.mul_assign_result.highp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005481, VkglTestCase_005481_1, VkglTestCase_005481_2);
