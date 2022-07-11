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

#define VkglTestCase_005482_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005482_2 "_operator.div_assign_result.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005482, VkglTestCase_005482_1, VkglTestCase_005482_2);

#define VkglTestCase_005483_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005483_2 "operator.div_assign_result.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005483, VkglTestCase_005483_1, VkglTestCase_005483_2);

#define VkglTestCase_005484_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005484_2 "operator.div_assign_result.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005484, VkglTestCase_005484_1, VkglTestCase_005484_2);

#define VkglTestCase_005485_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005485_2 "perator.div_assign_result.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005485, VkglTestCase_005485_1, VkglTestCase_005485_2);

#define VkglTestCase_005486_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005486_2 "_operator.div_assign_result.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005486, VkglTestCase_005486_1, VkglTestCase_005486_2);

#define VkglTestCase_005487_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005487_2 "operator.div_assign_result.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005487, VkglTestCase_005487_1, VkglTestCase_005487_2);

#define VkglTestCase_005488_1 "dEQP-GLES2.functional.shaders.operator.binar"
#define VkglTestCase_005488_2 "y_operator.div_assign_result.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005488, VkglTestCase_005488_1, VkglTestCase_005488_2);

#define VkglTestCase_005489_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005489_2 "_operator.div_assign_result.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005489, VkglTestCase_005489_1, VkglTestCase_005489_2);

#define VkglTestCase_005490_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005490_2 "operator.div_assign_result.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005490, VkglTestCase_005490_1, VkglTestCase_005490_2);

#define VkglTestCase_005491_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005491_2 "perator.div_assign_result.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005491, VkglTestCase_005491_1, VkglTestCase_005491_2);

#define VkglTestCase_005492_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005492_2 "_operator.div_assign_result.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005492, VkglTestCase_005492_1, VkglTestCase_005492_2);

#define VkglTestCase_005493_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005493_2 "operator.div_assign_result.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005493, VkglTestCase_005493_1, VkglTestCase_005493_2);

#define VkglTestCase_005494_1 "dEQP-GLES2.functional.shaders.operator.binar"
#define VkglTestCase_005494_2 "y_operator.div_assign_result.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005494, VkglTestCase_005494_1, VkglTestCase_005494_2);

#define VkglTestCase_005495_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005495_2 "_operator.div_assign_result.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005495, VkglTestCase_005495_1, VkglTestCase_005495_2);

#define VkglTestCase_005496_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005496_2 "operator.div_assign_result.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005496, VkglTestCase_005496_1, VkglTestCase_005496_2);

#define VkglTestCase_005497_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005497_2 "perator.div_assign_result.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005497, VkglTestCase_005497_1, VkglTestCase_005497_2);

#define VkglTestCase_005498_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005498_2 "_operator.div_assign_result.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005498, VkglTestCase_005498_1, VkglTestCase_005498_2);

#define VkglTestCase_005499_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005499_2 "operator.div_assign_result.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005499, VkglTestCase_005499_1, VkglTestCase_005499_2);

#define VkglTestCase_005500_1 "dEQP-GLES2.functional.shaders.operator.binar"
#define VkglTestCase_005500_2 "y_operator.div_assign_result.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005500, VkglTestCase_005500_1, VkglTestCase_005500_2);

#define VkglTestCase_005501_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005501_2 "_operator.div_assign_result.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005501, VkglTestCase_005501_1, VkglTestCase_005501_2);

#define VkglTestCase_005502_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005502_2 "operator.div_assign_result.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005502, VkglTestCase_005502_1, VkglTestCase_005502_2);

#define VkglTestCase_005503_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005503_2 "perator.div_assign_result.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005503, VkglTestCase_005503_1, VkglTestCase_005503_2);

#define VkglTestCase_005504_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005504_2 "_operator.div_assign_result.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005504, VkglTestCase_005504_1, VkglTestCase_005504_2);

#define VkglTestCase_005505_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005505_2 "operator.div_assign_result.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005505, VkglTestCase_005505_1, VkglTestCase_005505_2);

#define VkglTestCase_005506_1 "dEQP-GLES2.functional.shaders.operator.binar"
#define VkglTestCase_005506_2 "y_operator.div_assign_result.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005506, VkglTestCase_005506_1, VkglTestCase_005506_2);

#define VkglTestCase_005507_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005507_2 "_operator.div_assign_result.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005507, VkglTestCase_005507_1, VkglTestCase_005507_2);

#define VkglTestCase_005508_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005508_2 "_operator.div_assign_result.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005508, VkglTestCase_005508_1, VkglTestCase_005508_2);

#define VkglTestCase_005509_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005509_2 "operator.div_assign_result.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005509, VkglTestCase_005509_1, VkglTestCase_005509_2);

