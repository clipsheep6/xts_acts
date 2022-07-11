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
#include "../ActsDeqpgles30011TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_010400_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010400_2 "ator.left_shift_assign_effect.lowp_int_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010400, VkglTestCase_010400_1, VkglTestCase_010400_2);

#define VkglTestCase_010401_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010401_2 "tor.left_shift_assign_effect.lowp_int_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010401, VkglTestCase_010401_1, VkglTestCase_010401_2);

#define VkglTestCase_010402_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010402_2 "tor.left_shift_assign_effect.mediump_int_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010402, VkglTestCase_010402_1, VkglTestCase_010402_2);

#define VkglTestCase_010403_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010403_2 "or.left_shift_assign_effect.mediump_int_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010403, VkglTestCase_010403_1, VkglTestCase_010403_2);

#define VkglTestCase_010404_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010404_2 "tor.left_shift_assign_effect.lowp_ivec2_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010404, VkglTestCase_010404_1, VkglTestCase_010404_2);

#define VkglTestCase_010405_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010405_2 "or.left_shift_assign_effect.lowp_ivec2_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010405, VkglTestCase_010405_1, VkglTestCase_010405_2);

#define VkglTestCase_010406_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_010406_2 "r.left_shift_assign_effect.mediump_ivec2_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010406, VkglTestCase_010406_1, VkglTestCase_010406_2);

#define VkglTestCase_010407_1 "dEQP-GLES3.functional.shaders.operator.binary_operator"
#define VkglTestCase_010407_2 ".left_shift_assign_effect.mediump_ivec2_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010407, VkglTestCase_010407_1, VkglTestCase_010407_2);

#define VkglTestCase_010408_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010408_2 "tor.left_shift_assign_effect.lowp_ivec3_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010408, VkglTestCase_010408_1, VkglTestCase_010408_2);

#define VkglTestCase_010409_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010409_2 "or.left_shift_assign_effect.lowp_ivec3_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010409, VkglTestCase_010409_1, VkglTestCase_010409_2);

#define VkglTestCase_010410_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_010410_2 "r.left_shift_assign_effect.mediump_ivec3_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010410, VkglTestCase_010410_1, VkglTestCase_010410_2);

#define VkglTestCase_010411_1 "dEQP-GLES3.functional.shaders.operator.binary_operator"
#define VkglTestCase_010411_2 ".left_shift_assign_effect.mediump_ivec3_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010411, VkglTestCase_010411_1, VkglTestCase_010411_2);

#define VkglTestCase_010412_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010412_2 "tor.left_shift_assign_effect.lowp_ivec4_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010412, VkglTestCase_010412_1, VkglTestCase_010412_2);

#define VkglTestCase_010413_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010413_2 "or.left_shift_assign_effect.lowp_ivec4_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010413, VkglTestCase_010413_1, VkglTestCase_010413_2);

#define VkglTestCase_010414_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_010414_2 "r.left_shift_assign_effect.mediump_ivec4_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010414, VkglTestCase_010414_1, VkglTestCase_010414_2);

#define VkglTestCase_010415_1 "dEQP-GLES3.functional.shaders.operator.binary_operator"
#define VkglTestCase_010415_2 ".left_shift_assign_effect.mediump_ivec4_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010415, VkglTestCase_010415_1, VkglTestCase_010415_2);

#define VkglTestCase_010416_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010416_2 "ator.left_shift_assign_effect.highp_int_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010416, VkglTestCase_010416_1, VkglTestCase_010416_2);

#define VkglTestCase_010417_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010417_2 "tor.left_shift_assign_effect.highp_int_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010417, VkglTestCase_010417_1, VkglTestCase_010417_2);

#define VkglTestCase_010418_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010418_2 "or.left_shift_assign_effect.highp_ivec2_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010418, VkglTestCase_010418_1, VkglTestCase_010418_2);

#define VkglTestCase_010419_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_010419_2 "r.left_shift_assign_effect.highp_ivec2_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010419, VkglTestCase_010419_1, VkglTestCase_010419_2);

#define VkglTestCase_010420_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010420_2 "or.left_shift_assign_effect.highp_ivec3_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010420, VkglTestCase_010420_1, VkglTestCase_010420_2);

