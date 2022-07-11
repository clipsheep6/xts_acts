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

#define VkglTestCase_011576_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011576_2 "ator.left_shift_assign_result.lowp_int_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011576, VkglTestCase_011576_1, VkglTestCase_011576_2);

#define VkglTestCase_011577_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011577_2 "tor.left_shift_assign_result.lowp_int_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011577, VkglTestCase_011577_1, VkglTestCase_011577_2);

#define VkglTestCase_011578_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011578_2 "tor.left_shift_assign_result.mediump_int_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011578, VkglTestCase_011578_1, VkglTestCase_011578_2);

#define VkglTestCase_011579_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011579_2 "or.left_shift_assign_result.mediump_int_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011579, VkglTestCase_011579_1, VkglTestCase_011579_2);

#define VkglTestCase_011580_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011580_2 "tor.left_shift_assign_result.lowp_ivec2_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011580, VkglTestCase_011580_1, VkglTestCase_011580_2);

#define VkglTestCase_011581_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011581_2 "or.left_shift_assign_result.lowp_ivec2_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011581, VkglTestCase_011581_1, VkglTestCase_011581_2);

#define VkglTestCase_011582_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011582_2 "r.left_shift_assign_result.mediump_ivec2_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011582, VkglTestCase_011582_1, VkglTestCase_011582_2);

#define VkglTestCase_011583_1 "dEQP-GLES3.functional.shaders.operator.binary_operator"
#define VkglTestCase_011583_2 ".left_shift_assign_result.mediump_ivec2_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011583, VkglTestCase_011583_1, VkglTestCase_011583_2);

#define VkglTestCase_011584_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011584_2 "tor.left_shift_assign_result.lowp_ivec3_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011584, VkglTestCase_011584_1, VkglTestCase_011584_2);

#define VkglTestCase_011585_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011585_2 "or.left_shift_assign_result.lowp_ivec3_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011585, VkglTestCase_011585_1, VkglTestCase_011585_2);

#define VkglTestCase_011586_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011586_2 "r.left_shift_assign_result.mediump_ivec3_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011586, VkglTestCase_011586_1, VkglTestCase_011586_2);

#define VkglTestCase_011587_1 "dEQP-GLES3.functional.shaders.operator.binary_operator"
#define VkglTestCase_011587_2 ".left_shift_assign_result.mediump_ivec3_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011587, VkglTestCase_011587_1, VkglTestCase_011587_2);

#define VkglTestCase_011588_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011588_2 "tor.left_shift_assign_result.lowp_ivec4_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011588, VkglTestCase_011588_1, VkglTestCase_011588_2);

#define VkglTestCase_011589_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011589_2 "or.left_shift_assign_result.lowp_ivec4_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011589, VkglTestCase_011589_1, VkglTestCase_011589_2);

#define VkglTestCase_011590_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011590_2 "r.left_shift_assign_result.mediump_ivec4_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011590, VkglTestCase_011590_1, VkglTestCase_011590_2);

#define VkglTestCase_011591_1 "dEQP-GLES3.functional.shaders.operator.binary_operator"
#define VkglTestCase_011591_2 ".left_shift_assign_result.mediump_ivec4_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011591, VkglTestCase_011591_1, VkglTestCase_011591_2);

#define VkglTestCase_011592_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011592_2 "ator.left_shift_assign_result.highp_int_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011592, VkglTestCase_011592_1, VkglTestCase_011592_2);

#define VkglTestCase_011593_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011593_2 "tor.left_shift_assign_result.highp_int_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011593, VkglTestCase_011593_1, VkglTestCase_011593_2);

#define VkglTestCase_011594_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011594_2 "or.left_shift_assign_result.highp_ivec2_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011594, VkglTestCase_011594_1, VkglTestCase_011594_2);

#define VkglTestCase_011595_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011595_2 "r.left_shift_assign_result.highp_ivec2_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011595, VkglTestCase_011595_1, VkglTestCase_011595_2);

#define VkglTestCase_011596_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011596_2 "or.left_shift_assign_result.highp_ivec3_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011596, VkglTestCase_011596_1, VkglTestCase_011596_2);

