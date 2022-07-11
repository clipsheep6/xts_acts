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
#include "../ActsDeqpgles30012TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_011744_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011744_2 "ator.right_shift_assign_result.lowp_int_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011744, VkglTestCase_011744_1, VkglTestCase_011744_2);

#define VkglTestCase_011745_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011745_2 "tor.right_shift_assign_result.lowp_int_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011745, VkglTestCase_011745_1, VkglTestCase_011745_2);

#define VkglTestCase_011746_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011746_2 "or.right_shift_assign_result.mediump_int_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011746, VkglTestCase_011746_1, VkglTestCase_011746_2);

#define VkglTestCase_011747_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011747_2 "r.right_shift_assign_result.mediump_int_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011747, VkglTestCase_011747_1, VkglTestCase_011747_2);

#define VkglTestCase_011748_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011748_2 "or.right_shift_assign_result.lowp_ivec2_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011748, VkglTestCase_011748_1, VkglTestCase_011748_2);

#define VkglTestCase_011749_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011749_2 "r.right_shift_assign_result.lowp_ivec2_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011749, VkglTestCase_011749_1, VkglTestCase_011749_2);

#define VkglTestCase_011750_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011750_2 "r.right_shift_assign_result.mediump_ivec2_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011750, VkglTestCase_011750_1, VkglTestCase_011750_2);

#define VkglTestCase_011751_1 "dEQP-GLES3.functional.shaders.operator.binary_operator"
#define VkglTestCase_011751_2 ".right_shift_assign_result.mediump_ivec2_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011751, VkglTestCase_011751_1, VkglTestCase_011751_2);

#define VkglTestCase_011752_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011752_2 "or.right_shift_assign_result.lowp_ivec3_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011752, VkglTestCase_011752_1, VkglTestCase_011752_2);

#define VkglTestCase_011753_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011753_2 "r.right_shift_assign_result.lowp_ivec3_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011753, VkglTestCase_011753_1, VkglTestCase_011753_2);

#define VkglTestCase_011754_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011754_2 "r.right_shift_assign_result.mediump_ivec3_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011754, VkglTestCase_011754_1, VkglTestCase_011754_2);

#define VkglTestCase_011755_1 "dEQP-GLES3.functional.shaders.operator.binary_operator"
#define VkglTestCase_011755_2 ".right_shift_assign_result.mediump_ivec3_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011755, VkglTestCase_011755_1, VkglTestCase_011755_2);

#define VkglTestCase_011756_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011756_2 "or.right_shift_assign_result.lowp_ivec4_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011756, VkglTestCase_011756_1, VkglTestCase_011756_2);

#define VkglTestCase_011757_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011757_2 "r.right_shift_assign_result.lowp_ivec4_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011757, VkglTestCase_011757_1, VkglTestCase_011757_2);

#define VkglTestCase_011758_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011758_2 "r.right_shift_assign_result.mediump_ivec4_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011758, VkglTestCase_011758_1, VkglTestCase_011758_2);

#define VkglTestCase_011759_1 "dEQP-GLES3.functional.shaders.operator.binary_operator"
#define VkglTestCase_011759_2 ".right_shift_assign_result.mediump_ivec4_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011759, VkglTestCase_011759_1, VkglTestCase_011759_2);

#define VkglTestCase_011760_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011760_2 "tor.right_shift_assign_result.highp_int_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011760, VkglTestCase_011760_1, VkglTestCase_011760_2);

#define VkglTestCase_011761_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011761_2 "or.right_shift_assign_result.highp_int_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011761, VkglTestCase_011761_1, VkglTestCase_011761_2);

#define VkglTestCase_011762_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011762_2 "or.right_shift_assign_result.highp_ivec2_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011762, VkglTestCase_011762_1, VkglTestCase_011762_2);

#define VkglTestCase_011763_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011763_2 "r.right_shift_assign_result.highp_ivec2_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011763, VkglTestCase_011763_1, VkglTestCase_011763_2);

#define VkglTestCase_011764_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011764_2 "or.right_shift_assign_result.highp_ivec3_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011764, VkglTestCase_011764_1, VkglTestCase_011764_2);

#define VkglTestCase_011765_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011765_2 "r.right_shift_assign_result.highp_ivec3_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011765, VkglTestCase_011765_1, VkglTestCase_011765_2);

