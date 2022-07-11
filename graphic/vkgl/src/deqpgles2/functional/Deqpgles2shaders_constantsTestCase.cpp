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
#include "../ActsDeqpgles20001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000649_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_000649_2 ".constants.float_input_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000649, VkglTestCase_000649_1, VkglTestCase_000649_2);

#define VkglTestCase_000650_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_000650_2 "constants.float_input_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000650, VkglTestCase_000650_1, VkglTestCase_000650_2);

#define VkglTestCase_000651_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_000651_2 "constants.float_uniform_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000651, VkglTestCase_000651_1, VkglTestCase_000651_2);

#define VkglTestCase_000652_1 "dEQP-GLES2.functional.shaders.c"
#define VkglTestCase_000652_2 "onstants.float_uniform_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000652, VkglTestCase_000652_1, VkglTestCase_000652_2);

#define VkglTestCase_000653_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_000653_2 "rs.constants.float_0_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000653, VkglTestCase_000653_1, VkglTestCase_000653_2);

#define VkglTestCase_000654_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_000654_2 "s.constants.float_0_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000654, VkglTestCase_000654_1, VkglTestCase_000654_2);

#define VkglTestCase_000655_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_000655_2 "rs.constants.float_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000655, VkglTestCase_000655_1, VkglTestCase_000655_2);

#define VkglTestCase_000656_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_000656_2 "s.constants.float_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000656, VkglTestCase_000656_1, VkglTestCase_000656_2);

#define VkglTestCase_000657_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_000657_2 "rs.constants.float_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000657, VkglTestCase_000657_1, VkglTestCase_000657_2);

#define VkglTestCase_000658_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_000658_2 "s.constants.float_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000658, VkglTestCase_000658_1, VkglTestCase_000658_2);

#define VkglTestCase_000659_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_000659_2 "rs.constants.float_3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000659, VkglTestCase_000659_1, VkglTestCase_000659_2);

#define VkglTestCase_000660_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_000660_2 "s.constants.float_3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000660, VkglTestCase_000660_1, VkglTestCase_000660_2);

#define VkglTestCase_000661_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_000661_2 "rs.constants.float_4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000661, VkglTestCase_000661_1, VkglTestCase_000661_2);

#define VkglTestCase_000662_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_000662_2 "s.constants.float_4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000662, VkglTestCase_000662_1, VkglTestCase_000662_2);

#define VkglTestCase_000663_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_000663_2 "rs.constants.float_5_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000663, VkglTestCase_000663_1, VkglTestCase_000663_2);

#define VkglTestCase_000664_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_000664_2 "s.constants.float_5_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000664, VkglTestCase_000664_1, VkglTestCase_000664_2);

#define VkglTestCase_000665_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_000665_2 "rs.constants.float_6_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000665, VkglTestCase_000665_1, VkglTestCase_000665_2);

#define VkglTestCase_000666_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_000666_2 "s.constants.float_6_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000666, VkglTestCase_000666_1, VkglTestCase_000666_2);

#define VkglTestCase_000667_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_000667_2 "rs.constants.float_7_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000667, VkglTestCase_000667_1, VkglTestCase_000667_2);

#define VkglTestCase_000668_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_000668_2 "s.constants.float_7_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000668, VkglTestCase_000668_1, VkglTestCase_000668_2);

#define VkglTestCase_000669_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_000669_2 "rs.constants.float_8_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000669, VkglTestCase_000669_1, VkglTestCase_000669_2);

#define VkglTestCase_000670_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_000670_2 "s.constants.float_8_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000670, VkglTestCase_000670_1, VkglTestCase_000670_2);

#define VkglTestCase_000671_1 "dEQP-GLES2.functional.shad"
#define VkglTestCase_000671_2 "ers.constants.int_0_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000671, VkglTestCase_000671_1, VkglTestCase_000671_2);

#define VkglTestCase_000672_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_000672_2 "rs.constants.int_0_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000672, VkglTestCase_000672_1, VkglTestCase_000672_2);

#define VkglTestCase_000673_1 "dEQP-GLES2.functional.shad"
#define VkglTestCase_000673_2 "ers.constants.int_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000673, VkglTestCase_000673_1, VkglTestCase_000673_2);