#define VkglTestCase_011597_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011597_2 "r.left_shift_assign_result.highp_ivec3_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011597, VkglTestCase_011597_1, VkglTestCase_011597_2);

#define VkglTestCase_011598_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011598_2 "or.left_shift_assign_result.highp_ivec4_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011598, VkglTestCase_011598_1, VkglTestCase_011598_2);

#define VkglTestCase_011599_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011599_2 "r.left_shift_assign_result.highp_ivec4_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011599, VkglTestCase_011599_1, VkglTestCase_011599_2);

#define VkglTestCase_011600_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011600_2 "erator.left_shift_assign_result.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011600, VkglTestCase_011600_1, VkglTestCase_011600_2);

#define VkglTestCase_011601_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011601_2 "rator.left_shift_assign_result.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011601, VkglTestCase_011601_1, VkglTestCase_011601_2);

#define VkglTestCase_011602_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011602_2 "rator.left_shift_assign_result.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011602, VkglTestCase_011602_1, VkglTestCase_011602_2);

#define VkglTestCase_011603_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011603_2 "ator.left_shift_assign_result.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011603, VkglTestCase_011603_1, VkglTestCase_011603_2);

#define VkglTestCase_011604_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011604_2 "erator.left_shift_assign_result.lowp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011604, VkglTestCase_011604_1, VkglTestCase_011604_2);

#define VkglTestCase_011605_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011605_2 "rator.left_shift_assign_result.lowp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011605, VkglTestCase_011605_1, VkglTestCase_011605_2);

#define VkglTestCase_011606_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011606_2 "ator.left_shift_assign_result.mediump_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011606, VkglTestCase_011606_1, VkglTestCase_011606_2);

#define VkglTestCase_011607_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011607_2 "tor.left_shift_assign_result.mediump_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011607, VkglTestCase_011607_1, VkglTestCase_011607_2);

#define VkglTestCase_011608_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011608_2 "erator.left_shift_assign_result.lowp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011608, VkglTestCase_011608_1, VkglTestCase_011608_2);

#define VkglTestCase_011609_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011609_2 "rator.left_shift_assign_result.lowp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011609, VkglTestCase_011609_1, VkglTestCase_011609_2);

#define VkglTestCase_011610_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011610_2 "ator.left_shift_assign_result.mediump_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011610, VkglTestCase_011610_1, VkglTestCase_011610_2);

#define VkglTestCase_011611_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011611_2 "tor.left_shift_assign_result.mediump_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011611, VkglTestCase_011611_1, VkglTestCase_011611_2);

#define VkglTestCase_011612_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011612_2 "erator.left_shift_assign_result.lowp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011612, VkglTestCase_011612_1, VkglTestCase_011612_2);

#define VkglTestCase_011613_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011613_2 "rator.left_shift_assign_result.lowp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011613, VkglTestCase_011613_1, VkglTestCase_011613_2);

#define VkglTestCase_011614_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011614_2 "ator.left_shift_assign_result.mediump_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011614, VkglTestCase_011614_1, VkglTestCase_011614_2);

#define VkglTestCase_011615_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011615_2 "tor.left_shift_assign_result.mediump_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011615, VkglTestCase_011615_1, VkglTestCase_011615_2);

#define VkglTestCase_011616_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011616_2 "erator.left_shift_assign_result.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011616, VkglTestCase_011616_1, VkglTestCase_011616_2);

#define VkglTestCase_011617_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011617_2 "rator.left_shift_assign_result.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011617, VkglTestCase_011617_1, VkglTestCase_011617_2);

#define VkglTestCase_011618_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011618_2 "rator.left_shift_assign_result.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011618, VkglTestCase_011618_1, VkglTestCase_011618_2);

#define VkglTestCase_011619_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011619_2 "ator.left_shift_assign_result.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011619, VkglTestCase_011619_1, VkglTestCase_011619_2);

#define VkglTestCase_011620_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011620_2 "rator.left_shift_assign_result.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011620, VkglTestCase_011620_1, VkglTestCase_011620_2);

#define VkglTestCase_011621_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011621_2 "ator.left_shift_assign_result.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011621, VkglTestCase_011621_1, VkglTestCase_011621_2);

#define VkglTestCase_011622_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011622_2 "rator.left_shift_assign_result.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011622, VkglTestCase_011622_1, VkglTestCase_011622_2);

