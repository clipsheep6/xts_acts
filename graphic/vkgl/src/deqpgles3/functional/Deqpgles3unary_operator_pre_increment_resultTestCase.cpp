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
#include "../ActsDeqpgles30008TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_007736_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007736_2 "perator.pre_increment_result.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007736, VkglTestCase_007736_1, VkglTestCase_007736_2);

#define VkglTestCase_007737_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007737_2 "erator.pre_increment_result.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007737, VkglTestCase_007737_1, VkglTestCase_007737_2);

#define VkglTestCase_007738_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007738_2 "erator.pre_increment_result.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007738, VkglTestCase_007738_1, VkglTestCase_007738_2);

#define VkglTestCase_007739_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007739_2 "rator.pre_increment_result.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007739, VkglTestCase_007739_1, VkglTestCase_007739_2);

#define VkglTestCase_007740_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007740_2 "perator.pre_increment_result.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007740, VkglTestCase_007740_1, VkglTestCase_007740_2);

#define VkglTestCase_007741_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007741_2 "erator.pre_increment_result.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007741, VkglTestCase_007741_1, VkglTestCase_007741_2);

#define VkglTestCase_007742_1 "dEQP-GLES3.functional.shaders.operator.unary_"
#define VkglTestCase_007742_2 "operator.pre_increment_result.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007742, VkglTestCase_007742_1, VkglTestCase_007742_2);

#define VkglTestCase_007743_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007743_2 "perator.pre_increment_result.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007743, VkglTestCase_007743_1, VkglTestCase_007743_2);

#define VkglTestCase_007744_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007744_2 "erator.pre_increment_result.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007744, VkglTestCase_007744_1, VkglTestCase_007744_2);

#define VkglTestCase_007745_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007745_2 "rator.pre_increment_result.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007745, VkglTestCase_007745_1, VkglTestCase_007745_2);

#define VkglTestCase_007746_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007746_2 "perator.pre_increment_result.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007746, VkglTestCase_007746_1, VkglTestCase_007746_2);

#define VkglTestCase_007747_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007747_2 "erator.pre_increment_result.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007747, VkglTestCase_007747_1, VkglTestCase_007747_2);

#define VkglTestCase_007748_1 "dEQP-GLES3.functional.shaders.operator.unary_"
#define VkglTestCase_007748_2 "operator.pre_increment_result.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007748, VkglTestCase_007748_1, VkglTestCase_007748_2);

#define VkglTestCase_007749_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007749_2 "perator.pre_increment_result.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007749, VkglTestCase_007749_1, VkglTestCase_007749_2);

#define VkglTestCase_007750_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007750_2 "erator.pre_increment_result.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007750, VkglTestCase_007750_1, VkglTestCase_007750_2);

#define VkglTestCase_007751_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007751_2 "rator.pre_increment_result.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007751, VkglTestCase_007751_1, VkglTestCase_007751_2);

#define VkglTestCase_007752_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007752_2 "perator.pre_increment_result.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007752, VkglTestCase_007752_1, VkglTestCase_007752_2);

#define VkglTestCase_007753_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007753_2 "erator.pre_increment_result.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007753, VkglTestCase_007753_1, VkglTestCase_007753_2);

#define VkglTestCase_007754_1 "dEQP-GLES3.functional.shaders.operator.unary_"
#define VkglTestCase_007754_2 "operator.pre_increment_result.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007754, VkglTestCase_007754_1, VkglTestCase_007754_2);

#define VkglTestCase_007755_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007755_2 "perator.pre_increment_result.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007755, VkglTestCase_007755_1, VkglTestCase_007755_2);

#define VkglTestCase_007756_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007756_2 "erator.pre_increment_result.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007756, VkglTestCase_007756_1, VkglTestCase_007756_2);

#define VkglTestCase_007757_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007757_2 "rator.pre_increment_result.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007757, VkglTestCase_007757_1, VkglTestCase_007757_2);

#define VkglTestCase_007758_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007758_2 "perator.pre_increment_result.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007758, VkglTestCase_007758_1, VkglTestCase_007758_2);