#define VkglTestCase_010421_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_010421_2 "r.left_shift_assign_effect.highp_ivec3_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010421, VkglTestCase_010421_1, VkglTestCase_010421_2);

#define VkglTestCase_010422_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010422_2 "or.left_shift_assign_effect.highp_ivec4_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010422, VkglTestCase_010422_1, VkglTestCase_010422_2);

#define VkglTestCase_010423_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_010423_2 "r.left_shift_assign_effect.highp_ivec4_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010423, VkglTestCase_010423_1, VkglTestCase_010423_2);

#define VkglTestCase_010424_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010424_2 "erator.left_shift_assign_effect.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010424, VkglTestCase_010424_1, VkglTestCase_010424_2);

#define VkglTestCase_010425_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010425_2 "rator.left_shift_assign_effect.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010425, VkglTestCase_010425_1, VkglTestCase_010425_2);

#define VkglTestCase_010426_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010426_2 "rator.left_shift_assign_effect.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010426, VkglTestCase_010426_1, VkglTestCase_010426_2);

#define VkglTestCase_010427_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010427_2 "ator.left_shift_assign_effect.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010427, VkglTestCase_010427_1, VkglTestCase_010427_2);

#define VkglTestCase_010428_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010428_2 "erator.left_shift_assign_effect.lowp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010428, VkglTestCase_010428_1, VkglTestCase_010428_2);

#define VkglTestCase_010429_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010429_2 "rator.left_shift_assign_effect.lowp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010429, VkglTestCase_010429_1, VkglTestCase_010429_2);

#define VkglTestCase_010430_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010430_2 "ator.left_shift_assign_effect.mediump_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010430, VkglTestCase_010430_1, VkglTestCase_010430_2);

#define VkglTestCase_010431_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010431_2 "tor.left_shift_assign_effect.mediump_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010431, VkglTestCase_010431_1, VkglTestCase_010431_2);

#define VkglTestCase_010432_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010432_2 "erator.left_shift_assign_effect.lowp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010432, VkglTestCase_010432_1, VkglTestCase_010432_2);

#define VkglTestCase_010433_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010433_2 "rator.left_shift_assign_effect.lowp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010433, VkglTestCase_010433_1, VkglTestCase_010433_2);

#define VkglTestCase_010434_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010434_2 "ator.left_shift_assign_effect.mediump_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010434, VkglTestCase_010434_1, VkglTestCase_010434_2);

#define VkglTestCase_010435_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010435_2 "tor.left_shift_assign_effect.mediump_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010435, VkglTestCase_010435_1, VkglTestCase_010435_2);

#define VkglTestCase_010436_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010436_2 "erator.left_shift_assign_effect.lowp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010436, VkglTestCase_010436_1, VkglTestCase_010436_2);

#define VkglTestCase_010437_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010437_2 "rator.left_shift_assign_effect.lowp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010437, VkglTestCase_010437_1, VkglTestCase_010437_2);

#define VkglTestCase_010438_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010438_2 "ator.left_shift_assign_effect.mediump_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010438, VkglTestCase_010438_1, VkglTestCase_010438_2);

#define VkglTestCase_010439_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010439_2 "tor.left_shift_assign_effect.mediump_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010439, VkglTestCase_010439_1, VkglTestCase_010439_2);

#define VkglTestCase_010440_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010440_2 "erator.left_shift_assign_effect.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010440, VkglTestCase_010440_1, VkglTestCase_010440_2);

#define VkglTestCase_010441_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010441_2 "rator.left_shift_assign_effect.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010441, VkglTestCase_010441_1, VkglTestCase_010441_2);

#define VkglTestCase_010442_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010442_2 "rator.left_shift_assign_effect.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010442, VkglTestCase_010442_1, VkglTestCase_010442_2);

#define VkglTestCase_010443_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010443_2 "ator.left_shift_assign_effect.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010443, VkglTestCase_010443_1, VkglTestCase_010443_2);

#define VkglTestCase_010444_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010444_2 "rator.left_shift_assign_effect.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010444, VkglTestCase_010444_1, VkglTestCase_010444_2);

#define VkglTestCase_010445_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010445_2 "ator.left_shift_assign_effect.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010445, VkglTestCase_010445_1, VkglTestCase_010445_2);