#define VkglTestCase_011623_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011623_2 "ator.left_shift_assign_result.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011623, VkglTestCase_011623_1, VkglTestCase_011623_2);

#define VkglTestCase_011624_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011624_2 "tor.left_shift_assign_result.lowp_ivec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011624, VkglTestCase_011624_1, VkglTestCase_011624_2);

#define VkglTestCase_011625_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011625_2 "or.left_shift_assign_result.lowp_ivec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011625, VkglTestCase_011625_1, VkglTestCase_011625_2);

#define VkglTestCase_011626_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011626_2 "or.left_shift_assign_result.mediump_ivec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011626, VkglTestCase_011626_1, VkglTestCase_011626_2);

#define VkglTestCase_011627_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011627_2 "r.left_shift_assign_result.mediump_ivec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011627, VkglTestCase_011627_1, VkglTestCase_011627_2);

#define VkglTestCase_011628_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011628_2 "tor.left_shift_assign_result.lowp_ivec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011628, VkglTestCase_011628_1, VkglTestCase_011628_2);

#define VkglTestCase_011629_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011629_2 "or.left_shift_assign_result.lowp_ivec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011629, VkglTestCase_011629_1, VkglTestCase_011629_2);

#define VkglTestCase_011630_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011630_2 "or.left_shift_assign_result.mediump_ivec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011630, VkglTestCase_011630_1, VkglTestCase_011630_2);

#define VkglTestCase_011631_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011631_2 "r.left_shift_assign_result.mediump_ivec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011631, VkglTestCase_011631_1, VkglTestCase_011631_2);

#define VkglTestCase_011632_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011632_2 "tor.left_shift_assign_result.lowp_ivec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011632, VkglTestCase_011632_1, VkglTestCase_011632_2);

#define VkglTestCase_011633_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011633_2 "or.left_shift_assign_result.lowp_ivec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011633, VkglTestCase_011633_1, VkglTestCase_011633_2);

#define VkglTestCase_011634_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011634_2 "or.left_shift_assign_result.mediump_ivec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011634, VkglTestCase_011634_1, VkglTestCase_011634_2);

#define VkglTestCase_011635_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011635_2 "r.left_shift_assign_result.mediump_ivec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011635, VkglTestCase_011635_1, VkglTestCase_011635_2);

#define VkglTestCase_011636_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011636_2 "tor.left_shift_assign_result.highp_ivec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011636, VkglTestCase_011636_1, VkglTestCase_011636_2);

#define VkglTestCase_011637_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011637_2 "or.left_shift_assign_result.highp_ivec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011637, VkglTestCase_011637_1, VkglTestCase_011637_2);

#define VkglTestCase_011638_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011638_2 "tor.left_shift_assign_result.highp_ivec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011638, VkglTestCase_011638_1, VkglTestCase_011638_2);

#define VkglTestCase_011639_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011639_2 "or.left_shift_assign_result.highp_ivec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011639, VkglTestCase_011639_1, VkglTestCase_011639_2);

#define VkglTestCase_011640_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011640_2 "tor.left_shift_assign_result.highp_ivec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011640, VkglTestCase_011640_1, VkglTestCase_011640_2);

#define VkglTestCase_011641_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011641_2 "or.left_shift_assign_result.highp_ivec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011641, VkglTestCase_011641_1, VkglTestCase_011641_2);

#define VkglTestCase_011642_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011642_2 "tor.left_shift_assign_result.lowp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011642, VkglTestCase_011642_1, VkglTestCase_011642_2);

#define VkglTestCase_011643_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011643_2 "or.left_shift_assign_result.lowp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011643, VkglTestCase_011643_1, VkglTestCase_011643_2);

#define VkglTestCase_011644_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011644_2 "or.left_shift_assign_result.mediump_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011644, VkglTestCase_011644_1, VkglTestCase_011644_2);

#define VkglTestCase_011645_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011645_2 "r.left_shift_assign_result.mediump_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011645, VkglTestCase_011645_1, VkglTestCase_011645_2);

#define VkglTestCase_011646_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011646_2 "tor.left_shift_assign_result.lowp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011646, VkglTestCase_011646_1, VkglTestCase_011646_2);