#define VkglTestCase_011766_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011766_2 "or.right_shift_assign_result.highp_ivec4_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011766, VkglTestCase_011766_1, VkglTestCase_011766_2);

#define VkglTestCase_011767_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011767_2 "r.right_shift_assign_result.highp_ivec4_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011767, VkglTestCase_011767_1, VkglTestCase_011767_2);

#define VkglTestCase_011768_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011768_2 "erator.right_shift_assign_result.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011768, VkglTestCase_011768_1, VkglTestCase_011768_2);

#define VkglTestCase_011769_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011769_2 "rator.right_shift_assign_result.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011769, VkglTestCase_011769_1, VkglTestCase_011769_2);

#define VkglTestCase_011770_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011770_2 "ator.right_shift_assign_result.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011770, VkglTestCase_011770_1, VkglTestCase_011770_2);

#define VkglTestCase_011771_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011771_2 "tor.right_shift_assign_result.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011771, VkglTestCase_011771_1, VkglTestCase_011771_2);

#define VkglTestCase_011772_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011772_2 "rator.right_shift_assign_result.lowp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011772, VkglTestCase_011772_1, VkglTestCase_011772_2);

#define VkglTestCase_011773_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011773_2 "ator.right_shift_assign_result.lowp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011773, VkglTestCase_011773_1, VkglTestCase_011773_2);

#define VkglTestCase_011774_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011774_2 "ator.right_shift_assign_result.mediump_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011774, VkglTestCase_011774_1, VkglTestCase_011774_2);

#define VkglTestCase_011775_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011775_2 "tor.right_shift_assign_result.mediump_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011775, VkglTestCase_011775_1, VkglTestCase_011775_2);

#define VkglTestCase_011776_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011776_2 "rator.right_shift_assign_result.lowp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011776, VkglTestCase_011776_1, VkglTestCase_011776_2);

#define VkglTestCase_011777_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011777_2 "ator.right_shift_assign_result.lowp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011777, VkglTestCase_011777_1, VkglTestCase_011777_2);

#define VkglTestCase_011778_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011778_2 "ator.right_shift_assign_result.mediump_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011778, VkglTestCase_011778_1, VkglTestCase_011778_2);

#define VkglTestCase_011779_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011779_2 "tor.right_shift_assign_result.mediump_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011779, VkglTestCase_011779_1, VkglTestCase_011779_2);

#define VkglTestCase_011780_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011780_2 "rator.right_shift_assign_result.lowp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011780, VkglTestCase_011780_1, VkglTestCase_011780_2);

#define VkglTestCase_011781_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011781_2 "ator.right_shift_assign_result.lowp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011781, VkglTestCase_011781_1, VkglTestCase_011781_2);

#define VkglTestCase_011782_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011782_2 "ator.right_shift_assign_result.mediump_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011782, VkglTestCase_011782_1, VkglTestCase_011782_2);

#define VkglTestCase_011783_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011783_2 "tor.right_shift_assign_result.mediump_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011783, VkglTestCase_011783_1, VkglTestCase_011783_2);

#define VkglTestCase_011784_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011784_2 "rator.right_shift_assign_result.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011784, VkglTestCase_011784_1, VkglTestCase_011784_2);

#define VkglTestCase_011785_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011785_2 "ator.right_shift_assign_result.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011785, VkglTestCase_011785_1, VkglTestCase_011785_2);

#define VkglTestCase_011786_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011786_2 "rator.right_shift_assign_result.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011786, VkglTestCase_011786_1, VkglTestCase_011786_2);

#define VkglTestCase_011787_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011787_2 "ator.right_shift_assign_result.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011787, VkglTestCase_011787_1, VkglTestCase_011787_2);

#define VkglTestCase_011788_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011788_2 "rator.right_shift_assign_result.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011788, VkglTestCase_011788_1, VkglTestCase_011788_2);

#define VkglTestCase_011789_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011789_2 "ator.right_shift_assign_result.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011789, VkglTestCase_011789_1, VkglTestCase_011789_2);

#define VkglTestCase_011790_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011790_2 "rator.right_shift_assign_result.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011790, VkglTestCase_011790_1, VkglTestCase_011790_2);