#define VkglTestCase_010446_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010446_2 "rator.left_shift_assign_effect.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010446, VkglTestCase_010446_1, VkglTestCase_010446_2);

#define VkglTestCase_010447_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010447_2 "ator.left_shift_assign_effect.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010447, VkglTestCase_010447_1, VkglTestCase_010447_2);

#define VkglTestCase_010448_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010448_2 "tor.left_shift_assign_effect.lowp_ivec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010448, VkglTestCase_010448_1, VkglTestCase_010448_2);

#define VkglTestCase_010449_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010449_2 "or.left_shift_assign_effect.lowp_ivec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010449, VkglTestCase_010449_1, VkglTestCase_010449_2);

#define VkglTestCase_010450_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010450_2 "or.left_shift_assign_effect.mediump_ivec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010450, VkglTestCase_010450_1, VkglTestCase_010450_2);

#define VkglTestCase_010451_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_010451_2 "r.left_shift_assign_effect.mediump_ivec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010451, VkglTestCase_010451_1, VkglTestCase_010451_2);

#define VkglTestCase_010452_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010452_2 "tor.left_shift_assign_effect.lowp_ivec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010452, VkglTestCase_010452_1, VkglTestCase_010452_2);

#define VkglTestCase_010453_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010453_2 "or.left_shift_assign_effect.lowp_ivec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010453, VkglTestCase_010453_1, VkglTestCase_010453_2);

#define VkglTestCase_010454_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010454_2 "or.left_shift_assign_effect.mediump_ivec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010454, VkglTestCase_010454_1, VkglTestCase_010454_2);

#define VkglTestCase_010455_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_010455_2 "r.left_shift_assign_effect.mediump_ivec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010455, VkglTestCase_010455_1, VkglTestCase_010455_2);

#define VkglTestCase_010456_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010456_2 "tor.left_shift_assign_effect.lowp_ivec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010456, VkglTestCase_010456_1, VkglTestCase_010456_2);

#define VkglTestCase_010457_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010457_2 "or.left_shift_assign_effect.lowp_ivec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010457, VkglTestCase_010457_1, VkglTestCase_010457_2);

#define VkglTestCase_010458_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010458_2 "or.left_shift_assign_effect.mediump_ivec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010458, VkglTestCase_010458_1, VkglTestCase_010458_2);

#define VkglTestCase_010459_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_010459_2 "r.left_shift_assign_effect.mediump_ivec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010459, VkglTestCase_010459_1, VkglTestCase_010459_2);

#define VkglTestCase_010460_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010460_2 "tor.left_shift_assign_effect.highp_ivec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010460, VkglTestCase_010460_1, VkglTestCase_010460_2);

#define VkglTestCase_010461_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010461_2 "or.left_shift_assign_effect.highp_ivec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010461, VkglTestCase_010461_1, VkglTestCase_010461_2);

#define VkglTestCase_010462_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010462_2 "tor.left_shift_assign_effect.highp_ivec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010462, VkglTestCase_010462_1, VkglTestCase_010462_2);

#define VkglTestCase_010463_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010463_2 "or.left_shift_assign_effect.highp_ivec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010463, VkglTestCase_010463_1, VkglTestCase_010463_2);

#define VkglTestCase_010464_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010464_2 "tor.left_shift_assign_effect.highp_ivec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010464, VkglTestCase_010464_1, VkglTestCase_010464_2);

#define VkglTestCase_010465_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010465_2 "or.left_shift_assign_effect.highp_ivec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010465, VkglTestCase_010465_1, VkglTestCase_010465_2);

#define VkglTestCase_010466_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010466_2 "tor.left_shift_assign_effect.lowp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010466, VkglTestCase_010466_1, VkglTestCase_010466_2);

#define VkglTestCase_010467_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010467_2 "or.left_shift_assign_effect.lowp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010467, VkglTestCase_010467_1, VkglTestCase_010467_2);

#define VkglTestCase_010468_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010468_2 "or.left_shift_assign_effect.mediump_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010468, VkglTestCase_010468_1, VkglTestCase_010468_2);

#define VkglTestCase_010469_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_010469_2 "r.left_shift_assign_effect.mediump_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010469, VkglTestCase_010469_1, VkglTestCase_010469_2);

#define VkglTestCase_010470_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010470_2 "tor.left_shift_assign_effect.lowp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010470, VkglTestCase_010470_1, VkglTestCase_010470_2);

