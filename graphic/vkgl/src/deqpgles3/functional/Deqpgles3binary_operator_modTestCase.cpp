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
#include "../ActsDeqpgles30009TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_008744_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_008744_2 "r.binary_operator.mod.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008744, VkglTestCase_008744_1, VkglTestCase_008744_2);

#define VkglTestCase_008745_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008745_2 ".binary_operator.mod.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008745, VkglTestCase_008745_1, VkglTestCase_008745_2);

#define VkglTestCase_008746_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008746_2 ".binary_operator.mod.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008746, VkglTestCase_008746_1, VkglTestCase_008746_2);

#define VkglTestCase_008747_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008747_2 "binary_operator.mod.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008747, VkglTestCase_008747_1, VkglTestCase_008747_2);

#define VkglTestCase_008748_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008748_2 ".binary_operator.mod.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008748, VkglTestCase_008748_1, VkglTestCase_008748_2);

#define VkglTestCase_008749_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008749_2 "binary_operator.mod.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008749, VkglTestCase_008749_1, VkglTestCase_008749_2);

#define VkglTestCase_008750_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008750_2 "binary_operator.mod.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008750, VkglTestCase_008750_1, VkglTestCase_008750_2);

#define VkglTestCase_008751_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008751_2 "inary_operator.mod.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008751, VkglTestCase_008751_1, VkglTestCase_008751_2);

#define VkglTestCase_008752_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008752_2 ".binary_operator.mod.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008752, VkglTestCase_008752_1, VkglTestCase_008752_2);

#define VkglTestCase_008753_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008753_2 "binary_operator.mod.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008753, VkglTestCase_008753_1, VkglTestCase_008753_2);

#define VkglTestCase_008754_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008754_2 "binary_operator.mod.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008754, VkglTestCase_008754_1, VkglTestCase_008754_2);

#define VkglTestCase_008755_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008755_2 "inary_operator.mod.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008755, VkglTestCase_008755_1, VkglTestCase_008755_2);

#define VkglTestCase_008756_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008756_2 ".binary_operator.mod.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008756, VkglTestCase_008756_1, VkglTestCase_008756_2);

#define VkglTestCase_008757_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008757_2 "binary_operator.mod.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008757, VkglTestCase_008757_1, VkglTestCase_008757_2);

#define VkglTestCase_008758_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008758_2 "binary_operator.mod.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008758, VkglTestCase_008758_1, VkglTestCase_008758_2);

#define VkglTestCase_008759_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008759_2 "inary_operator.mod.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008759, VkglTestCase_008759_1, VkglTestCase_008759_2);

#define VkglTestCase_008760_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_008760_2 "r.binary_operator.mod.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008760, VkglTestCase_008760_1, VkglTestCase_008760_2);

#define VkglTestCase_008761_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008761_2 ".binary_operator.mod.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008761, VkglTestCase_008761_1, VkglTestCase_008761_2);

#define VkglTestCase_008762_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008762_2 ".binary_operator.mod.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008762, VkglTestCase_008762_1, VkglTestCase_008762_2);

#define VkglTestCase_008763_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008763_2 "binary_operator.mod.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008763, VkglTestCase_008763_1, VkglTestCase_008763_2);

#define VkglTestCase_008764_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008764_2 ".binary_operator.mod.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008764, VkglTestCase_008764_1, VkglTestCase_008764_2);

#define VkglTestCase_008765_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008765_2 "binary_operator.mod.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008765, VkglTestCase_008765_1, VkglTestCase_008765_2);

#define VkglTestCase_008766_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008766_2 ".binary_operator.mod.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008766, VkglTestCase_008766_1, VkglTestCase_008766_2);

#define VkglTestCase_008767_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008767_2 "binary_operator.mod.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008767, VkglTestCase_008767_1, VkglTestCase_008767_2);

#define VkglTestCase_008768_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_008768_2 "r.binary_operator.mod.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008768, VkglTestCase_008768_1, VkglTestCase_008768_2);

#define VkglTestCase_008769_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008769_2 ".binary_operator.mod.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008769, VkglTestCase_008769_1, VkglTestCase_008769_2);

#define VkglTestCase_008770_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008770_2 "binary_operator.mod.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008770, VkglTestCase_008770_1, VkglTestCase_008770_2);

#define VkglTestCase_008771_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008771_2 "inary_operator.mod.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008771, VkglTestCase_008771_1, VkglTestCase_008771_2);

#define VkglTestCase_008772_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008772_2 ".binary_operator.mod.lowp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008772, VkglTestCase_008772_1, VkglTestCase_008772_2);

#define VkglTestCase_008773_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008773_2 "binary_operator.mod.lowp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008773, VkglTestCase_008773_1, VkglTestCase_008773_2);