#define VkglTestCase_007759_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007759_2 "erator.pre_increment_result.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007759, VkglTestCase_007759_1, VkglTestCase_007759_2);

#define VkglTestCase_007760_1 "dEQP-GLES3.functional.shaders.operator.unary_"
#define VkglTestCase_007760_2 "operator.pre_increment_result.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007760, VkglTestCase_007760_1, VkglTestCase_007760_2);

#define VkglTestCase_007761_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007761_2 "perator.pre_increment_result.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007761, VkglTestCase_007761_1, VkglTestCase_007761_2);

#define VkglTestCase_007762_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007762_2 "perator.pre_increment_result.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007762, VkglTestCase_007762_1, VkglTestCase_007762_2);

#define VkglTestCase_007763_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007763_2 "erator.pre_increment_result.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007763, VkglTestCase_007763_1, VkglTestCase_007763_2);

#define VkglTestCase_007764_1 "dEQP-GLES3.functional.shaders.operator.unary_"
#define VkglTestCase_007764_2 "operator.pre_increment_result.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007764, VkglTestCase_007764_1, VkglTestCase_007764_2);

#define VkglTestCase_007765_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007765_2 "perator.pre_increment_result.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007765, VkglTestCase_007765_1, VkglTestCase_007765_2);

#define VkglTestCase_007766_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007766_2 "perator.pre_increment_result.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007766, VkglTestCase_007766_1, VkglTestCase_007766_2);

#define VkglTestCase_007767_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007767_2 "erator.pre_increment_result.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007767, VkglTestCase_007767_1, VkglTestCase_007767_2);

#define VkglTestCase_007768_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007768_2 "erator.pre_increment_result.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007768, VkglTestCase_007768_1, VkglTestCase_007768_2);

#define VkglTestCase_007769_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007769_2 "rator.pre_increment_result.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007769, VkglTestCase_007769_1, VkglTestCase_007769_2);

#define VkglTestCase_007770_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007770_2 "perator.pre_increment_result.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007770, VkglTestCase_007770_1, VkglTestCase_007770_2);

#define VkglTestCase_007771_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007771_2 "erator.pre_increment_result.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007771, VkglTestCase_007771_1, VkglTestCase_007771_2);

#define VkglTestCase_007772_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007772_2 "perator.pre_increment_result.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007772, VkglTestCase_007772_1, VkglTestCase_007772_2);

#define VkglTestCase_007773_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007773_2 "erator.pre_increment_result.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007773, VkglTestCase_007773_1, VkglTestCase_007773_2);

#define VkglTestCase_007774_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007774_2 "erator.pre_increment_result.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007774, VkglTestCase_007774_1, VkglTestCase_007774_2);

#define VkglTestCase_007775_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007775_2 "rator.pre_increment_result.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007775, VkglTestCase_007775_1, VkglTestCase_007775_2);

#define VkglTestCase_007776_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007776_2 "perator.pre_increment_result.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007776, VkglTestCase_007776_1, VkglTestCase_007776_2);

#define VkglTestCase_007777_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007777_2 "erator.pre_increment_result.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007777, VkglTestCase_007777_1, VkglTestCase_007777_2);

#define VkglTestCase_007778_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007778_2 "perator.pre_increment_result.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007778, VkglTestCase_007778_1, VkglTestCase_007778_2);

#define VkglTestCase_007779_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007779_2 "erator.pre_increment_result.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007779, VkglTestCase_007779_1, VkglTestCase_007779_2);

#define VkglTestCase_007780_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007780_2 "erator.pre_increment_result.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007780, VkglTestCase_007780_1, VkglTestCase_007780_2);

#define VkglTestCase_007781_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007781_2 "rator.pre_increment_result.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007781, VkglTestCase_007781_1, VkglTestCase_007781_2);

#define VkglTestCase_007782_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007782_2 "perator.pre_increment_result.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007782, VkglTestCase_007782_1, VkglTestCase_007782_2);