#define VkglTestCase_010471_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010471_2 "or.left_shift_assign_effect.lowp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010471, VkglTestCase_010471_1, VkglTestCase_010471_2);

#define VkglTestCase_010472_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010472_2 "or.left_shift_assign_effect.mediump_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010472, VkglTestCase_010472_1, VkglTestCase_010472_2);

#define VkglTestCase_010473_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_010473_2 "r.left_shift_assign_effect.mediump_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010473, VkglTestCase_010473_1, VkglTestCase_010473_2);

#define VkglTestCase_010474_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010474_2 "tor.left_shift_assign_effect.lowp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010474, VkglTestCase_010474_1, VkglTestCase_010474_2);

#define VkglTestCase_010475_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010475_2 "or.left_shift_assign_effect.lowp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010475, VkglTestCase_010475_1, VkglTestCase_010475_2);

#define VkglTestCase_010476_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010476_2 "or.left_shift_assign_effect.mediump_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010476, VkglTestCase_010476_1, VkglTestCase_010476_2);

#define VkglTestCase_010477_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_010477_2 "r.left_shift_assign_effect.mediump_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010477, VkglTestCase_010477_1, VkglTestCase_010477_2);

#define VkglTestCase_010478_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010478_2 "tor.left_shift_assign_effect.highp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010478, VkglTestCase_010478_1, VkglTestCase_010478_2);

#define VkglTestCase_010479_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010479_2 "or.left_shift_assign_effect.highp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010479, VkglTestCase_010479_1, VkglTestCase_010479_2);

#define VkglTestCase_010480_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010480_2 "tor.left_shift_assign_effect.highp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010480, VkglTestCase_010480_1, VkglTestCase_010480_2);

#define VkglTestCase_010481_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010481_2 "or.left_shift_assign_effect.highp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010481, VkglTestCase_010481_1, VkglTestCase_010481_2);

#define VkglTestCase_010482_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010482_2 "tor.left_shift_assign_effect.highp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010482, VkglTestCase_010482_1, VkglTestCase_010482_2);

#define VkglTestCase_010483_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010483_2 "or.left_shift_assign_effect.highp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010483, VkglTestCase_010483_1, VkglTestCase_010483_2);

#define VkglTestCase_010484_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010484_2 "perator.left_shift_assign_effect.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010484, VkglTestCase_010484_1, VkglTestCase_010484_2);

#define VkglTestCase_010485_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010485_2 "erator.left_shift_assign_effect.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010485, VkglTestCase_010485_1, VkglTestCase_010485_2);

#define VkglTestCase_010486_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010486_2 "rator.left_shift_assign_effect.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010486, VkglTestCase_010486_1, VkglTestCase_010486_2);

#define VkglTestCase_010487_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010487_2 "ator.left_shift_assign_effect.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010487, VkglTestCase_010487_1, VkglTestCase_010487_2);

#define VkglTestCase_010488_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010488_2 "erator.left_shift_assign_effect.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010488, VkglTestCase_010488_1, VkglTestCase_010488_2);

#define VkglTestCase_010489_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010489_2 "rator.left_shift_assign_effect.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010489, VkglTestCase_010489_1, VkglTestCase_010489_2);

#define VkglTestCase_010490_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010490_2 "ator.left_shift_assign_effect.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010490, VkglTestCase_010490_1, VkglTestCase_010490_2);

#define VkglTestCase_010491_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010491_2 "tor.left_shift_assign_effect.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010491, VkglTestCase_010491_1, VkglTestCase_010491_2);

#define VkglTestCase_010492_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010492_2 "erator.left_shift_assign_effect.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010492, VkglTestCase_010492_1, VkglTestCase_010492_2);

#define VkglTestCase_010493_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010493_2 "rator.left_shift_assign_effect.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010493, VkglTestCase_010493_1, VkglTestCase_010493_2);

#define VkglTestCase_010494_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010494_2 "ator.left_shift_assign_effect.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010494, VkglTestCase_010494_1, VkglTestCase_010494_2);

#define VkglTestCase_010495_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010495_2 "tor.left_shift_assign_effect.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010495, VkglTestCase_010495_1, VkglTestCase_010495_2);

