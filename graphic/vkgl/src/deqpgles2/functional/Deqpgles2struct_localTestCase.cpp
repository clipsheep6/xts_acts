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
#include "../ActsDeqpgles20008TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_007682_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_007682_2 "rs.struct.local.basic_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007682, VkglTestCase_007682_1, VkglTestCase_007682_2);

#define VkglTestCase_007683_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_007683_2 "s.struct.local.basic_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007683, VkglTestCase_007683_1, VkglTestCase_007683_2);

#define VkglTestCase_007684_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_007684_2 "s.struct.local.nested_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007684, VkglTestCase_007684_1, VkglTestCase_007684_2);

#define VkglTestCase_007685_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_007685_2 ".struct.local.nested_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007685, VkglTestCase_007685_1, VkglTestCase_007685_2);

#define VkglTestCase_007686_1 "dEQP-GLES2.functional.shaders.s"
#define VkglTestCase_007686_2 "truct.local.array_member_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007686, VkglTestCase_007686_1, VkglTestCase_007686_2);

#define VkglTestCase_007687_1 "dEQP-GLES2.functional.shaders.st"
#define VkglTestCase_007687_2 "ruct.local.array_member_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007687, VkglTestCase_007687_1, VkglTestCase_007687_2);

#define VkglTestCase_007688_1 "dEQP-GLES2.functional.shaders.struct.l"
#define VkglTestCase_007688_2 "ocal.array_member_dynamic_index_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007688, VkglTestCase_007688_1, VkglTestCase_007688_2);

#define VkglTestCase_007689_1 "dEQP-GLES2.functional.shaders.struct.lo"
#define VkglTestCase_007689_2 "cal.array_member_dynamic_index_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007689, VkglTestCase_007689_1, VkglTestCase_007689_2);

#define VkglTestCase_007690_1 "dEQP-GLES2.functional.shaders.s"
#define VkglTestCase_007690_2 "truct.local.struct_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007690, VkglTestCase_007690_1, VkglTestCase_007690_2);

#define VkglTestCase_007691_1 "dEQP-GLES2.functional.shaders.st"
#define VkglTestCase_007691_2 "ruct.local.struct_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007691, VkglTestCase_007691_1, VkglTestCase_007691_2);

#define VkglTestCase_007692_1 "dEQP-GLES2.functional.shaders.struct.l"
#define VkglTestCase_007692_2 "ocal.struct_array_dynamic_index_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007692, VkglTestCase_007692_1, VkglTestCase_007692_2);

#define VkglTestCase_007693_1 "dEQP-GLES2.functional.shaders.struct.lo"
#define VkglTestCase_007693_2 "cal.struct_array_dynamic_index_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007693, VkglTestCase_007693_1, VkglTestCase_007693_2);

#define VkglTestCase_007694_1 "dEQP-GLES2.functional.shaders.stru"
#define VkglTestCase_007694_2 "ct.local.nested_struct_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007694, VkglTestCase_007694_1, VkglTestCase_007694_2);

#define VkglTestCase_007695_1 "dEQP-GLES2.functional.shaders.struc"
#define VkglTestCase_007695_2 "t.local.nested_struct_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007695, VkglTestCase_007695_1, VkglTestCase_007695_2);

#define VkglTestCase_007696_1 "dEQP-GLES2.functional.shaders.struct.loca"
#define VkglTestCase_007696_2 "l.nested_struct_array_dynamic_index_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007696, VkglTestCase_007696_1, VkglTestCase_007696_2);

#define VkglTestCase_007697_1 "dEQP-GLES2.functional.shaders.struct.local"
#define VkglTestCase_007697_2 ".nested_struct_array_dynamic_index_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007697, VkglTestCase_007697_1, VkglTestCase_007697_2);

#define VkglTestCase_007698_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_007698_2 ".struct.local.parameter_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007698, VkglTestCase_007698_1, VkglTestCase_007698_2);

#define VkglTestCase_007699_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_007699_2 "struct.local.parameter_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007699, VkglTestCase_007699_1, VkglTestCase_007699_2);

#define VkglTestCase_007700_1 "dEQP-GLES2.functional.shaders.struc"
#define VkglTestCase_007700_2 "t.local.parameter_inout_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007700, VkglTestCase_007700_1, VkglTestCase_007700_2);

#define VkglTestCase_007701_1 "dEQP-GLES2.functional.shaders.struct"
#define VkglTestCase_007701_2 ".local.parameter_inout_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007701, VkglTestCase_007701_1, VkglTestCase_007701_2);

#define VkglTestCase_007702_1 "dEQP-GLES2.functional.shaders.struct"
#define VkglTestCase_007702_2 ".local.parameter_inout_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007702, VkglTestCase_007702_1, VkglTestCase_007702_2);

#define VkglTestCase_007703_1 "dEQP-GLES2.functional.shaders.struct."
#define VkglTestCase_007703_2 "local.parameter_inout_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007703, VkglTestCase_007703_1, VkglTestCase_007703_2);