#define VkglTestCase_011791_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011791_2 "ator.right_shift_assign_result.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011791, VkglTestCase_011791_1, VkglTestCase_011791_2);

#define VkglTestCase_011792_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011792_2 "tor.right_shift_assign_result.lowp_ivec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011792, VkglTestCase_011792_1, VkglTestCase_011792_2);

#define VkglTestCase_011793_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011793_2 "or.right_shift_assign_result.lowp_ivec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011793, VkglTestCase_011793_1, VkglTestCase_011793_2);

#define VkglTestCase_011794_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011794_2 "r.right_shift_assign_result.mediump_ivec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011794, VkglTestCase_011794_1, VkglTestCase_011794_2);

#define VkglTestCase_011795_1 "dEQP-GLES3.functional.shaders.operator.binary_operator"
#define VkglTestCase_011795_2 ".right_shift_assign_result.mediump_ivec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011795, VkglTestCase_011795_1, VkglTestCase_011795_2);

#define VkglTestCase_011796_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011796_2 "tor.right_shift_assign_result.lowp_ivec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011796, VkglTestCase_011796_1, VkglTestCase_011796_2);

#define VkglTestCase_011797_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011797_2 "or.right_shift_assign_result.lowp_ivec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011797, VkglTestCase_011797_1, VkglTestCase_011797_2);

#define VkglTestCase_011798_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011798_2 "r.right_shift_assign_result.mediump_ivec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011798, VkglTestCase_011798_1, VkglTestCase_011798_2);

#define VkglTestCase_011799_1 "dEQP-GLES3.functional.shaders.operator.binary_operator"
#define VkglTestCase_011799_2 ".right_shift_assign_result.mediump_ivec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011799, VkglTestCase_011799_1, VkglTestCase_011799_2);

#define VkglTestCase_011800_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011800_2 "tor.right_shift_assign_result.lowp_ivec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011800, VkglTestCase_011800_1, VkglTestCase_011800_2);

#define VkglTestCase_011801_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011801_2 "or.right_shift_assign_result.lowp_ivec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011801, VkglTestCase_011801_1, VkglTestCase_011801_2);

#define VkglTestCase_011802_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011802_2 "r.right_shift_assign_result.mediump_ivec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011802, VkglTestCase_011802_1, VkglTestCase_011802_2);

#define VkglTestCase_011803_1 "dEQP-GLES3.functional.shaders.operator.binary_operator"
#define VkglTestCase_011803_2 ".right_shift_assign_result.mediump_ivec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011803, VkglTestCase_011803_1, VkglTestCase_011803_2);

#define VkglTestCase_011804_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011804_2 "or.right_shift_assign_result.highp_ivec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011804, VkglTestCase_011804_1, VkglTestCase_011804_2);

#define VkglTestCase_011805_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011805_2 "r.right_shift_assign_result.highp_ivec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011805, VkglTestCase_011805_1, VkglTestCase_011805_2);

#define VkglTestCase_011806_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011806_2 "or.right_shift_assign_result.highp_ivec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011806, VkglTestCase_011806_1, VkglTestCase_011806_2);

#define VkglTestCase_011807_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011807_2 "r.right_shift_assign_result.highp_ivec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011807, VkglTestCase_011807_1, VkglTestCase_011807_2);

#define VkglTestCase_011808_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011808_2 "or.right_shift_assign_result.highp_ivec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011808, VkglTestCase_011808_1, VkglTestCase_011808_2);

#define VkglTestCase_011809_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011809_2 "r.right_shift_assign_result.highp_ivec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011809, VkglTestCase_011809_1, VkglTestCase_011809_2);

#define VkglTestCase_011810_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011810_2 "tor.right_shift_assign_result.lowp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011810, VkglTestCase_011810_1, VkglTestCase_011810_2);

#define VkglTestCase_011811_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011811_2 "or.right_shift_assign_result.lowp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011811, VkglTestCase_011811_1, VkglTestCase_011811_2);

#define VkglTestCase_011812_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011812_2 "r.right_shift_assign_result.mediump_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011812, VkglTestCase_011812_1, VkglTestCase_011812_2);

#define VkglTestCase_011813_1 "dEQP-GLES3.functional.shaders.operator.binary_operator"
#define VkglTestCase_011813_2 ".right_shift_assign_result.mediump_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011813, VkglTestCase_011813_1, VkglTestCase_011813_2);