#define VkglTestCase_010496_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010496_2 "erator.left_shift_assign_effect.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010496, VkglTestCase_010496_1, VkglTestCase_010496_2);

#define VkglTestCase_010497_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010497_2 "rator.left_shift_assign_effect.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010497, VkglTestCase_010497_1, VkglTestCase_010497_2);

#define VkglTestCase_010498_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010498_2 "ator.left_shift_assign_effect.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010498, VkglTestCase_010498_1, VkglTestCase_010498_2);

#define VkglTestCase_010499_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010499_2 "tor.left_shift_assign_effect.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010499, VkglTestCase_010499_1, VkglTestCase_010499_2);

#define VkglTestCase_010500_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010500_2 "erator.left_shift_assign_effect.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010500, VkglTestCase_010500_1, VkglTestCase_010500_2);

#define VkglTestCase_010501_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010501_2 "rator.left_shift_assign_effect.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010501, VkglTestCase_010501_1, VkglTestCase_010501_2);

#define VkglTestCase_010502_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010502_2 "rator.left_shift_assign_effect.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010502, VkglTestCase_010502_1, VkglTestCase_010502_2);

#define VkglTestCase_010503_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010503_2 "ator.left_shift_assign_effect.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010503, VkglTestCase_010503_1, VkglTestCase_010503_2);

#define VkglTestCase_010504_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010504_2 "rator.left_shift_assign_effect.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010504, VkglTestCase_010504_1, VkglTestCase_010504_2);

#define VkglTestCase_010505_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010505_2 "ator.left_shift_assign_effect.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010505, VkglTestCase_010505_1, VkglTestCase_010505_2);

#define VkglTestCase_010506_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010506_2 "rator.left_shift_assign_effect.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010506, VkglTestCase_010506_1, VkglTestCase_010506_2);

#define VkglTestCase_010507_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010507_2 "ator.left_shift_assign_effect.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010507, VkglTestCase_010507_1, VkglTestCase_010507_2);

#define VkglTestCase_010508_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010508_2 "ator.left_shift_assign_effect.lowp_uint_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010508, VkglTestCase_010508_1, VkglTestCase_010508_2);

#define VkglTestCase_010509_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010509_2 "tor.left_shift_assign_effect.lowp_uint_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010509, VkglTestCase_010509_1, VkglTestCase_010509_2);

#define VkglTestCase_010510_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010510_2 "tor.left_shift_assign_effect.mediump_uint_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010510, VkglTestCase_010510_1, VkglTestCase_010510_2);

#define VkglTestCase_010511_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010511_2 "or.left_shift_assign_effect.mediump_uint_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010511, VkglTestCase_010511_1, VkglTestCase_010511_2);

#define VkglTestCase_010512_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010512_2 "tor.left_shift_assign_effect.lowp_uvec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010512, VkglTestCase_010512_1, VkglTestCase_010512_2);

#define VkglTestCase_010513_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010513_2 "or.left_shift_assign_effect.lowp_uvec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010513, VkglTestCase_010513_1, VkglTestCase_010513_2);

#define VkglTestCase_010514_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_010514_2 "r.left_shift_assign_effect.mediump_uvec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010514, VkglTestCase_010514_1, VkglTestCase_010514_2);

#define VkglTestCase_010515_1 "dEQP-GLES3.functional.shaders.operator.binary_operator"
#define VkglTestCase_010515_2 ".left_shift_assign_effect.mediump_uvec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010515, VkglTestCase_010515_1, VkglTestCase_010515_2);

#define VkglTestCase_010516_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010516_2 "tor.left_shift_assign_effect.lowp_uvec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010516, VkglTestCase_010516_1, VkglTestCase_010516_2);

#define VkglTestCase_010517_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010517_2 "or.left_shift_assign_effect.lowp_uvec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010517, VkglTestCase_010517_1, VkglTestCase_010517_2);

#define VkglTestCase_010518_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_010518_2 "r.left_shift_assign_effect.mediump_uvec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010518, VkglTestCase_010518_1, VkglTestCase_010518_2);

#define VkglTestCase_010519_1 "dEQP-GLES3.functional.shaders.operator.binary_operator"
#define VkglTestCase_010519_2 ".left_shift_assign_effect.mediump_uvec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010519, VkglTestCase_010519_1, VkglTestCase_010519_2);

