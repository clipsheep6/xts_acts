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

#define VkglTestCase_010736_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010736_2 "_operator.add_assign_result.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010736, VkglTestCase_010736_1, VkglTestCase_010736_2);

#define VkglTestCase_010737_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010737_2 "operator.add_assign_result.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010737, VkglTestCase_010737_1, VkglTestCase_010737_2);

#define VkglTestCase_010738_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010738_2 "operator.add_assign_result.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010738, VkglTestCase_010738_1, VkglTestCase_010738_2);

#define VkglTestCase_010739_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010739_2 "perator.add_assign_result.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010739, VkglTestCase_010739_1, VkglTestCase_010739_2);

#define VkglTestCase_010740_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010740_2 "_operator.add_assign_result.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010740, VkglTestCase_010740_1, VkglTestCase_010740_2);

#define VkglTestCase_010741_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010741_2 "operator.add_assign_result.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010741, VkglTestCase_010741_1, VkglTestCase_010741_2);

#define VkglTestCase_010742_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_010742_2 "y_operator.add_assign_result.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010742, VkglTestCase_010742_1, VkglTestCase_010742_2);

#define VkglTestCase_010743_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010743_2 "_operator.add_assign_result.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010743, VkglTestCase_010743_1, VkglTestCase_010743_2);

#define VkglTestCase_010744_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010744_2 "operator.add_assign_result.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010744, VkglTestCase_010744_1, VkglTestCase_010744_2);

#define VkglTestCase_010745_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010745_2 "perator.add_assign_result.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010745, VkglTestCase_010745_1, VkglTestCase_010745_2);

#define VkglTestCase_010746_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010746_2 "_operator.add_assign_result.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010746, VkglTestCase_010746_1, VkglTestCase_010746_2);

#define VkglTestCase_010747_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010747_2 "operator.add_assign_result.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010747, VkglTestCase_010747_1, VkglTestCase_010747_2);

#define VkglTestCase_010748_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_010748_2 "y_operator.add_assign_result.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010748, VkglTestCase_010748_1, VkglTestCase_010748_2);

#define VkglTestCase_010749_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010749_2 "_operator.add_assign_result.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010749, VkglTestCase_010749_1, VkglTestCase_010749_2);

#define VkglTestCase_010750_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010750_2 "operator.add_assign_result.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010750, VkglTestCase_010750_1, VkglTestCase_010750_2);

#define VkglTestCase_010751_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010751_2 "perator.add_assign_result.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010751, VkglTestCase_010751_1, VkglTestCase_010751_2);

#define VkglTestCase_010752_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010752_2 "_operator.add_assign_result.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010752, VkglTestCase_010752_1, VkglTestCase_010752_2);

#define VkglTestCase_010753_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010753_2 "operator.add_assign_result.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010753, VkglTestCase_010753_1, VkglTestCase_010753_2);

#define VkglTestCase_010754_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_010754_2 "y_operator.add_assign_result.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010754, VkglTestCase_010754_1, VkglTestCase_010754_2);

#define VkglTestCase_010755_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010755_2 "_operator.add_assign_result.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010755, VkglTestCase_010755_1, VkglTestCase_010755_2);

#define VkglTestCase_010756_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010756_2 "operator.add_assign_result.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010756, VkglTestCase_010756_1, VkglTestCase_010756_2);

#define VkglTestCase_010757_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010757_2 "perator.add_assign_result.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010757, VkglTestCase_010757_1, VkglTestCase_010757_2);

#define VkglTestCase_010758_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010758_2 "_operator.add_assign_result.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010758, VkglTestCase_010758_1, VkglTestCase_010758_2);

#define VkglTestCase_010759_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010759_2 "operator.add_assign_result.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010759, VkglTestCase_010759_1, VkglTestCase_010759_2);

#define VkglTestCase_010760_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_010760_2 "y_operator.add_assign_result.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010760, VkglTestCase_010760_1, VkglTestCase_010760_2);