#define VkglTestCase_011814_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011814_2 "tor.right_shift_assign_result.lowp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011814, VkglTestCase_011814_1, VkglTestCase_011814_2);

#define VkglTestCase_011815_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011815_2 "or.right_shift_assign_result.lowp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011815, VkglTestCase_011815_1, VkglTestCase_011815_2);

#define VkglTestCase_011816_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011816_2 "r.right_shift_assign_result.mediump_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011816, VkglTestCase_011816_1, VkglTestCase_011816_2);

#define VkglTestCase_011817_1 "dEQP-GLES3.functional.shaders.operator.binary_operator"
#define VkglTestCase_011817_2 ".right_shift_assign_result.mediump_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011817, VkglTestCase_011817_1, VkglTestCase_011817_2);

#define VkglTestCase_011818_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011818_2 "tor.right_shift_assign_result.lowp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011818, VkglTestCase_011818_1, VkglTestCase_011818_2);

#define VkglTestCase_011819_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011819_2 "or.right_shift_assign_result.lowp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011819, VkglTestCase_011819_1, VkglTestCase_011819_2);

#define VkglTestCase_011820_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011820_2 "r.right_shift_assign_result.mediump_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011820, VkglTestCase_011820_1, VkglTestCase_011820_2);

#define VkglTestCase_011821_1 "dEQP-GLES3.functional.shaders.operator.binary_operator"
#define VkglTestCase_011821_2 ".right_shift_assign_result.mediump_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011821, VkglTestCase_011821_1, VkglTestCase_011821_2);

#define VkglTestCase_011822_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011822_2 "or.right_shift_assign_result.highp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011822, VkglTestCase_011822_1, VkglTestCase_011822_2);

#define VkglTestCase_011823_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011823_2 "r.right_shift_assign_result.highp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011823, VkglTestCase_011823_1, VkglTestCase_011823_2);

#define VkglTestCase_011824_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011824_2 "or.right_shift_assign_result.highp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011824, VkglTestCase_011824_1, VkglTestCase_011824_2);

#define VkglTestCase_011825_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011825_2 "r.right_shift_assign_result.highp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011825, VkglTestCase_011825_1, VkglTestCase_011825_2);

#define VkglTestCase_011826_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011826_2 "or.right_shift_assign_result.highp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011826, VkglTestCase_011826_1, VkglTestCase_011826_2);

#define VkglTestCase_011827_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011827_2 "r.right_shift_assign_result.highp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011827, VkglTestCase_011827_1, VkglTestCase_011827_2);

#define VkglTestCase_011828_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011828_2 "erator.right_shift_assign_result.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011828, VkglTestCase_011828_1, VkglTestCase_011828_2);

#define VkglTestCase_011829_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011829_2 "rator.right_shift_assign_result.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011829, VkglTestCase_011829_1, VkglTestCase_011829_2);

#define VkglTestCase_011830_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011830_2 "rator.right_shift_assign_result.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011830, VkglTestCase_011830_1, VkglTestCase_011830_2);

#define VkglTestCase_011831_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011831_2 "ator.right_shift_assign_result.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011831, VkglTestCase_011831_1, VkglTestCase_011831_2);

#define VkglTestCase_011832_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011832_2 "rator.right_shift_assign_result.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011832, VkglTestCase_011832_1, VkglTestCase_011832_2);

#define VkglTestCase_011833_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011833_2 "ator.right_shift_assign_result.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011833, VkglTestCase_011833_1, VkglTestCase_011833_2);

#define VkglTestCase_011834_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011834_2 "ator.right_shift_assign_result.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011834, VkglTestCase_011834_1, VkglTestCase_011834_2);

#define VkglTestCase_011835_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011835_2 "tor.right_shift_assign_result.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011835, VkglTestCase_011835_1, VkglTestCase_011835_2);

#define VkglTestCase_011836_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011836_2 "rator.right_shift_assign_result.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011836, VkglTestCase_011836_1, VkglTestCase_011836_2);

#define VkglTestCase_011837_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011837_2 "ator.right_shift_assign_result.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011837, VkglTestCase_011837_1, VkglTestCase_011837_2);

#define VkglTestCase_011838_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011838_2 "ator.right_shift_assign_result.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011838, VkglTestCase_011838_1, VkglTestCase_011838_2);