#define VkglTestCase_007783_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007783_2 "erator.pre_increment_result.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007783, VkglTestCase_007783_1, VkglTestCase_007783_2);

#define VkglTestCase_007784_1 "dEQP-GLES3.functional.shaders.operator.unary_"
#define VkglTestCase_007784_2 "operator.pre_increment_result.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007784, VkglTestCase_007784_1, VkglTestCase_007784_2);

#define VkglTestCase_007785_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007785_2 "perator.pre_increment_result.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007785, VkglTestCase_007785_1, VkglTestCase_007785_2);

#define VkglTestCase_007786_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007786_2 "erator.pre_increment_result.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007786, VkglTestCase_007786_1, VkglTestCase_007786_2);

#define VkglTestCase_007787_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007787_2 "rator.pre_increment_result.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007787, VkglTestCase_007787_1, VkglTestCase_007787_2);

#define VkglTestCase_007788_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007788_2 "perator.pre_increment_result.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007788, VkglTestCase_007788_1, VkglTestCase_007788_2);

#define VkglTestCase_007789_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007789_2 "erator.pre_increment_result.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007789, VkglTestCase_007789_1, VkglTestCase_007789_2);

#define VkglTestCase_007790_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007790_2 "perator.pre_increment_result.lowp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007790, VkglTestCase_007790_1, VkglTestCase_007790_2);

#define VkglTestCase_007791_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007791_2 "erator.pre_increment_result.lowp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007791, VkglTestCase_007791_1, VkglTestCase_007791_2);

#define VkglTestCase_007792_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007792_2 "erator.pre_increment_result.mediump_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007792, VkglTestCase_007792_1, VkglTestCase_007792_2);

#define VkglTestCase_007793_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007793_2 "rator.pre_increment_result.mediump_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007793, VkglTestCase_007793_1, VkglTestCase_007793_2);

#define VkglTestCase_007794_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007794_2 "perator.pre_increment_result.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007794, VkglTestCase_007794_1, VkglTestCase_007794_2);

#define VkglTestCase_007795_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007795_2 "erator.pre_increment_result.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007795, VkglTestCase_007795_1, VkglTestCase_007795_2);

#define VkglTestCase_007796_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007796_2 "perator.pre_increment_result.lowp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007796, VkglTestCase_007796_1, VkglTestCase_007796_2);

#define VkglTestCase_007797_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007797_2 "erator.pre_increment_result.lowp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007797, VkglTestCase_007797_1, VkglTestCase_007797_2);

#define VkglTestCase_007798_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007798_2 "erator.pre_increment_result.mediump_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007798, VkglTestCase_007798_1, VkglTestCase_007798_2);

#define VkglTestCase_007799_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007799_2 "rator.pre_increment_result.mediump_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007799, VkglTestCase_007799_1, VkglTestCase_007799_2);

#define VkglTestCase_007800_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007800_2 "perator.pre_increment_result.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007800, VkglTestCase_007800_1, VkglTestCase_007800_2);

#define VkglTestCase_007801_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007801_2 "erator.pre_increment_result.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007801, VkglTestCase_007801_1, VkglTestCase_007801_2);

#define VkglTestCase_007802_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007802_2 "perator.pre_increment_result.lowp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007802, VkglTestCase_007802_1, VkglTestCase_007802_2);

#define VkglTestCase_007803_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007803_2 "erator.pre_increment_result.lowp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007803, VkglTestCase_007803_1, VkglTestCase_007803_2);

#define VkglTestCase_007804_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007804_2 "erator.pre_increment_result.mediump_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007804, VkglTestCase_007804_1, VkglTestCase_007804_2);

#define VkglTestCase_007805_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007805_2 "rator.pre_increment_result.mediump_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007805, VkglTestCase_007805_1, VkglTestCase_007805_2);

#define VkglTestCase_007806_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007806_2 "perator.pre_increment_result.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007806, VkglTestCase_007806_1, VkglTestCase_007806_2);

#define VkglTestCase_007807_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007807_2 "erator.pre_increment_result.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007807, VkglTestCase_007807_1, VkglTestCase_007807_2);