#define VkglTestCase_010520_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010520_2 "tor.left_shift_assign_effect.lowp_uvec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010520, VkglTestCase_010520_1, VkglTestCase_010520_2);

#define VkglTestCase_010521_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010521_2 "or.left_shift_assign_effect.lowp_uvec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010521, VkglTestCase_010521_1, VkglTestCase_010521_2);

#define VkglTestCase_010522_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_010522_2 "r.left_shift_assign_effect.mediump_uvec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010522, VkglTestCase_010522_1, VkglTestCase_010522_2);

#define VkglTestCase_010523_1 "dEQP-GLES3.functional.shaders.operator.binary_operator"
#define VkglTestCase_010523_2 ".left_shift_assign_effect.mediump_uvec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010523, VkglTestCase_010523_1, VkglTestCase_010523_2);

#define VkglTestCase_010524_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010524_2 "ator.left_shift_assign_effect.highp_uint_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010524, VkglTestCase_010524_1, VkglTestCase_010524_2);

#define VkglTestCase_010525_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010525_2 "tor.left_shift_assign_effect.highp_uint_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010525, VkglTestCase_010525_1, VkglTestCase_010525_2);

#define VkglTestCase_010526_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010526_2 "or.left_shift_assign_effect.highp_uvec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010526, VkglTestCase_010526_1, VkglTestCase_010526_2);

#define VkglTestCase_010527_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_010527_2 "r.left_shift_assign_effect.highp_uvec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010527, VkglTestCase_010527_1, VkglTestCase_010527_2);

#define VkglTestCase_010528_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010528_2 "or.left_shift_assign_effect.highp_uvec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010528, VkglTestCase_010528_1, VkglTestCase_010528_2);

#define VkglTestCase_010529_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_010529_2 "r.left_shift_assign_effect.highp_uvec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010529, VkglTestCase_010529_1, VkglTestCase_010529_2);

#define VkglTestCase_010530_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010530_2 "or.left_shift_assign_effect.highp_uvec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010530, VkglTestCase_010530_1, VkglTestCase_010530_2);

#define VkglTestCase_010531_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_010531_2 "r.left_shift_assign_effect.highp_uvec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010531, VkglTestCase_010531_1, VkglTestCase_010531_2);

#define VkglTestCase_010532_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010532_2 "ator.left_shift_assign_effect.lowp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010532, VkglTestCase_010532_1, VkglTestCase_010532_2);

#define VkglTestCase_010533_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010533_2 "tor.left_shift_assign_effect.lowp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010533, VkglTestCase_010533_1, VkglTestCase_010533_2);

#define VkglTestCase_010534_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010534_2 "or.left_shift_assign_effect.mediump_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010534, VkglTestCase_010534_1, VkglTestCase_010534_2);

#define VkglTestCase_010535_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_010535_2 "r.left_shift_assign_effect.mediump_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010535, VkglTestCase_010535_1, VkglTestCase_010535_2);

#define VkglTestCase_010536_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010536_2 "ator.left_shift_assign_effect.lowp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010536, VkglTestCase_010536_1, VkglTestCase_010536_2);

#define VkglTestCase_010537_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010537_2 "tor.left_shift_assign_effect.lowp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010537, VkglTestCase_010537_1, VkglTestCase_010537_2);

#define VkglTestCase_010538_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010538_2 "or.left_shift_assign_effect.mediump_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010538, VkglTestCase_010538_1, VkglTestCase_010538_2);

#define VkglTestCase_010539_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_010539_2 "r.left_shift_assign_effect.mediump_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010539, VkglTestCase_010539_1, VkglTestCase_010539_2);

#define VkglTestCase_010540_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010540_2 "ator.left_shift_assign_effect.lowp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010540, VkglTestCase_010540_1, VkglTestCase_010540_2);

#define VkglTestCase_010541_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010541_2 "tor.left_shift_assign_effect.lowp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010541, VkglTestCase_010541_1, VkglTestCase_010541_2);

#define VkglTestCase_010542_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010542_2 "or.left_shift_assign_effect.mediump_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010542, VkglTestCase_010542_1, VkglTestCase_010542_2);

#define VkglTestCase_010543_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_010543_2 "r.left_shift_assign_effect.mediump_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010543, VkglTestCase_010543_1, VkglTestCase_010543_2);