#define VkglTestCase_011839_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011839_2 "tor.right_shift_assign_result.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011839, VkglTestCase_011839_1, VkglTestCase_011839_2);

#define VkglTestCase_011840_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011840_2 "rator.right_shift_assign_result.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011840, VkglTestCase_011840_1, VkglTestCase_011840_2);

#define VkglTestCase_011841_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011841_2 "ator.right_shift_assign_result.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011841, VkglTestCase_011841_1, VkglTestCase_011841_2);

#define VkglTestCase_011842_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011842_2 "ator.right_shift_assign_result.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011842, VkglTestCase_011842_1, VkglTestCase_011842_2);

#define VkglTestCase_011843_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011843_2 "tor.right_shift_assign_result.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011843, VkglTestCase_011843_1, VkglTestCase_011843_2);

#define VkglTestCase_011844_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011844_2 "erator.right_shift_assign_result.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011844, VkglTestCase_011844_1, VkglTestCase_011844_2);

#define VkglTestCase_011845_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011845_2 "rator.right_shift_assign_result.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011845, VkglTestCase_011845_1, VkglTestCase_011845_2);

#define VkglTestCase_011846_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011846_2 "rator.right_shift_assign_result.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011846, VkglTestCase_011846_1, VkglTestCase_011846_2);

#define VkglTestCase_011847_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011847_2 "ator.right_shift_assign_result.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011847, VkglTestCase_011847_1, VkglTestCase_011847_2);

#define VkglTestCase_011848_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011848_2 "rator.right_shift_assign_result.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011848, VkglTestCase_011848_1, VkglTestCase_011848_2);

#define VkglTestCase_011849_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011849_2 "ator.right_shift_assign_result.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011849, VkglTestCase_011849_1, VkglTestCase_011849_2);

#define VkglTestCase_011850_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011850_2 "rator.right_shift_assign_result.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011850, VkglTestCase_011850_1, VkglTestCase_011850_2);

#define VkglTestCase_011851_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011851_2 "ator.right_shift_assign_result.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011851, VkglTestCase_011851_1, VkglTestCase_011851_2);

#define VkglTestCase_011852_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011852_2 "ator.right_shift_assign_result.lowp_uint_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011852, VkglTestCase_011852_1, VkglTestCase_011852_2);

#define VkglTestCase_011853_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011853_2 "tor.right_shift_assign_result.lowp_uint_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011853, VkglTestCase_011853_1, VkglTestCase_011853_2);

#define VkglTestCase_011854_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011854_2 "or.right_shift_assign_result.mediump_uint_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011854, VkglTestCase_011854_1, VkglTestCase_011854_2);

#define VkglTestCase_011855_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011855_2 "r.right_shift_assign_result.mediump_uint_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011855, VkglTestCase_011855_1, VkglTestCase_011855_2);

#define VkglTestCase_011856_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011856_2 "or.right_shift_assign_result.lowp_uvec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011856, VkglTestCase_011856_1, VkglTestCase_011856_2);

#define VkglTestCase_011857_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011857_2 "r.right_shift_assign_result.lowp_uvec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011857, VkglTestCase_011857_1, VkglTestCase_011857_2);

#define VkglTestCase_011858_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011858_2 "r.right_shift_assign_result.mediump_uvec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011858, VkglTestCase_011858_1, VkglTestCase_011858_2);

#define VkglTestCase_011859_1 "dEQP-GLES3.functional.shaders.operator.binary_operator"
#define VkglTestCase_011859_2 ".right_shift_assign_result.mediump_uvec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011859, VkglTestCase_011859_1, VkglTestCase_011859_2);

#define VkglTestCase_011860_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011860_2 "or.right_shift_assign_result.lowp_uvec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011860, VkglTestCase_011860_1, VkglTestCase_011860_2);

#define VkglTestCase_011861_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011861_2 "r.right_shift_assign_result.lowp_uvec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011861, VkglTestCase_011861_1, VkglTestCase_011861_2);

#define VkglTestCase_011862_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011862_2 "r.right_shift_assign_result.mediump_uvec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011862, VkglTestCase_011862_1, VkglTestCase_011862_2);