#define VkglTestCase_005510_1 "dEQP-GLES2.functional.shaders.operator.binar"
#define VkglTestCase_005510_2 "y_operator.div_assign_result.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005510, VkglTestCase_005510_1, VkglTestCase_005510_2);

#define VkglTestCase_005511_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005511_2 "_operator.div_assign_result.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005511, VkglTestCase_005511_1, VkglTestCase_005511_2);

#define VkglTestCase_005512_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005512_2 "_operator.div_assign_result.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005512, VkglTestCase_005512_1, VkglTestCase_005512_2);

#define VkglTestCase_005513_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005513_2 "operator.div_assign_result.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005513, VkglTestCase_005513_1, VkglTestCase_005513_2);

#define VkglTestCase_005514_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005514_2 "operator.div_assign_result.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005514, VkglTestCase_005514_1, VkglTestCase_005514_2);

#define VkglTestCase_005515_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005515_2 "perator.div_assign_result.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005515, VkglTestCase_005515_1, VkglTestCase_005515_2);

#define VkglTestCase_005516_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005516_2 "_operator.div_assign_result.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005516, VkglTestCase_005516_1, VkglTestCase_005516_2);

#define VkglTestCase_005517_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005517_2 "operator.div_assign_result.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005517, VkglTestCase_005517_1, VkglTestCase_005517_2);

#define VkglTestCase_005518_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005518_2 "_operator.div_assign_result.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005518, VkglTestCase_005518_1, VkglTestCase_005518_2);

#define VkglTestCase_005519_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005519_2 "operator.div_assign_result.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005519, VkglTestCase_005519_1, VkglTestCase_005519_2);

#define VkglTestCase_005520_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005520_2 "operator.div_assign_result.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005520, VkglTestCase_005520_1, VkglTestCase_005520_2);

#define VkglTestCase_005521_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005521_2 "perator.div_assign_result.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005521, VkglTestCase_005521_1, VkglTestCase_005521_2);

#define VkglTestCase_005522_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005522_2 "_operator.div_assign_result.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005522, VkglTestCase_005522_1, VkglTestCase_005522_2);

#define VkglTestCase_005523_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005523_2 "operator.div_assign_result.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005523, VkglTestCase_005523_1, VkglTestCase_005523_2);

#define VkglTestCase_005524_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005524_2 "_operator.div_assign_result.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005524, VkglTestCase_005524_1, VkglTestCase_005524_2);

#define VkglTestCase_005525_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005525_2 "operator.div_assign_result.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005525, VkglTestCase_005525_1, VkglTestCase_005525_2);

#define VkglTestCase_005526_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005526_2 "operator.div_assign_result.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005526, VkglTestCase_005526_1, VkglTestCase_005526_2);

#define VkglTestCase_005527_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005527_2 "perator.div_assign_result.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005527, VkglTestCase_005527_1, VkglTestCase_005527_2);

#define VkglTestCase_005528_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005528_2 "_operator.div_assign_result.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005528, VkglTestCase_005528_1, VkglTestCase_005528_2);

#define VkglTestCase_005529_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005529_2 "operator.div_assign_result.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005529, VkglTestCase_005529_1, VkglTestCase_005529_2);

#define VkglTestCase_005530_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005530_2 "perator.div_assign_result.lowp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005530, VkglTestCase_005530_1, VkglTestCase_005530_2);

#define VkglTestCase_005531_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005531_2 "erator.div_assign_result.lowp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005531, VkglTestCase_005531_1, VkglTestCase_005531_2);

#define VkglTestCase_005532_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005532_2 "rator.div_assign_result.mediump_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005532, VkglTestCase_005532_1, VkglTestCase_005532_2);

#define VkglTestCase_005533_1 "dEQP-GLES2.functional.shaders.operator.binary_oper"
#define VkglTestCase_005533_2 "ator.div_assign_result.mediump_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005533, VkglTestCase_005533_1, VkglTestCase_005533_2);

#define VkglTestCase_005534_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005534_2 "erator.div_assign_result.highp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005534, VkglTestCase_005534_1, VkglTestCase_005534_2);

#define VkglTestCase_005535_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005535_2 "rator.div_assign_result.highp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005535, VkglTestCase_005535_1, VkglTestCase_005535_2);

#define VkglTestCase_005536_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005536_2 "perator.div_assign_result.lowp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005536, VkglTestCase_005536_1, VkglTestCase_005536_2);

#define VkglTestCase_005537_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005537_2 "erator.div_assign_result.lowp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005537, VkglTestCase_005537_1, VkglTestCase_005537_2);