#define VkglTestCase_010761_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010761_2 "_operator.add_assign_result.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010761, VkglTestCase_010761_1, VkglTestCase_010761_2);

#define VkglTestCase_010762_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010762_2 "_operator.add_assign_result.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010762, VkglTestCase_010762_1, VkglTestCase_010762_2);

#define VkglTestCase_010763_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010763_2 "operator.add_assign_result.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010763, VkglTestCase_010763_1, VkglTestCase_010763_2);

#define VkglTestCase_010764_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010764_2 "_operator.add_assign_result.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010764, VkglTestCase_010764_1, VkglTestCase_010764_2);

#define VkglTestCase_010765_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010765_2 "operator.add_assign_result.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010765, VkglTestCase_010765_1, VkglTestCase_010765_2);

#define VkglTestCase_010766_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010766_2 "operator.add_assign_result.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010766, VkglTestCase_010766_1, VkglTestCase_010766_2);

#define VkglTestCase_010767_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010767_2 "perator.add_assign_result.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010767, VkglTestCase_010767_1, VkglTestCase_010767_2);

#define VkglTestCase_010768_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010768_2 "_operator.add_assign_result.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010768, VkglTestCase_010768_1, VkglTestCase_010768_2);

#define VkglTestCase_010769_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010769_2 "operator.add_assign_result.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010769, VkglTestCase_010769_1, VkglTestCase_010769_2);

#define VkglTestCase_010770_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010770_2 "operator.add_assign_result.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010770, VkglTestCase_010770_1, VkglTestCase_010770_2);

#define VkglTestCase_010771_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010771_2 "perator.add_assign_result.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010771, VkglTestCase_010771_1, VkglTestCase_010771_2);

#define VkglTestCase_010772_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010772_2 "_operator.add_assign_result.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010772, VkglTestCase_010772_1, VkglTestCase_010772_2);

#define VkglTestCase_010773_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010773_2 "operator.add_assign_result.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010773, VkglTestCase_010773_1, VkglTestCase_010773_2);

#define VkglTestCase_010774_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010774_2 "operator.add_assign_result.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010774, VkglTestCase_010774_1, VkglTestCase_010774_2);

#define VkglTestCase_010775_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010775_2 "perator.add_assign_result.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010775, VkglTestCase_010775_1, VkglTestCase_010775_2);

#define VkglTestCase_010776_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_010776_2 "y_operator.add_assign_result.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010776, VkglTestCase_010776_1, VkglTestCase_010776_2);

#define VkglTestCase_010777_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010777_2 "_operator.add_assign_result.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010777, VkglTestCase_010777_1, VkglTestCase_010777_2);

#define VkglTestCase_010778_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010778_2 "_operator.add_assign_result.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010778, VkglTestCase_010778_1, VkglTestCase_010778_2);

#define VkglTestCase_010779_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010779_2 "operator.add_assign_result.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010779, VkglTestCase_010779_1, VkglTestCase_010779_2);

#define VkglTestCase_010780_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010780_2 "_operator.add_assign_result.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010780, VkglTestCase_010780_1, VkglTestCase_010780_2);

#define VkglTestCase_010781_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010781_2 "operator.add_assign_result.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010781, VkglTestCase_010781_1, VkglTestCase_010781_2);

#define VkglTestCase_010782_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010782_2 "_operator.add_assign_result.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010782, VkglTestCase_010782_1, VkglTestCase_010782_2);

#define VkglTestCase_010783_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010783_2 "operator.add_assign_result.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010783, VkglTestCase_010783_1, VkglTestCase_010783_2);

#define VkglTestCase_010784_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_010784_2 "y_operator.add_assign_result.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010784, VkglTestCase_010784_1, VkglTestCase_010784_2);

#define VkglTestCase_010785_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010785_2 "_operator.add_assign_result.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010785, VkglTestCase_010785_1, VkglTestCase_010785_2);

#define VkglTestCase_010786_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010786_2 "operator.add_assign_result.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010786, VkglTestCase_010786_1, VkglTestCase_010786_2);