#define VkglTestCase_007704_1 "dEQP-GLES2.functional.shaders.struc"
#define VkglTestCase_007704_2 "t.local.parameter_inout_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007704, VkglTestCase_007704_1, VkglTestCase_007704_2);

#define VkglTestCase_007705_1 "dEQP-GLES2.functional.shaders.struct"
#define VkglTestCase_007705_2 ".local.parameter_inout_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007705, VkglTestCase_007705_1, VkglTestCase_007705_2);

#define VkglTestCase_007706_1 "dEQP-GLES2.functional.shaders.str"
#define VkglTestCase_007706_2 "uct.local.parameter_nested_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007706, VkglTestCase_007706_1, VkglTestCase_007706_2);

#define VkglTestCase_007707_1 "dEQP-GLES2.functional.shaders.stru"
#define VkglTestCase_007707_2 "ct.local.parameter_nested_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007707, VkglTestCase_007707_1, VkglTestCase_007707_2);

#define VkglTestCase_007708_1 "dEQP-GLES2.functional.shaders.stru"
#define VkglTestCase_007708_2 "ct.local.parameter_out_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007708, VkglTestCase_007708_1, VkglTestCase_007708_2);

#define VkglTestCase_007709_1 "dEQP-GLES2.functional.shaders.struc"
#define VkglTestCase_007709_2 "t.local.parameter_out_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007709, VkglTestCase_007709_1, VkglTestCase_007709_2);

#define VkglTestCase_007710_1 "dEQP-GLES2.functional.shaders.struc"
#define VkglTestCase_007710_2 "t.local.parameter_out_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007710, VkglTestCase_007710_1, VkglTestCase_007710_2);

#define VkglTestCase_007711_1 "dEQP-GLES2.functional.shaders.struct"
#define VkglTestCase_007711_2 ".local.parameter_out_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007711, VkglTestCase_007711_1, VkglTestCase_007711_2);

#define VkglTestCase_007712_1 "dEQP-GLES2.functional.shaders.stru"
#define VkglTestCase_007712_2 "ct.local.parameter_out_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007712, VkglTestCase_007712_1, VkglTestCase_007712_2);

#define VkglTestCase_007713_1 "dEQP-GLES2.functional.shaders.struc"
#define VkglTestCase_007713_2 "t.local.parameter_out_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007713, VkglTestCase_007713_1, VkglTestCase_007713_2);

#define VkglTestCase_007714_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_007714_2 "s.struct.local.return_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007714, VkglTestCase_007714_1, VkglTestCase_007714_2);

#define VkglTestCase_007715_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_007715_2 ".struct.local.return_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007715, VkglTestCase_007715_1, VkglTestCase_007715_2);

#define VkglTestCase_007716_1 "dEQP-GLES2.functional.shaders.s"
#define VkglTestCase_007716_2 "truct.local.return_nested_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007716, VkglTestCase_007716_1, VkglTestCase_007716_2);

#define VkglTestCase_007717_1 "dEQP-GLES2.functional.shaders.st"
#define VkglTestCase_007717_2 "ruct.local.return_nested_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007717, VkglTestCase_007717_1, VkglTestCase_007717_2);

#define VkglTestCase_007718_1 "dEQP-GLES2.functional.shaders.struct"
#define VkglTestCase_007718_2 ".local.conditional_assignment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007718, VkglTestCase_007718_1, VkglTestCase_007718_2);

#define VkglTestCase_007719_1 "dEQP-GLES2.functional.shaders.struct."
#define VkglTestCase_007719_2 "local.conditional_assignment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007719, VkglTestCase_007719_1, VkglTestCase_007719_2);

#define VkglTestCase_007720_1 "dEQP-GLES2.functional.shaders.st"
#define VkglTestCase_007720_2 "ruct.local.loop_assignment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007720, VkglTestCase_007720_1, VkglTestCase_007720_2);

#define VkglTestCase_007721_1 "dEQP-GLES2.functional.shaders.str"
#define VkglTestCase_007721_2 "uct.local.loop_assignment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007721, VkglTestCase_007721_1, VkglTestCase_007721_2);

#define VkglTestCase_007722_1 "dEQP-GLES2.functional.shaders.struct"
#define VkglTestCase_007722_2 ".local.dynamic_loop_assignment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007722, VkglTestCase_007722_1, VkglTestCase_007722_2);

#define VkglTestCase_007723_1 "dEQP-GLES2.functional.shaders.struct."
#define VkglTestCase_007723_2 "local.dynamic_loop_assignment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007723, VkglTestCase_007723_1, VkglTestCase_007723_2);

#define VkglTestCase_007724_1 "dEQP-GLES2.functional.shaders.struct.lo"
#define VkglTestCase_007724_2 "cal.nested_conditional_assignment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007724, VkglTestCase_007724_1, VkglTestCase_007724_2);