#define VkglTestCase_005538_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005538_2 "rator.div_assign_result.mediump_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005538, VkglTestCase_005538_1, VkglTestCase_005538_2);

#define VkglTestCase_005539_1 "dEQP-GLES2.functional.shaders.operator.binary_oper"
#define VkglTestCase_005539_2 "ator.div_assign_result.mediump_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005539, VkglTestCase_005539_1, VkglTestCase_005539_2);

#define VkglTestCase_005540_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005540_2 "erator.div_assign_result.highp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005540, VkglTestCase_005540_1, VkglTestCase_005540_2);

#define VkglTestCase_005541_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005541_2 "rator.div_assign_result.highp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005541, VkglTestCase_005541_1, VkglTestCase_005541_2);

#define VkglTestCase_005542_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005542_2 "perator.div_assign_result.lowp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005542, VkglTestCase_005542_1, VkglTestCase_005542_2);

#define VkglTestCase_005543_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005543_2 "erator.div_assign_result.lowp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005543, VkglTestCase_005543_1, VkglTestCase_005543_2);

#define VkglTestCase_005544_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005544_2 "rator.div_assign_result.mediump_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005544, VkglTestCase_005544_1, VkglTestCase_005544_2);

#define VkglTestCase_005545_1 "dEQP-GLES2.functional.shaders.operator.binary_oper"
#define VkglTestCase_005545_2 "ator.div_assign_result.mediump_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005545, VkglTestCase_005545_1, VkglTestCase_005545_2);

#define VkglTestCase_005546_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005546_2 "erator.div_assign_result.highp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005546, VkglTestCase_005546_1, VkglTestCase_005546_2);

#define VkglTestCase_005547_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005547_2 "rator.div_assign_result.highp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005547, VkglTestCase_005547_1, VkglTestCase_005547_2);

#define VkglTestCase_005548_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005548_2 "perator.div_assign_result.lowp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005548, VkglTestCase_005548_1, VkglTestCase_005548_2);

#define VkglTestCase_005549_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005549_2 "erator.div_assign_result.lowp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005549, VkglTestCase_005549_1, VkglTestCase_005549_2);

#define VkglTestCase_005550_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005550_2 "erator.div_assign_result.mediump_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005550, VkglTestCase_005550_1, VkglTestCase_005550_2);

#define VkglTestCase_005551_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005551_2 "rator.div_assign_result.mediump_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005551, VkglTestCase_005551_1, VkglTestCase_005551_2);

#define VkglTestCase_005552_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005552_2 "perator.div_assign_result.highp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005552, VkglTestCase_005552_1, VkglTestCase_005552_2);

#define VkglTestCase_005553_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005553_2 "erator.div_assign_result.highp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005553, VkglTestCase_005553_1, VkglTestCase_005553_2);

#define VkglTestCase_005554_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005554_2 "perator.div_assign_result.lowp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005554, VkglTestCase_005554_1, VkglTestCase_005554_2);

#define VkglTestCase_005555_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005555_2 "erator.div_assign_result.lowp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005555, VkglTestCase_005555_1, VkglTestCase_005555_2);

#define VkglTestCase_005556_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005556_2 "erator.div_assign_result.mediump_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005556, VkglTestCase_005556_1, VkglTestCase_005556_2);

#define VkglTestCase_005557_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005557_2 "rator.div_assign_result.mediump_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005557, VkglTestCase_005557_1, VkglTestCase_005557_2);

#define VkglTestCase_005558_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005558_2 "perator.div_assign_result.highp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005558, VkglTestCase_005558_1, VkglTestCase_005558_2);

#define VkglTestCase_005559_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005559_2 "erator.div_assign_result.highp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005559, VkglTestCase_005559_1, VkglTestCase_005559_2);

#define VkglTestCase_005560_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005560_2 "perator.div_assign_result.lowp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005560, VkglTestCase_005560_1, VkglTestCase_005560_2);

#define VkglTestCase_005561_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005561_2 "erator.div_assign_result.lowp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005561, VkglTestCase_005561_1, VkglTestCase_005561_2);

#define VkglTestCase_005562_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005562_2 "erator.div_assign_result.mediump_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005562, VkglTestCase_005562_1, VkglTestCase_005562_2);

#define VkglTestCase_005563_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005563_2 "rator.div_assign_result.mediump_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005563, VkglTestCase_005563_1, VkglTestCase_005563_2);

#define VkglTestCase_005564_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005564_2 "perator.div_assign_result.highp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005564, VkglTestCase_005564_1, VkglTestCase_005564_2);

#define VkglTestCase_005565_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005565_2 "erator.div_assign_result.highp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005565, VkglTestCase_005565_1, VkglTestCase_005565_2);