#define VkglTestCase_010787_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010787_2 "perator.add_assign_result.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010787, VkglTestCase_010787_1, VkglTestCase_010787_2);

#define VkglTestCase_010788_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010788_2 "_operator.add_assign_result.lowp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010788, VkglTestCase_010788_1, VkglTestCase_010788_2);

#define VkglTestCase_010789_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010789_2 "operator.add_assign_result.lowp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010789, VkglTestCase_010789_1, VkglTestCase_010789_2);

#define VkglTestCase_010790_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010790_2 "operator.add_assign_result.mediump_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010790, VkglTestCase_010790_1, VkglTestCase_010790_2);

#define VkglTestCase_010791_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010791_2 "perator.add_assign_result.mediump_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010791, VkglTestCase_010791_1, VkglTestCase_010791_2);

#define VkglTestCase_010792_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010792_2 "_operator.add_assign_result.lowp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010792, VkglTestCase_010792_1, VkglTestCase_010792_2);

#define VkglTestCase_010793_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010793_2 "operator.add_assign_result.lowp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010793, VkglTestCase_010793_1, VkglTestCase_010793_2);

#define VkglTestCase_010794_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010794_2 "operator.add_assign_result.mediump_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010794, VkglTestCase_010794_1, VkglTestCase_010794_2);

#define VkglTestCase_010795_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010795_2 "perator.add_assign_result.mediump_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010795, VkglTestCase_010795_1, VkglTestCase_010795_2);

#define VkglTestCase_010796_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010796_2 "_operator.add_assign_result.lowp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010796, VkglTestCase_010796_1, VkglTestCase_010796_2);

#define VkglTestCase_010797_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010797_2 "operator.add_assign_result.lowp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010797, VkglTestCase_010797_1, VkglTestCase_010797_2);

#define VkglTestCase_010798_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010798_2 "operator.add_assign_result.mediump_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010798, VkglTestCase_010798_1, VkglTestCase_010798_2);

#define VkglTestCase_010799_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010799_2 "perator.add_assign_result.mediump_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010799, VkglTestCase_010799_1, VkglTestCase_010799_2);

#define VkglTestCase_010800_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010800_2 "_operator.add_assign_result.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010800, VkglTestCase_010800_1, VkglTestCase_010800_2);

#define VkglTestCase_010801_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010801_2 "operator.add_assign_result.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010801, VkglTestCase_010801_1, VkglTestCase_010801_2);

#define VkglTestCase_010802_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010802_2 "_operator.add_assign_result.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010802, VkglTestCase_010802_1, VkglTestCase_010802_2);

#define VkglTestCase_010803_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010803_2 "operator.add_assign_result.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010803, VkglTestCase_010803_1, VkglTestCase_010803_2);

#define VkglTestCase_010804_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010804_2 "_operator.add_assign_result.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010804, VkglTestCase_010804_1, VkglTestCase_010804_2);

#define VkglTestCase_010805_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010805_2 "operator.add_assign_result.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010805, VkglTestCase_010805_1, VkglTestCase_010805_2);

#define VkglTestCase_010806_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010806_2 "_operator.add_assign_result.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010806, VkglTestCase_010806_1, VkglTestCase_010806_2);

#define VkglTestCase_010807_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010807_2 "operator.add_assign_result.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010807, VkglTestCase_010807_1, VkglTestCase_010807_2);

#define VkglTestCase_010808_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010808_2 "perator.add_assign_result.lowp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010808, VkglTestCase_010808_1, VkglTestCase_010808_2);

#define VkglTestCase_010809_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010809_2 "erator.add_assign_result.lowp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010809, VkglTestCase_010809_1, VkglTestCase_010809_2);

#define VkglTestCase_010810_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010810_2 "rator.add_assign_result.mediump_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010810, VkglTestCase_010810_1, VkglTestCase_010810_2);

#define VkglTestCase_010811_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010811_2 "ator.add_assign_result.mediump_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010811, VkglTestCase_010811_1, VkglTestCase_010811_2);