#define VkglTestCase_008774_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008774_2 "binary_operator.mod.mediump_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008774, VkglTestCase_008774_1, VkglTestCase_008774_2);

#define VkglTestCase_008775_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008775_2 "inary_operator.mod.mediump_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008775, VkglTestCase_008775_1, VkglTestCase_008775_2);

#define VkglTestCase_008776_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008776_2 ".binary_operator.mod.lowp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008776, VkglTestCase_008776_1, VkglTestCase_008776_2);

#define VkglTestCase_008777_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008777_2 "binary_operator.mod.lowp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008777, VkglTestCase_008777_1, VkglTestCase_008777_2);

#define VkglTestCase_008778_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008778_2 "binary_operator.mod.mediump_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008778, VkglTestCase_008778_1, VkglTestCase_008778_2);

#define VkglTestCase_008779_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008779_2 "inary_operator.mod.mediump_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008779, VkglTestCase_008779_1, VkglTestCase_008779_2);

#define VkglTestCase_008780_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008780_2 ".binary_operator.mod.lowp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008780, VkglTestCase_008780_1, VkglTestCase_008780_2);

#define VkglTestCase_008781_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008781_2 "binary_operator.mod.lowp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008781, VkglTestCase_008781_1, VkglTestCase_008781_2);

#define VkglTestCase_008782_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008782_2 "binary_operator.mod.mediump_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008782, VkglTestCase_008782_1, VkglTestCase_008782_2);

#define VkglTestCase_008783_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008783_2 "inary_operator.mod.mediump_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008783, VkglTestCase_008783_1, VkglTestCase_008783_2);

#define VkglTestCase_008784_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008784_2 ".binary_operator.mod.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008784, VkglTestCase_008784_1, VkglTestCase_008784_2);

#define VkglTestCase_008785_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008785_2 "binary_operator.mod.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008785, VkglTestCase_008785_1, VkglTestCase_008785_2);

#define VkglTestCase_008786_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008786_2 ".binary_operator.mod.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008786, VkglTestCase_008786_1, VkglTestCase_008786_2);

#define VkglTestCase_008787_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008787_2 "binary_operator.mod.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008787, VkglTestCase_008787_1, VkglTestCase_008787_2);

#define VkglTestCase_008788_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008788_2 ".binary_operator.mod.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008788, VkglTestCase_008788_1, VkglTestCase_008788_2);

#define VkglTestCase_008789_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008789_2 "binary_operator.mod.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008789, VkglTestCase_008789_1, VkglTestCase_008789_2);

#define VkglTestCase_008790_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008790_2 ".binary_operator.mod.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008790, VkglTestCase_008790_1, VkglTestCase_008790_2);

#define VkglTestCase_008791_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008791_2 "binary_operator.mod.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008791, VkglTestCase_008791_1, VkglTestCase_008791_2);

#define VkglTestCase_008792_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008792_2 "inary_operator.mod.lowp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008792, VkglTestCase_008792_1, VkglTestCase_008792_2);

#define VkglTestCase_008793_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008793_2 "nary_operator.mod.lowp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008793, VkglTestCase_008793_1, VkglTestCase_008793_2);

#define VkglTestCase_008794_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008794_2 "nary_operator.mod.mediump_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008794, VkglTestCase_008794_1, VkglTestCase_008794_2);

#define VkglTestCase_008795_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008795_2 "ary_operator.mod.mediump_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008795, VkglTestCase_008795_1, VkglTestCase_008795_2);

#define VkglTestCase_008796_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008796_2 "inary_operator.mod.lowp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008796, VkglTestCase_008796_1, VkglTestCase_008796_2);

#define VkglTestCase_008797_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008797_2 "nary_operator.mod.lowp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008797, VkglTestCase_008797_1, VkglTestCase_008797_2);

#define VkglTestCase_008798_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008798_2 "nary_operator.mod.mediump_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008798, VkglTestCase_008798_1, VkglTestCase_008798_2);

#define VkglTestCase_008799_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008799_2 "ary_operator.mod.mediump_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008799, VkglTestCase_008799_1, VkglTestCase_008799_2);

#define VkglTestCase_008800_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008800_2 "inary_operator.mod.lowp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008800, VkglTestCase_008800_1, VkglTestCase_008800_2);

#define VkglTestCase_008801_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008801_2 "nary_operator.mod.lowp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008801, VkglTestCase_008801_1, VkglTestCase_008801_2);

#define VkglTestCase_008802_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008802_2 "nary_operator.mod.mediump_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008802, VkglTestCase_008802_1, VkglTestCase_008802_2);

#define VkglTestCase_008803_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008803_2 "ary_operator.mod.mediump_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008803, VkglTestCase_008803_1, VkglTestCase_008803_2);

#define VkglTestCase_008804_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008804_2 "inary_operator.mod.highp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008804, VkglTestCase_008804_1, VkglTestCase_008804_2);