#define VkglTestCase_000674_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_000674_2 "rs.constants.int_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000674, VkglTestCase_000674_1, VkglTestCase_000674_2);

#define VkglTestCase_000675_1 "dEQP-GLES2.functional.shad"
#define VkglTestCase_000675_2 "ers.constants.int_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000675, VkglTestCase_000675_1, VkglTestCase_000675_2);

#define VkglTestCase_000676_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_000676_2 "rs.constants.int_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000676, VkglTestCase_000676_1, VkglTestCase_000676_2);

#define VkglTestCase_000677_1 "dEQP-GLES2.functional.shad"
#define VkglTestCase_000677_2 "ers.constants.int_3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000677, VkglTestCase_000677_1, VkglTestCase_000677_2);

#define VkglTestCase_000678_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_000678_2 "rs.constants.int_3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000678, VkglTestCase_000678_1, VkglTestCase_000678_2);

#define VkglTestCase_000679_1 "dEQP-GLES2.functional.shad"
#define VkglTestCase_000679_2 "ers.constants.int_4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000679, VkglTestCase_000679_1, VkglTestCase_000679_2);

#define VkglTestCase_000680_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_000680_2 "rs.constants.int_4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000680, VkglTestCase_000680_1, VkglTestCase_000680_2);

#define VkglTestCase_000681_1 "dEQP-GLES2.functional.shad"
#define VkglTestCase_000681_2 "ers.constants.bool_0_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000681, VkglTestCase_000681_1, VkglTestCase_000681_2);

#define VkglTestCase_000682_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_000682_2 "rs.constants.bool_0_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000682, VkglTestCase_000682_1, VkglTestCase_000682_2);

#define VkglTestCase_000683_1 "dEQP-GLES2.functional.shad"
#define VkglTestCase_000683_2 "ers.constants.bool_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000683, VkglTestCase_000683_1, VkglTestCase_000683_2);

#define VkglTestCase_000684_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_000684_2 "rs.constants.bool_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000684, VkglTestCase_000684_1, VkglTestCase_000684_2);

#define VkglTestCase_000685_1 "dEQP-GLES2.functional.shaders.co"
#define VkglTestCase_000685_2 "nstants.const_float_global_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000685, VkglTestCase_000685_1, VkglTestCase_000685_2);

#define VkglTestCase_000686_1 "dEQP-GLES2.functional.shaders.con"
#define VkglTestCase_000686_2 "stants.const_float_global_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000686, VkglTestCase_000686_1, VkglTestCase_000686_2);

#define VkglTestCase_000687_1 "dEQP-GLES2.functional.shaders.c"
#define VkglTestCase_000687_2 "onstants.const_float_main_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000687, VkglTestCase_000687_1, VkglTestCase_000687_2);

#define VkglTestCase_000688_1 "dEQP-GLES2.functional.shaders.co"
#define VkglTestCase_000688_2 "nstants.const_float_main_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000688, VkglTestCase_000688_1, VkglTestCase_000688_2);

#define VkglTestCase_000689_1 "dEQP-GLES2.functional.shaders.con"
#define VkglTestCase_000689_2 "stants.const_float_function_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000689, VkglTestCase_000689_1, VkglTestCase_000689_2);

#define VkglTestCase_000690_1 "dEQP-GLES2.functional.shaders.cons"
#define VkglTestCase_000690_2 "tants.const_float_function_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000690, VkglTestCase_000690_1, VkglTestCase_000690_2);

#define VkglTestCase_000691_1 "dEQP-GLES2.functional.shaders.co"
#define VkglTestCase_000691_2 "nstants.const_float_scope_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000691, VkglTestCase_000691_1, VkglTestCase_000691_2);

#define VkglTestCase_000692_1 "dEQP-GLES2.functional.shaders.con"
#define VkglTestCase_000692_2 "stants.const_float_scope_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000692, VkglTestCase_000692_1, VkglTestCase_000692_2);

#define VkglTestCase_000693_1 "dEQP-GLES2.functional.shaders.constant"
#define VkglTestCase_000693_2 "s.const_float_scope_shawdowing_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000693, VkglTestCase_000693_1, VkglTestCase_000693_2);