#define VkglTestCase_010812_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010812_2 "erator.add_assign_result.highp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010812, VkglTestCase_010812_1, VkglTestCase_010812_2);

#define VkglTestCase_010813_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010813_2 "rator.add_assign_result.highp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010813, VkglTestCase_010813_1, VkglTestCase_010813_2);

#define VkglTestCase_010814_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010814_2 "perator.add_assign_result.lowp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010814, VkglTestCase_010814_1, VkglTestCase_010814_2);

#define VkglTestCase_010815_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010815_2 "erator.add_assign_result.lowp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010815, VkglTestCase_010815_1, VkglTestCase_010815_2);

#define VkglTestCase_010816_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010816_2 "rator.add_assign_result.mediump_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010816, VkglTestCase_010816_1, VkglTestCase_010816_2);

#define VkglTestCase_010817_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010817_2 "ator.add_assign_result.mediump_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010817, VkglTestCase_010817_1, VkglTestCase_010817_2);

#define VkglTestCase_010818_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010818_2 "erator.add_assign_result.highp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010818, VkglTestCase_010818_1, VkglTestCase_010818_2);

#define VkglTestCase_010819_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010819_2 "rator.add_assign_result.highp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010819, VkglTestCase_010819_1, VkglTestCase_010819_2);

#define VkglTestCase_010820_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010820_2 "perator.add_assign_result.lowp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010820, VkglTestCase_010820_1, VkglTestCase_010820_2);

#define VkglTestCase_010821_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010821_2 "erator.add_assign_result.lowp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010821, VkglTestCase_010821_1, VkglTestCase_010821_2);

#define VkglTestCase_010822_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010822_2 "rator.add_assign_result.mediump_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010822, VkglTestCase_010822_1, VkglTestCase_010822_2);

#define VkglTestCase_010823_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010823_2 "ator.add_assign_result.mediump_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010823, VkglTestCase_010823_1, VkglTestCase_010823_2);

#define VkglTestCase_010824_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010824_2 "erator.add_assign_result.highp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010824, VkglTestCase_010824_1, VkglTestCase_010824_2);

#define VkglTestCase_010825_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010825_2 "rator.add_assign_result.highp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010825, VkglTestCase_010825_1, VkglTestCase_010825_2);

#define VkglTestCase_010826_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010826_2 "perator.add_assign_result.lowp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010826, VkglTestCase_010826_1, VkglTestCase_010826_2);

#define VkglTestCase_010827_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010827_2 "erator.add_assign_result.lowp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010827, VkglTestCase_010827_1, VkglTestCase_010827_2);

#define VkglTestCase_010828_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010828_2 "erator.add_assign_result.mediump_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010828, VkglTestCase_010828_1, VkglTestCase_010828_2);

#define VkglTestCase_010829_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010829_2 "rator.add_assign_result.mediump_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010829, VkglTestCase_010829_1, VkglTestCase_010829_2);

#define VkglTestCase_010830_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010830_2 "perator.add_assign_result.lowp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010830, VkglTestCase_010830_1, VkglTestCase_010830_2);

#define VkglTestCase_010831_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010831_2 "erator.add_assign_result.lowp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010831, VkglTestCase_010831_1, VkglTestCase_010831_2);

#define VkglTestCase_010832_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010832_2 "erator.add_assign_result.mediump_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010832, VkglTestCase_010832_1, VkglTestCase_010832_2);

#define VkglTestCase_010833_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010833_2 "rator.add_assign_result.mediump_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010833, VkglTestCase_010833_1, VkglTestCase_010833_2);

#define VkglTestCase_010834_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010834_2 "perator.add_assign_result.lowp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010834, VkglTestCase_010834_1, VkglTestCase_010834_2);

#define VkglTestCase_010835_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010835_2 "erator.add_assign_result.lowp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010835, VkglTestCase_010835_1, VkglTestCase_010835_2);

#define VkglTestCase_010836_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010836_2 "erator.add_assign_result.mediump_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010836, VkglTestCase_010836_1, VkglTestCase_010836_2);