#define VkglTestCase_010544_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010544_2 "tor.left_shift_assign_effect.highp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010544, VkglTestCase_010544_1, VkglTestCase_010544_2);

#define VkglTestCase_010545_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010545_2 "or.left_shift_assign_effect.highp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010545, VkglTestCase_010545_1, VkglTestCase_010545_2);

#define VkglTestCase_010546_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010546_2 "tor.left_shift_assign_effect.highp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010546, VkglTestCase_010546_1, VkglTestCase_010546_2);

#define VkglTestCase_010547_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010547_2 "or.left_shift_assign_effect.highp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010547, VkglTestCase_010547_1, VkglTestCase_010547_2);

#define VkglTestCase_010548_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010548_2 "tor.left_shift_assign_effect.highp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010548, VkglTestCase_010548_1, VkglTestCase_010548_2);

#define VkglTestCase_010549_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010549_2 "or.left_shift_assign_effect.highp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010549, VkglTestCase_010549_1, VkglTestCase_010549_2);

#define VkglTestCase_010550_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010550_2 "ator.left_shift_assign_effect.lowp_uvec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010550, VkglTestCase_010550_1, VkglTestCase_010550_2);

#define VkglTestCase_010551_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010551_2 "tor.left_shift_assign_effect.lowp_uvec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010551, VkglTestCase_010551_1, VkglTestCase_010551_2);

#define VkglTestCase_010552_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010552_2 "or.left_shift_assign_effect.mediump_uvec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010552, VkglTestCase_010552_1, VkglTestCase_010552_2);

#define VkglTestCase_010553_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_010553_2 "r.left_shift_assign_effect.mediump_uvec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010553, VkglTestCase_010553_1, VkglTestCase_010553_2);

#define VkglTestCase_010554_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010554_2 "ator.left_shift_assign_effect.lowp_uvec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010554, VkglTestCase_010554_1, VkglTestCase_010554_2);

#define VkglTestCase_010555_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010555_2 "tor.left_shift_assign_effect.lowp_uvec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010555, VkglTestCase_010555_1, VkglTestCase_010555_2);

#define VkglTestCase_010556_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010556_2 "or.left_shift_assign_effect.mediump_uvec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010556, VkglTestCase_010556_1, VkglTestCase_010556_2);

#define VkglTestCase_010557_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_010557_2 "r.left_shift_assign_effect.mediump_uvec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010557, VkglTestCase_010557_1, VkglTestCase_010557_2);

#define VkglTestCase_010558_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010558_2 "ator.left_shift_assign_effect.lowp_uvec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010558, VkglTestCase_010558_1, VkglTestCase_010558_2);

#define VkglTestCase_010559_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010559_2 "tor.left_shift_assign_effect.lowp_uvec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010559, VkglTestCase_010559_1, VkglTestCase_010559_2);

#define VkglTestCase_010560_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010560_2 "or.left_shift_assign_effect.mediump_uvec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010560, VkglTestCase_010560_1, VkglTestCase_010560_2);

#define VkglTestCase_010561_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_010561_2 "r.left_shift_assign_effect.mediump_uvec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010561, VkglTestCase_010561_1, VkglTestCase_010561_2);

#define VkglTestCase_010562_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010562_2 "tor.left_shift_assign_effect.highp_uvec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010562, VkglTestCase_010562_1, VkglTestCase_010562_2);

#define VkglTestCase_010563_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010563_2 "or.left_shift_assign_effect.highp_uvec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010563, VkglTestCase_010563_1, VkglTestCase_010563_2);

#define VkglTestCase_010564_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010564_2 "tor.left_shift_assign_effect.highp_uvec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010564, VkglTestCase_010564_1, VkglTestCase_010564_2);

#define VkglTestCase_010565_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010565_2 "or.left_shift_assign_effect.highp_uvec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010565, VkglTestCase_010565_1, VkglTestCase_010565_2);

#define VkglTestCase_010566_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010566_2 "tor.left_shift_assign_effect.highp_uvec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010566, VkglTestCase_010566_1, VkglTestCase_010566_2);

#define VkglTestCase_010567_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010567_2 "or.left_shift_assign_effect.highp_uvec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010567, VkglTestCase_010567_1, VkglTestCase_010567_2);