#define VkglTestCase_011647_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011647_2 "or.left_shift_assign_result.lowp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011647, VkglTestCase_011647_1, VkglTestCase_011647_2);

#define VkglTestCase_011648_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011648_2 "or.left_shift_assign_result.mediump_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011648, VkglTestCase_011648_1, VkglTestCase_011648_2);

#define VkglTestCase_011649_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011649_2 "r.left_shift_assign_result.mediump_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011649, VkglTestCase_011649_1, VkglTestCase_011649_2);

#define VkglTestCase_011650_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011650_2 "tor.left_shift_assign_result.lowp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011650, VkglTestCase_011650_1, VkglTestCase_011650_2);

#define VkglTestCase_011651_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011651_2 "or.left_shift_assign_result.lowp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011651, VkglTestCase_011651_1, VkglTestCase_011651_2);

#define VkglTestCase_011652_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011652_2 "or.left_shift_assign_result.mediump_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011652, VkglTestCase_011652_1, VkglTestCase_011652_2);

#define VkglTestCase_011653_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011653_2 "r.left_shift_assign_result.mediump_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011653, VkglTestCase_011653_1, VkglTestCase_011653_2);

#define VkglTestCase_011654_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011654_2 "tor.left_shift_assign_result.highp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011654, VkglTestCase_011654_1, VkglTestCase_011654_2);

#define VkglTestCase_011655_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011655_2 "or.left_shift_assign_result.highp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011655, VkglTestCase_011655_1, VkglTestCase_011655_2);

#define VkglTestCase_011656_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011656_2 "tor.left_shift_assign_result.highp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011656, VkglTestCase_011656_1, VkglTestCase_011656_2);

#define VkglTestCase_011657_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011657_2 "or.left_shift_assign_result.highp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011657, VkglTestCase_011657_1, VkglTestCase_011657_2);

#define VkglTestCase_011658_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011658_2 "tor.left_shift_assign_result.highp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011658, VkglTestCase_011658_1, VkglTestCase_011658_2);

#define VkglTestCase_011659_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011659_2 "or.left_shift_assign_result.highp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011659, VkglTestCase_011659_1, VkglTestCase_011659_2);

#define VkglTestCase_011660_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011660_2 "perator.left_shift_assign_result.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011660, VkglTestCase_011660_1, VkglTestCase_011660_2);

#define VkglTestCase_011661_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011661_2 "erator.left_shift_assign_result.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011661, VkglTestCase_011661_1, VkglTestCase_011661_2);

#define VkglTestCase_011662_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011662_2 "rator.left_shift_assign_result.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011662, VkglTestCase_011662_1, VkglTestCase_011662_2);

#define VkglTestCase_011663_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011663_2 "ator.left_shift_assign_result.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011663, VkglTestCase_011663_1, VkglTestCase_011663_2);

#define VkglTestCase_011664_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011664_2 "erator.left_shift_assign_result.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011664, VkglTestCase_011664_1, VkglTestCase_011664_2);

#define VkglTestCase_011665_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011665_2 "rator.left_shift_assign_result.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011665, VkglTestCase_011665_1, VkglTestCase_011665_2);

#define VkglTestCase_011666_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011666_2 "ator.left_shift_assign_result.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011666, VkglTestCase_011666_1, VkglTestCase_011666_2);

#define VkglTestCase_011667_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011667_2 "tor.left_shift_assign_result.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011667, VkglTestCase_011667_1, VkglTestCase_011667_2);

#define VkglTestCase_011668_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011668_2 "erator.left_shift_assign_result.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011668, VkglTestCase_011668_1, VkglTestCase_011668_2);

#define VkglTestCase_011669_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011669_2 "rator.left_shift_assign_result.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011669, VkglTestCase_011669_1, VkglTestCase_011669_2);

#define VkglTestCase_011670_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011670_2 "ator.left_shift_assign_result.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011670, VkglTestCase_011670_1, VkglTestCase_011670_2);

#define VkglTestCase_011671_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011671_2 "tor.left_shift_assign_result.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011671, VkglTestCase_011671_1, VkglTestCase_011671_2);