#define VkglTestCase_007725_1 "dEQP-GLES2.functional.shaders.struct.loc"
#define VkglTestCase_007725_2 "al.nested_conditional_assignment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007725, VkglTestCase_007725_1, VkglTestCase_007725_2);

#define VkglTestCase_007726_1 "dEQP-GLES2.functional.shaders.struct"
#define VkglTestCase_007726_2 ".local.nested_loop_assignment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007726, VkglTestCase_007726_1, VkglTestCase_007726_2);

#define VkglTestCase_007727_1 "dEQP-GLES2.functional.shaders.struct."
#define VkglTestCase_007727_2 "local.nested_loop_assignment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007727, VkglTestCase_007727_1, VkglTestCase_007727_2);

#define VkglTestCase_007728_1 "dEQP-GLES2.functional.shaders.struct.loc"
#define VkglTestCase_007728_2 "al.nested_dynamic_loop_assignment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007728, VkglTestCase_007728_1, VkglTestCase_007728_2);

#define VkglTestCase_007729_1 "dEQP-GLES2.functional.shaders.struct.loca"
#define VkglTestCase_007729_2 "l.nested_dynamic_loop_assignment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007729, VkglTestCase_007729_1, VkglTestCase_007729_2);

#define VkglTestCase_007730_1 "dEQP-GLES2.functional.shaders.str"
#define VkglTestCase_007730_2 "uct.local.loop_struct_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007730, VkglTestCase_007730_1, VkglTestCase_007730_2);

#define VkglTestCase_007731_1 "dEQP-GLES2.functional.shaders.stru"
#define VkglTestCase_007731_2 "ct.local.loop_struct_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007731, VkglTestCase_007731_1, VkglTestCase_007731_2);

#define VkglTestCase_007732_1 "dEQP-GLES2.functional.shaders.struct."
#define VkglTestCase_007732_2 "local.loop_nested_struct_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007732, VkglTestCase_007732_1, VkglTestCase_007732_2);

#define VkglTestCase_007733_1 "dEQP-GLES2.functional.shaders.struct.l"
#define VkglTestCase_007733_2 "ocal.loop_nested_struct_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007733, VkglTestCase_007733_1, VkglTestCase_007733_2);

#define VkglTestCase_007734_1 "dEQP-GLES2.functional.shaders.struct."
#define VkglTestCase_007734_2 "local.dynamic_loop_struct_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007734, VkglTestCase_007734_1, VkglTestCase_007734_2);

#define VkglTestCase_007735_1 "dEQP-GLES2.functional.shaders.struct.l"
#define VkglTestCase_007735_2 "ocal.dynamic_loop_struct_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007735, VkglTestCase_007735_1, VkglTestCase_007735_2);

#define VkglTestCase_007736_1 "dEQP-GLES2.functional.shaders.struct.loca"
#define VkglTestCase_007736_2 "l.dynamic_loop_nested_struct_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007736, VkglTestCase_007736_1, VkglTestCase_007736_2);

#define VkglTestCase_007737_1 "dEQP-GLES2.functional.shaders.struct.local"
#define VkglTestCase_007737_2 ".dynamic_loop_nested_struct_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007737, VkglTestCase_007737_1, VkglTestCase_007737_2);

#define VkglTestCase_007738_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_007738_2 "struct.local.basic_equal_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007738, VkglTestCase_007738_1, VkglTestCase_007738_2);

#define VkglTestCase_007739_1 "dEQP-GLES2.functional.shaders.s"
#define VkglTestCase_007739_2 "truct.local.basic_equal_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007739, VkglTestCase_007739_1, VkglTestCase_007739_2);

#define VkglTestCase_007740_1 "dEQP-GLES2.functional.shaders.st"
#define VkglTestCase_007740_2 "ruct.local.basic_not_equal_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007740, VkglTestCase_007740_1, VkglTestCase_007740_2);

#define VkglTestCase_007741_1 "dEQP-GLES2.functional.shaders.str"
#define VkglTestCase_007741_2 "uct.local.basic_not_equal_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007741, VkglTestCase_007741_1, VkglTestCase_007741_2);

#define VkglTestCase_007742_1 "dEQP-GLES2.functional.shaders.s"
#define VkglTestCase_007742_2 "truct.local.nested_equal_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007742, VkglTestCase_007742_1, VkglTestCase_007742_2);

#define VkglTestCase_007743_1 "dEQP-GLES2.functional.shaders.st"
#define VkglTestCase_007743_2 "ruct.local.nested_equal_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007743, VkglTestCase_007743_1, VkglTestCase_007743_2);

#define VkglTestCase_007744_1 "dEQP-GLES2.functional.shaders.str"
#define VkglTestCase_007744_2 "uct.local.nested_not_equal_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007744, VkglTestCase_007744_1, VkglTestCase_007744_2);

#define VkglTestCase_007745_1 "dEQP-GLES2.functional.shaders.stru"
#define VkglTestCase_007745_2 "ct.local.nested_not_equal_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007745, VkglTestCase_007745_1, VkglTestCase_007745_2);