#define VkglTestCase_000694_1 "dEQP-GLES2.functional.shaders.constants"
#define VkglTestCase_000694_2 ".const_float_scope_shawdowing_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000694, VkglTestCase_000694_1, VkglTestCase_000694_2);

#define VkglTestCase_000695_1 "dEQP-GLES2.functional.shaders.constant"
#define VkglTestCase_000695_2 "s.const_float_scope_shawdowing_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000695, VkglTestCase_000695_1, VkglTestCase_000695_2);

#define VkglTestCase_000696_1 "dEQP-GLES2.functional.shaders.constants"
#define VkglTestCase_000696_2 ".const_float_scope_shawdowing_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000696, VkglTestCase_000696_1, VkglTestCase_000696_2);

#define VkglTestCase_000697_1 "dEQP-GLES2.functional.shaders.constant"
#define VkglTestCase_000697_2 "s.const_float_scope_shawdowing_3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000697, VkglTestCase_000697_1, VkglTestCase_000697_2);

#define VkglTestCase_000698_1 "dEQP-GLES2.functional.shaders.constants"
#define VkglTestCase_000698_2 ".const_float_scope_shawdowing_3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000698, VkglTestCase_000698_1, VkglTestCase_000698_2);

#define VkglTestCase_000699_1 "dEQP-GLES2.functional.shaders.constant"
#define VkglTestCase_000699_2 "s.const_float_scope_shawdowing_4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000699, VkglTestCase_000699_1, VkglTestCase_000699_2);

#define VkglTestCase_000700_1 "dEQP-GLES2.functional.shaders.constants"
#define VkglTestCase_000700_2 ".const_float_scope_shawdowing_4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000700, VkglTestCase_000700_1, VkglTestCase_000700_2);

#define VkglTestCase_000701_1 "dEQP-GLES2.functional.shaders.constants."
#define VkglTestCase_000701_2 "const_float_operations_with_const_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000701, VkglTestCase_000701_1, VkglTestCase_000701_2);

#define VkglTestCase_000702_1 "dEQP-GLES2.functional.shaders.constants.c"
#define VkglTestCase_000702_2 "onst_float_operations_with_const_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000702, VkglTestCase_000702_1, VkglTestCase_000702_2);

#define VkglTestCase_000703_1 "dEQP-GLES2.functional.shaders.const"
#define VkglTestCase_000703_2 "ants.const_float_assignment_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000703, VkglTestCase_000703_1, VkglTestCase_000703_2);

#define VkglTestCase_000704_1 "dEQP-GLES2.functional.shaders.consta"
#define VkglTestCase_000704_2 "nts.const_float_assignment_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000704, VkglTestCase_000704_1, VkglTestCase_000704_2);

#define VkglTestCase_000705_1 "dEQP-GLES2.functional.shaders.const"
#define VkglTestCase_000705_2 "ants.const_float_assignment_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000705, VkglTestCase_000705_1, VkglTestCase_000705_2);

#define VkglTestCase_000706_1 "dEQP-GLES2.functional.shaders.consta"
#define VkglTestCase_000706_2 "nts.const_float_assignment_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000706, VkglTestCase_000706_1, VkglTestCase_000706_2);

#define VkglTestCase_000707_1 "dEQP-GLES2.functional.shaders.const"
#define VkglTestCase_000707_2 "ants.const_float_assignment_3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000707, VkglTestCase_000707_1, VkglTestCase_000707_2);

#define VkglTestCase_000708_1 "dEQP-GLES2.functional.shaders.consta"
#define VkglTestCase_000708_2 "nts.const_float_assignment_3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000708, VkglTestCase_000708_1, VkglTestCase_000708_2);

#define VkglTestCase_000709_1 "dEQP-GLES2.functional.shaders.const"
#define VkglTestCase_000709_2 "ants.const_float_assignment_4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000709, VkglTestCase_000709_1, VkglTestCase_000709_2);

#define VkglTestCase_000710_1 "dEQP-GLES2.functional.shaders.consta"
#define VkglTestCase_000710_2 "nts.const_float_assignment_4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000710, VkglTestCase_000710_1, VkglTestCase_000710_2);