#define VkglTestCase_011672_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011672_2 "erator.left_shift_assign_result.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011672, VkglTestCase_011672_1, VkglTestCase_011672_2);

#define VkglTestCase_011673_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011673_2 "rator.left_shift_assign_result.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011673, VkglTestCase_011673_1, VkglTestCase_011673_2);

#define VkglTestCase_011674_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011674_2 "ator.left_shift_assign_result.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011674, VkglTestCase_011674_1, VkglTestCase_011674_2);

#define VkglTestCase_011675_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011675_2 "tor.left_shift_assign_result.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011675, VkglTestCase_011675_1, VkglTestCase_011675_2);

#define VkglTestCase_011676_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011676_2 "erator.left_shift_assign_result.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011676, VkglTestCase_011676_1, VkglTestCase_011676_2);

#define VkglTestCase_011677_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011677_2 "rator.left_shift_assign_result.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011677, VkglTestCase_011677_1, VkglTestCase_011677_2);

#define VkglTestCase_011678_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011678_2 "rator.left_shift_assign_result.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011678, VkglTestCase_011678_1, VkglTestCase_011678_2);

#define VkglTestCase_011679_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011679_2 "ator.left_shift_assign_result.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011679, VkglTestCase_011679_1, VkglTestCase_011679_2);

#define VkglTestCase_011680_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011680_2 "rator.left_shift_assign_result.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011680, VkglTestCase_011680_1, VkglTestCase_011680_2);

#define VkglTestCase_011681_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011681_2 "ator.left_shift_assign_result.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011681, VkglTestCase_011681_1, VkglTestCase_011681_2);

#define VkglTestCase_011682_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011682_2 "rator.left_shift_assign_result.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011682, VkglTestCase_011682_1, VkglTestCase_011682_2);

#define VkglTestCase_011683_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011683_2 "ator.left_shift_assign_result.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011683, VkglTestCase_011683_1, VkglTestCase_011683_2);

#define VkglTestCase_011684_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011684_2 "ator.left_shift_assign_result.lowp_uint_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011684, VkglTestCase_011684_1, VkglTestCase_011684_2);

#define VkglTestCase_011685_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011685_2 "tor.left_shift_assign_result.lowp_uint_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011685, VkglTestCase_011685_1, VkglTestCase_011685_2);

#define VkglTestCase_011686_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011686_2 "tor.left_shift_assign_result.mediump_uint_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011686, VkglTestCase_011686_1, VkglTestCase_011686_2);

#define VkglTestCase_011687_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011687_2 "or.left_shift_assign_result.mediump_uint_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011687, VkglTestCase_011687_1, VkglTestCase_011687_2);

#define VkglTestCase_011688_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011688_2 "tor.left_shift_assign_result.lowp_uvec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011688, VkglTestCase_011688_1, VkglTestCase_011688_2);

#define VkglTestCase_011689_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011689_2 "or.left_shift_assign_result.lowp_uvec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011689, VkglTestCase_011689_1, VkglTestCase_011689_2);

#define VkglTestCase_011690_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011690_2 "r.left_shift_assign_result.mediump_uvec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011690, VkglTestCase_011690_1, VkglTestCase_011690_2);

#define VkglTestCase_011691_1 "dEQP-GLES3.functional.shaders.operator.binary_operator"
#define VkglTestCase_011691_2 ".left_shift_assign_result.mediump_uvec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011691, VkglTestCase_011691_1, VkglTestCase_011691_2);

#define VkglTestCase_011692_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011692_2 "tor.left_shift_assign_result.lowp_uvec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011692, VkglTestCase_011692_1, VkglTestCase_011692_2);

#define VkglTestCase_011693_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011693_2 "or.left_shift_assign_result.lowp_uvec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011693, VkglTestCase_011693_1, VkglTestCase_011693_2);

#define VkglTestCase_011694_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011694_2 "r.left_shift_assign_result.mediump_uvec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011694, VkglTestCase_011694_1, VkglTestCase_011694_2);

#define VkglTestCase_011695_1 "dEQP-GLES3.functional.shaders.operator.binary_operator"
#define VkglTestCase_011695_2 ".left_shift_assign_result.mediump_uvec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011695, VkglTestCase_011695_1, VkglTestCase_011695_2);