#define VkglTestCase_011863_1 "dEQP-GLES3.functional.shaders.operator.binary_operator"
#define VkglTestCase_011863_2 ".right_shift_assign_result.mediump_uvec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011863, VkglTestCase_011863_1, VkglTestCase_011863_2);

#define VkglTestCase_011864_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011864_2 "or.right_shift_assign_result.lowp_uvec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011864, VkglTestCase_011864_1, VkglTestCase_011864_2);

#define VkglTestCase_011865_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011865_2 "r.right_shift_assign_result.lowp_uvec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011865, VkglTestCase_011865_1, VkglTestCase_011865_2);

#define VkglTestCase_011866_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011866_2 "r.right_shift_assign_result.mediump_uvec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011866, VkglTestCase_011866_1, VkglTestCase_011866_2);

#define VkglTestCase_011867_1 "dEQP-GLES3.functional.shaders.operator.binary_operator"
#define VkglTestCase_011867_2 ".right_shift_assign_result.mediump_uvec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011867, VkglTestCase_011867_1, VkglTestCase_011867_2);

#define VkglTestCase_011868_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011868_2 "tor.right_shift_assign_result.highp_uint_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011868, VkglTestCase_011868_1, VkglTestCase_011868_2);

#define VkglTestCase_011869_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011869_2 "or.right_shift_assign_result.highp_uint_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011869, VkglTestCase_011869_1, VkglTestCase_011869_2);

#define VkglTestCase_011870_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011870_2 "or.right_shift_assign_result.highp_uvec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011870, VkglTestCase_011870_1, VkglTestCase_011870_2);

#define VkglTestCase_011871_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011871_2 "r.right_shift_assign_result.highp_uvec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011871, VkglTestCase_011871_1, VkglTestCase_011871_2);

#define VkglTestCase_011872_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011872_2 "or.right_shift_assign_result.highp_uvec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011872, VkglTestCase_011872_1, VkglTestCase_011872_2);

#define VkglTestCase_011873_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011873_2 "r.right_shift_assign_result.highp_uvec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011873, VkglTestCase_011873_1, VkglTestCase_011873_2);

#define VkglTestCase_011874_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011874_2 "or.right_shift_assign_result.highp_uvec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011874, VkglTestCase_011874_1, VkglTestCase_011874_2);

#define VkglTestCase_011875_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011875_2 "r.right_shift_assign_result.highp_uvec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011875, VkglTestCase_011875_1, VkglTestCase_011875_2);

#define VkglTestCase_011876_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011876_2 "tor.right_shift_assign_result.lowp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011876, VkglTestCase_011876_1, VkglTestCase_011876_2);

#define VkglTestCase_011877_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011877_2 "or.right_shift_assign_result.lowp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011877, VkglTestCase_011877_1, VkglTestCase_011877_2);

#define VkglTestCase_011878_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011878_2 "or.right_shift_assign_result.mediump_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011878, VkglTestCase_011878_1, VkglTestCase_011878_2);

#define VkglTestCase_011879_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011879_2 "r.right_shift_assign_result.mediump_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011879, VkglTestCase_011879_1, VkglTestCase_011879_2);

#define VkglTestCase_011880_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011880_2 "tor.right_shift_assign_result.lowp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011880, VkglTestCase_011880_1, VkglTestCase_011880_2);

#define VkglTestCase_011881_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011881_2 "or.right_shift_assign_result.lowp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011881, VkglTestCase_011881_1, VkglTestCase_011881_2);

#define VkglTestCase_011882_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011882_2 "or.right_shift_assign_result.mediump_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011882, VkglTestCase_011882_1, VkglTestCase_011882_2);

#define VkglTestCase_011883_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011883_2 "r.right_shift_assign_result.mediump_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011883, VkglTestCase_011883_1, VkglTestCase_011883_2);

#define VkglTestCase_011884_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011884_2 "tor.right_shift_assign_result.lowp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011884, VkglTestCase_011884_1, VkglTestCase_011884_2);

#define VkglTestCase_011885_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011885_2 "or.right_shift_assign_result.lowp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011885, VkglTestCase_011885_1, VkglTestCase_011885_2);

#define VkglTestCase_011886_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011886_2 "or.right_shift_assign_result.mediump_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011886, VkglTestCase_011886_1, VkglTestCase_011886_2);