#define VkglTestCase_010837_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010837_2 "rator.add_assign_result.mediump_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010837, VkglTestCase_010837_1, VkglTestCase_010837_2);

#define VkglTestCase_010838_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010838_2 "perator.add_assign_result.highp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010838, VkglTestCase_010838_1, VkglTestCase_010838_2);

#define VkglTestCase_010839_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010839_2 "erator.add_assign_result.highp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010839, VkglTestCase_010839_1, VkglTestCase_010839_2);

#define VkglTestCase_010840_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010840_2 "perator.add_assign_result.highp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010840, VkglTestCase_010840_1, VkglTestCase_010840_2);

#define VkglTestCase_010841_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010841_2 "erator.add_assign_result.highp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010841, VkglTestCase_010841_1, VkglTestCase_010841_2);

#define VkglTestCase_010842_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010842_2 "perator.add_assign_result.highp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010842, VkglTestCase_010842_1, VkglTestCase_010842_2);

#define VkglTestCase_010843_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010843_2 "erator.add_assign_result.highp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010843, VkglTestCase_010843_1, VkglTestCase_010843_2);

#define VkglTestCase_010844_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010844_2 "perator.add_assign_result.lowp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010844, VkglTestCase_010844_1, VkglTestCase_010844_2);

#define VkglTestCase_010845_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010845_2 "erator.add_assign_result.lowp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010845, VkglTestCase_010845_1, VkglTestCase_010845_2);

#define VkglTestCase_010846_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010846_2 "rator.add_assign_result.mediump_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010846, VkglTestCase_010846_1, VkglTestCase_010846_2);

#define VkglTestCase_010847_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010847_2 "ator.add_assign_result.mediump_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010847, VkglTestCase_010847_1, VkglTestCase_010847_2);

#define VkglTestCase_010848_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010848_2 "perator.add_assign_result.lowp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010848, VkglTestCase_010848_1, VkglTestCase_010848_2);

#define VkglTestCase_010849_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010849_2 "erator.add_assign_result.lowp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010849, VkglTestCase_010849_1, VkglTestCase_010849_2);

#define VkglTestCase_010850_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010850_2 "rator.add_assign_result.mediump_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010850, VkglTestCase_010850_1, VkglTestCase_010850_2);

#define VkglTestCase_010851_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010851_2 "ator.add_assign_result.mediump_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010851, VkglTestCase_010851_1, VkglTestCase_010851_2);

#define VkglTestCase_010852_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010852_2 "perator.add_assign_result.lowp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010852, VkglTestCase_010852_1, VkglTestCase_010852_2);

#define VkglTestCase_010853_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010853_2 "erator.add_assign_result.lowp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010853, VkglTestCase_010853_1, VkglTestCase_010853_2);

#define VkglTestCase_010854_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010854_2 "rator.add_assign_result.mediump_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010854, VkglTestCase_010854_1, VkglTestCase_010854_2);

#define VkglTestCase_010855_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010855_2 "ator.add_assign_result.mediump_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010855, VkglTestCase_010855_1, VkglTestCase_010855_2);

#define VkglTestCase_010856_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010856_2 "erator.add_assign_result.highp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010856, VkglTestCase_010856_1, VkglTestCase_010856_2);

#define VkglTestCase_010857_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010857_2 "rator.add_assign_result.highp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010857, VkglTestCase_010857_1, VkglTestCase_010857_2);

#define VkglTestCase_010858_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010858_2 "erator.add_assign_result.highp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010858, VkglTestCase_010858_1, VkglTestCase_010858_2);

#define VkglTestCase_010859_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010859_2 "rator.add_assign_result.highp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010859, VkglTestCase_010859_1, VkglTestCase_010859_2);

#define VkglTestCase_010860_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010860_2 "erator.add_assign_result.highp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010860, VkglTestCase_010860_1, VkglTestCase_010860_2);

#define VkglTestCase_010861_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010861_2 "rator.add_assign_result.highp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010861, VkglTestCase_010861_1, VkglTestCase_010861_2);