#define VkglTestCase_011696_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011696_2 "tor.left_shift_assign_result.lowp_uvec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011696, VkglTestCase_011696_1, VkglTestCase_011696_2);

#define VkglTestCase_011697_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011697_2 "or.left_shift_assign_result.lowp_uvec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011697, VkglTestCase_011697_1, VkglTestCase_011697_2);

#define VkglTestCase_011698_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011698_2 "r.left_shift_assign_result.mediump_uvec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011698, VkglTestCase_011698_1, VkglTestCase_011698_2);

#define VkglTestCase_011699_1 "dEQP-GLES3.functional.shaders.operator.binary_operator"
#define VkglTestCase_011699_2 ".left_shift_assign_result.mediump_uvec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011699, VkglTestCase_011699_1, VkglTestCase_011699_2);

#define VkglTestCase_011700_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011700_2 "ator.left_shift_assign_result.highp_uint_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011700, VkglTestCase_011700_1, VkglTestCase_011700_2);

#define VkglTestCase_011701_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011701_2 "tor.left_shift_assign_result.highp_uint_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011701, VkglTestCase_011701_1, VkglTestCase_011701_2);

#define VkglTestCase_011702_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011702_2 "or.left_shift_assign_result.highp_uvec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011702, VkglTestCase_011702_1, VkglTestCase_011702_2);

#define VkglTestCase_011703_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011703_2 "r.left_shift_assign_result.highp_uvec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011703, VkglTestCase_011703_1, VkglTestCase_011703_2);

#define VkglTestCase_011704_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011704_2 "or.left_shift_assign_result.highp_uvec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011704, VkglTestCase_011704_1, VkglTestCase_011704_2);

#define VkglTestCase_011705_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011705_2 "r.left_shift_assign_result.highp_uvec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011705, VkglTestCase_011705_1, VkglTestCase_011705_2);

#define VkglTestCase_011706_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011706_2 "or.left_shift_assign_result.highp_uvec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011706, VkglTestCase_011706_1, VkglTestCase_011706_2);

#define VkglTestCase_011707_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011707_2 "r.left_shift_assign_result.highp_uvec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011707, VkglTestCase_011707_1, VkglTestCase_011707_2);

#define VkglTestCase_011708_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011708_2 "ator.left_shift_assign_result.lowp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011708, VkglTestCase_011708_1, VkglTestCase_011708_2);

#define VkglTestCase_011709_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011709_2 "tor.left_shift_assign_result.lowp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011709, VkglTestCase_011709_1, VkglTestCase_011709_2);

#define VkglTestCase_011710_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011710_2 "or.left_shift_assign_result.mediump_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011710, VkglTestCase_011710_1, VkglTestCase_011710_2);

#define VkglTestCase_011711_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011711_2 "r.left_shift_assign_result.mediump_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011711, VkglTestCase_011711_1, VkglTestCase_011711_2);

#define VkglTestCase_011712_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011712_2 "ator.left_shift_assign_result.lowp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011712, VkglTestCase_011712_1, VkglTestCase_011712_2);

#define VkglTestCase_011713_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011713_2 "tor.left_shift_assign_result.lowp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011713, VkglTestCase_011713_1, VkglTestCase_011713_2);

#define VkglTestCase_011714_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011714_2 "or.left_shift_assign_result.mediump_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011714, VkglTestCase_011714_1, VkglTestCase_011714_2);

#define VkglTestCase_011715_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011715_2 "r.left_shift_assign_result.mediump_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011715, VkglTestCase_011715_1, VkglTestCase_011715_2);

#define VkglTestCase_011716_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011716_2 "ator.left_shift_assign_result.lowp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011716, VkglTestCase_011716_1, VkglTestCase_011716_2);

#define VkglTestCase_011717_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011717_2 "tor.left_shift_assign_result.lowp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011717, VkglTestCase_011717_1, VkglTestCase_011717_2);

#define VkglTestCase_011718_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011718_2 "or.left_shift_assign_result.mediump_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011718, VkglTestCase_011718_1, VkglTestCase_011718_2);

#define VkglTestCase_011719_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011719_2 "r.left_shift_assign_result.mediump_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011719, VkglTestCase_011719_1, VkglTestCase_011719_2);