#define VkglTestCase_011887_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011887_2 "r.right_shift_assign_result.mediump_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011887, VkglTestCase_011887_1, VkglTestCase_011887_2);

#define VkglTestCase_011888_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011888_2 "tor.right_shift_assign_result.highp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011888, VkglTestCase_011888_1, VkglTestCase_011888_2);

#define VkglTestCase_011889_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011889_2 "or.right_shift_assign_result.highp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011889, VkglTestCase_011889_1, VkglTestCase_011889_2);

#define VkglTestCase_011890_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011890_2 "tor.right_shift_assign_result.highp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011890, VkglTestCase_011890_1, VkglTestCase_011890_2);

#define VkglTestCase_011891_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011891_2 "or.right_shift_assign_result.highp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011891, VkglTestCase_011891_1, VkglTestCase_011891_2);

#define VkglTestCase_011892_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011892_2 "tor.right_shift_assign_result.highp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011892, VkglTestCase_011892_1, VkglTestCase_011892_2);

#define VkglTestCase_011893_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011893_2 "or.right_shift_assign_result.highp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011893, VkglTestCase_011893_1, VkglTestCase_011893_2);

#define VkglTestCase_011894_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011894_2 "tor.right_shift_assign_result.lowp_uvec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011894, VkglTestCase_011894_1, VkglTestCase_011894_2);

#define VkglTestCase_011895_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011895_2 "or.right_shift_assign_result.lowp_uvec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011895, VkglTestCase_011895_1, VkglTestCase_011895_2);

#define VkglTestCase_011896_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011896_2 "or.right_shift_assign_result.mediump_uvec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011896, VkglTestCase_011896_1, VkglTestCase_011896_2);

#define VkglTestCase_011897_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011897_2 "r.right_shift_assign_result.mediump_uvec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011897, VkglTestCase_011897_1, VkglTestCase_011897_2);

#define VkglTestCase_011898_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011898_2 "tor.right_shift_assign_result.lowp_uvec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011898, VkglTestCase_011898_1, VkglTestCase_011898_2);

#define VkglTestCase_011899_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011899_2 "or.right_shift_assign_result.lowp_uvec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011899, VkglTestCase_011899_1, VkglTestCase_011899_2);

#define VkglTestCase_011900_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011900_2 "or.right_shift_assign_result.mediump_uvec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011900, VkglTestCase_011900_1, VkglTestCase_011900_2);

#define VkglTestCase_011901_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011901_2 "r.right_shift_assign_result.mediump_uvec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011901, VkglTestCase_011901_1, VkglTestCase_011901_2);

#define VkglTestCase_011902_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011902_2 "tor.right_shift_assign_result.lowp_uvec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011902, VkglTestCase_011902_1, VkglTestCase_011902_2);

#define VkglTestCase_011903_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011903_2 "or.right_shift_assign_result.lowp_uvec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011903, VkglTestCase_011903_1, VkglTestCase_011903_2);

#define VkglTestCase_011904_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011904_2 "or.right_shift_assign_result.mediump_uvec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011904, VkglTestCase_011904_1, VkglTestCase_011904_2);

#define VkglTestCase_011905_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011905_2 "r.right_shift_assign_result.mediump_uvec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011905, VkglTestCase_011905_1, VkglTestCase_011905_2);

#define VkglTestCase_011906_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011906_2 "tor.right_shift_assign_result.highp_uvec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011906, VkglTestCase_011906_1, VkglTestCase_011906_2);

#define VkglTestCase_011907_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011907_2 "or.right_shift_assign_result.highp_uvec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011907, VkglTestCase_011907_1, VkglTestCase_011907_2);

#define VkglTestCase_011908_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011908_2 "tor.right_shift_assign_result.highp_uvec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011908, VkglTestCase_011908_1, VkglTestCase_011908_2);

#define VkglTestCase_011909_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011909_2 "or.right_shift_assign_result.highp_uvec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011909, VkglTestCase_011909_1, VkglTestCase_011909_2);

#define VkglTestCase_011910_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011910_2 "tor.right_shift_assign_result.highp_uvec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011910, VkglTestCase_011910_1, VkglTestCase_011910_2);

#define VkglTestCase_011911_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011911_2 "or.right_shift_assign_result.highp_uvec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011911, VkglTestCase_011911_1, VkglTestCase_011911_2);