#define VkglTestCase_008805_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008805_2 "nary_operator.mod.highp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008805, VkglTestCase_008805_1, VkglTestCase_008805_2);

#define VkglTestCase_008806_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008806_2 "inary_operator.mod.highp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008806, VkglTestCase_008806_1, VkglTestCase_008806_2);

#define VkglTestCase_008807_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008807_2 "nary_operator.mod.highp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008807, VkglTestCase_008807_1, VkglTestCase_008807_2);

#define VkglTestCase_008808_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008808_2 "inary_operator.mod.highp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008808, VkglTestCase_008808_1, VkglTestCase_008808_2);

#define VkglTestCase_008809_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008809_2 "nary_operator.mod.highp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008809, VkglTestCase_008809_1, VkglTestCase_008809_2);

#define VkglTestCase_008810_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008810_2 "inary_operator.mod.lowp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008810, VkglTestCase_008810_1, VkglTestCase_008810_2);

#define VkglTestCase_008811_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008811_2 "nary_operator.mod.lowp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008811, VkglTestCase_008811_1, VkglTestCase_008811_2);

#define VkglTestCase_008812_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008812_2 "ary_operator.mod.mediump_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008812, VkglTestCase_008812_1, VkglTestCase_008812_2);

#define VkglTestCase_008813_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008813_2 "ry_operator.mod.mediump_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008813, VkglTestCase_008813_1, VkglTestCase_008813_2);

#define VkglTestCase_008814_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008814_2 "inary_operator.mod.lowp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008814, VkglTestCase_008814_1, VkglTestCase_008814_2);

#define VkglTestCase_008815_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008815_2 "nary_operator.mod.lowp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008815, VkglTestCase_008815_1, VkglTestCase_008815_2);

#define VkglTestCase_008816_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008816_2 "ary_operator.mod.mediump_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008816, VkglTestCase_008816_1, VkglTestCase_008816_2);

#define VkglTestCase_008817_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008817_2 "ry_operator.mod.mediump_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008817, VkglTestCase_008817_1, VkglTestCase_008817_2);

#define VkglTestCase_008818_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008818_2 "inary_operator.mod.lowp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008818, VkglTestCase_008818_1, VkglTestCase_008818_2);

#define VkglTestCase_008819_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008819_2 "nary_operator.mod.lowp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008819, VkglTestCase_008819_1, VkglTestCase_008819_2);

#define VkglTestCase_008820_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008820_2 "ary_operator.mod.mediump_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008820, VkglTestCase_008820_1, VkglTestCase_008820_2);

#define VkglTestCase_008821_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008821_2 "ry_operator.mod.mediump_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008821, VkglTestCase_008821_1, VkglTestCase_008821_2);

#define VkglTestCase_008822_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008822_2 "nary_operator.mod.highp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008822, VkglTestCase_008822_1, VkglTestCase_008822_2);

#define VkglTestCase_008823_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008823_2 "ary_operator.mod.highp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008823, VkglTestCase_008823_1, VkglTestCase_008823_2);

#define VkglTestCase_008824_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008824_2 "nary_operator.mod.highp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008824, VkglTestCase_008824_1, VkglTestCase_008824_2);

#define VkglTestCase_008825_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008825_2 "ary_operator.mod.highp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008825, VkglTestCase_008825_1, VkglTestCase_008825_2);

#define VkglTestCase_008826_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008826_2 "nary_operator.mod.highp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008826, VkglTestCase_008826_1, VkglTestCase_008826_2);

#define VkglTestCase_008827_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008827_2 "ary_operator.mod.highp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008827, VkglTestCase_008827_1, VkglTestCase_008827_2);

#define VkglTestCase_008828_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008828_2 "inary_operator.mod.lowp_int_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008828, VkglTestCase_008828_1, VkglTestCase_008828_2);

#define VkglTestCase_008829_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008829_2 "nary_operator.mod.lowp_int_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008829, VkglTestCase_008829_1, VkglTestCase_008829_2);

#define VkglTestCase_008830_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008830_2 "nary_operator.mod.mediump_int_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008830, VkglTestCase_008830_1, VkglTestCase_008830_2);

#define VkglTestCase_008831_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008831_2 "ary_operator.mod.mediump_int_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008831, VkglTestCase_008831_1, VkglTestCase_008831_2);

#define VkglTestCase_008832_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008832_2 "inary_operator.mod.lowp_int_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008832, VkglTestCase_008832_1, VkglTestCase_008832_2);

#define VkglTestCase_008833_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008833_2 "nary_operator.mod.lowp_int_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008833, VkglTestCase_008833_1, VkglTestCase_008833_2);

#define VkglTestCase_008834_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008834_2 "nary_operator.mod.mediump_int_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008834, VkglTestCase_008834_1, VkglTestCase_008834_2);