#define VkglTestCase_011720_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011720_2 "tor.left_shift_assign_result.highp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011720, VkglTestCase_011720_1, VkglTestCase_011720_2);

#define VkglTestCase_011721_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011721_2 "or.left_shift_assign_result.highp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011721, VkglTestCase_011721_1, VkglTestCase_011721_2);

#define VkglTestCase_011722_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011722_2 "tor.left_shift_assign_result.highp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011722, VkglTestCase_011722_1, VkglTestCase_011722_2);

#define VkglTestCase_011723_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011723_2 "or.left_shift_assign_result.highp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011723, VkglTestCase_011723_1, VkglTestCase_011723_2);

#define VkglTestCase_011724_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011724_2 "tor.left_shift_assign_result.highp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011724, VkglTestCase_011724_1, VkglTestCase_011724_2);

#define VkglTestCase_011725_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011725_2 "or.left_shift_assign_result.highp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011725, VkglTestCase_011725_1, VkglTestCase_011725_2);

#define VkglTestCase_011726_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011726_2 "ator.left_shift_assign_result.lowp_uvec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011726, VkglTestCase_011726_1, VkglTestCase_011726_2);

#define VkglTestCase_011727_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011727_2 "tor.left_shift_assign_result.lowp_uvec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011727, VkglTestCase_011727_1, VkglTestCase_011727_2);

#define VkglTestCase_011728_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011728_2 "or.left_shift_assign_result.mediump_uvec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011728, VkglTestCase_011728_1, VkglTestCase_011728_2);

#define VkglTestCase_011729_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011729_2 "r.left_shift_assign_result.mediump_uvec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011729, VkglTestCase_011729_1, VkglTestCase_011729_2);

#define VkglTestCase_011730_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011730_2 "ator.left_shift_assign_result.lowp_uvec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011730, VkglTestCase_011730_1, VkglTestCase_011730_2);

#define VkglTestCase_011731_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011731_2 "tor.left_shift_assign_result.lowp_uvec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011731, VkglTestCase_011731_1, VkglTestCase_011731_2);

#define VkglTestCase_011732_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011732_2 "or.left_shift_assign_result.mediump_uvec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011732, VkglTestCase_011732_1, VkglTestCase_011732_2);

#define VkglTestCase_011733_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011733_2 "r.left_shift_assign_result.mediump_uvec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011733, VkglTestCase_011733_1, VkglTestCase_011733_2);

#define VkglTestCase_011734_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011734_2 "ator.left_shift_assign_result.lowp_uvec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011734, VkglTestCase_011734_1, VkglTestCase_011734_2);

#define VkglTestCase_011735_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011735_2 "tor.left_shift_assign_result.lowp_uvec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011735, VkglTestCase_011735_1, VkglTestCase_011735_2);

#define VkglTestCase_011736_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011736_2 "or.left_shift_assign_result.mediump_uvec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011736, VkglTestCase_011736_1, VkglTestCase_011736_2);

#define VkglTestCase_011737_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011737_2 "r.left_shift_assign_result.mediump_uvec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011737, VkglTestCase_011737_1, VkglTestCase_011737_2);

#define VkglTestCase_011738_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011738_2 "tor.left_shift_assign_result.highp_uvec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011738, VkglTestCase_011738_1, VkglTestCase_011738_2);

#define VkglTestCase_011739_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011739_2 "or.left_shift_assign_result.highp_uvec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011739, VkglTestCase_011739_1, VkglTestCase_011739_2);

#define VkglTestCase_011740_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011740_2 "tor.left_shift_assign_result.highp_uvec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011740, VkglTestCase_011740_1, VkglTestCase_011740_2);

#define VkglTestCase_011741_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011741_2 "or.left_shift_assign_result.highp_uvec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011741, VkglTestCase_011741_1, VkglTestCase_011741_2);

#define VkglTestCase_011742_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011742_2 "tor.left_shift_assign_result.highp_uvec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011742, VkglTestCase_011742_1, VkglTestCase_011742_2);

#define VkglTestCase_011743_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011743_2 "or.left_shift_assign_result.highp_uvec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011743, VkglTestCase_011743_1, VkglTestCase_011743_2);