#define VkglTestCase_000711_1 "dEQP-GLES2.functional.shaders.consta"
#define VkglTestCase_000711_2 "nts.const_float_assign_uniform_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000711, VkglTestCase_000711_1, VkglTestCase_000711_2);

#define VkglTestCase_000712_1 "dEQP-GLES2.functional.shaders.constan"
#define VkglTestCase_000712_2 "ts.const_float_assign_uniform_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000712, VkglTestCase_000712_1, VkglTestCase_000712_2);

#define VkglTestCase_000713_1 "dEQP-GLES2.functional.shaders.con"
#define VkglTestCase_000713_2 "stants.const_float_assign_varying"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000713, VkglTestCase_000713_1, VkglTestCase_000713_2);

#define VkglTestCase_000714_1 "dEQP-GLES2.functional.shaders.con"
#define VkglTestCase_000714_2 "stants.const_float_from_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000714, VkglTestCase_000714_1, VkglTestCase_000714_2);

#define VkglTestCase_000715_1 "dEQP-GLES2.functional.shaders.cons"
#define VkglTestCase_000715_2 "tants.const_float_from_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000715, VkglTestCase_000715_1, VkglTestCase_000715_2);

#define VkglTestCase_000716_1 "dEQP-GLES2.functional.shaders.cons"
#define VkglTestCase_000716_2 "tants.const_float_from_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000716, VkglTestCase_000716_1, VkglTestCase_000716_2);

#define VkglTestCase_000717_1 "dEQP-GLES2.functional.shaders.const"
#define VkglTestCase_000717_2 "ants.const_float_from_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000717, VkglTestCase_000717_1, VkglTestCase_000717_2);

#define VkglTestCase_000718_1 "dEQP-GLES2.functional.shaders.cons"
#define VkglTestCase_000718_2 "tants.const_float_from_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000718, VkglTestCase_000718_1, VkglTestCase_000718_2);

#define VkglTestCase_000719_1 "dEQP-GLES2.functional.shaders.const"
#define VkglTestCase_000719_2 "ants.const_float_from_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000719, VkglTestCase_000719_1, VkglTestCase_000719_2);

#define VkglTestCase_000720_1 "dEQP-GLES2.functional.shaders.cons"
#define VkglTestCase_000720_2 "tants.const_float_from_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000720, VkglTestCase_000720_1, VkglTestCase_000720_2);

#define VkglTestCase_000721_1 "dEQP-GLES2.functional.shaders.const"
#define VkglTestCase_000721_2 "ants.const_float_from_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000721, VkglTestCase_000721_1, VkglTestCase_000721_2);

#define VkglTestCase_000722_1 "dEQP-GLES2.functional.shaders.constant"
#define VkglTestCase_000722_2 "s.const_float_assign_variable_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000722, VkglTestCase_000722_1, VkglTestCase_000722_2);

#define VkglTestCase_000723_1 "dEQP-GLES2.functional.shaders.constants"
#define VkglTestCase_000723_2 ".const_float_assign_variable_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000723, VkglTestCase_000723_1, VkglTestCase_000723_2);

#define VkglTestCase_000724_1 "dEQP-GLES2.functional.shaders.constant"
#define VkglTestCase_000724_2 "s.const_float_assign_variable_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000724, VkglTestCase_000724_1, VkglTestCase_000724_2);

#define VkglTestCase_000725_1 "dEQP-GLES2.functional.shaders.constants"
#define VkglTestCase_000725_2 ".const_float_assign_variable_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000725, VkglTestCase_000725_1, VkglTestCase_000725_2);

#define VkglTestCase_000726_1 "dEQP-GLES2.functional.shaders.constan"
#define VkglTestCase_000726_2 "ts.const_float_assign_user_func_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000726, VkglTestCase_000726_1, VkglTestCase_000726_2);

#define VkglTestCase_000727_1 "dEQP-GLES2.functional.shaders.constant"
#define VkglTestCase_000727_2 "s.const_float_assign_user_func_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000727, VkglTestCase_000727_1, VkglTestCase_000727_2);