#define VkglTestCase_008835_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008835_2 "ary_operator.mod.mediump_int_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008835, VkglTestCase_008835_1, VkglTestCase_008835_2);

#define VkglTestCase_008836_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008836_2 "inary_operator.mod.lowp_int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008836, VkglTestCase_008836_1, VkglTestCase_008836_2);

#define VkglTestCase_008837_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008837_2 "nary_operator.mod.lowp_int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008837, VkglTestCase_008837_1, VkglTestCase_008837_2);

#define VkglTestCase_008838_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008838_2 "nary_operator.mod.mediump_int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008838, VkglTestCase_008838_1, VkglTestCase_008838_2);

#define VkglTestCase_008839_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008839_2 "ary_operator.mod.mediump_int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008839, VkglTestCase_008839_1, VkglTestCase_008839_2);

#define VkglTestCase_008840_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008840_2 "inary_operator.mod.highp_int_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008840, VkglTestCase_008840_1, VkglTestCase_008840_2);

#define VkglTestCase_008841_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008841_2 "nary_operator.mod.highp_int_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008841, VkglTestCase_008841_1, VkglTestCase_008841_2);

#define VkglTestCase_008842_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008842_2 "inary_operator.mod.highp_int_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008842, VkglTestCase_008842_1, VkglTestCase_008842_2);

#define VkglTestCase_008843_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008843_2 "nary_operator.mod.highp_int_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008843, VkglTestCase_008843_1, VkglTestCase_008843_2);

#define VkglTestCase_008844_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008844_2 "inary_operator.mod.highp_int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008844, VkglTestCase_008844_1, VkglTestCase_008844_2);

#define VkglTestCase_008845_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008845_2 "nary_operator.mod.highp_int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008845, VkglTestCase_008845_1, VkglTestCase_008845_2);

#define VkglTestCase_008846_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008846_2 "inary_operator.mod.lowp_uint_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008846, VkglTestCase_008846_1, VkglTestCase_008846_2);

#define VkglTestCase_008847_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008847_2 "nary_operator.mod.lowp_uint_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008847, VkglTestCase_008847_1, VkglTestCase_008847_2);

#define VkglTestCase_008848_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008848_2 "ary_operator.mod.mediump_uint_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008848, VkglTestCase_008848_1, VkglTestCase_008848_2);

#define VkglTestCase_008849_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008849_2 "ry_operator.mod.mediump_uint_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008849, VkglTestCase_008849_1, VkglTestCase_008849_2);

#define VkglTestCase_008850_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008850_2 "inary_operator.mod.lowp_uint_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008850, VkglTestCase_008850_1, VkglTestCase_008850_2);

#define VkglTestCase_008851_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008851_2 "nary_operator.mod.lowp_uint_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008851, VkglTestCase_008851_1, VkglTestCase_008851_2);

#define VkglTestCase_008852_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008852_2 "ary_operator.mod.mediump_uint_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008852, VkglTestCase_008852_1, VkglTestCase_008852_2);

#define VkglTestCase_008853_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008853_2 "ry_operator.mod.mediump_uint_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008853, VkglTestCase_008853_1, VkglTestCase_008853_2);

#define VkglTestCase_008854_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008854_2 "inary_operator.mod.lowp_uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008854, VkglTestCase_008854_1, VkglTestCase_008854_2);

#define VkglTestCase_008855_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008855_2 "nary_operator.mod.lowp_uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008855, VkglTestCase_008855_1, VkglTestCase_008855_2);

#define VkglTestCase_008856_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008856_2 "ary_operator.mod.mediump_uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008856, VkglTestCase_008856_1, VkglTestCase_008856_2);

#define VkglTestCase_008857_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008857_2 "ry_operator.mod.mediump_uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008857, VkglTestCase_008857_1, VkglTestCase_008857_2);

#define VkglTestCase_008858_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008858_2 "nary_operator.mod.highp_uint_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008858, VkglTestCase_008858_1, VkglTestCase_008858_2);

#define VkglTestCase_008859_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008859_2 "ary_operator.mod.highp_uint_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008859, VkglTestCase_008859_1, VkglTestCase_008859_2);

#define VkglTestCase_008860_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008860_2 "nary_operator.mod.highp_uint_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008860, VkglTestCase_008860_1, VkglTestCase_008860_2);

#define VkglTestCase_008861_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008861_2 "ary_operator.mod.highp_uint_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008861, VkglTestCase_008861_1, VkglTestCase_008861_2);

#define VkglTestCase_008862_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008862_2 "nary_operator.mod.highp_uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008862, VkglTestCase_008862_1, VkglTestCase_008862_2);

#define VkglTestCase_008863_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008863_2 "ary_operator.mod.highp_uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008863, VkglTestCase_008863_1, VkglTestCase_008863_2);
