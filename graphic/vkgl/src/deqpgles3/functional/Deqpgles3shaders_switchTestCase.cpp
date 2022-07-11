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
#include "../ActsDeqpgles30017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016548_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_016548_2 "s.switch.basic_static_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016548, VkglTestCase_016548_1, VkglTestCase_016548_2);

#define VkglTestCase_016549_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_016549_2 ".switch.basic_static_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016549, VkglTestCase_016549_1, VkglTestCase_016549_2);

#define VkglTestCase_016550_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_016550_2 "s.switch.basic_uniform_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016550, VkglTestCase_016550_1, VkglTestCase_016550_2);

#define VkglTestCase_016551_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_016551_2 ".switch.basic_uniform_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016551, VkglTestCase_016551_1, VkglTestCase_016551_2);

#define VkglTestCase_016552_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_016552_2 "s.switch.basic_dynamic_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016552, VkglTestCase_016552_1, VkglTestCase_016552_2);

#define VkglTestCase_016553_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_016553_2 ".switch.basic_dynamic_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016553, VkglTestCase_016553_1, VkglTestCase_016553_2);

#define VkglTestCase_016554_1 "dEQP-GLES3.functional.shaders.switc"
#define VkglTestCase_016554_2 "h.const_expr_in_label_static_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016554, VkglTestCase_016554_1, VkglTestCase_016554_2);

#define VkglTestCase_016555_1 "dEQP-GLES3.functional.shaders.switch"
#define VkglTestCase_016555_2 ".const_expr_in_label_static_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016555, VkglTestCase_016555_1, VkglTestCase_016555_2);

#define VkglTestCase_016556_1 "dEQP-GLES3.functional.shaders.switc"
#define VkglTestCase_016556_2 "h.const_expr_in_label_uniform_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016556, VkglTestCase_016556_1, VkglTestCase_016556_2);

#define VkglTestCase_016557_1 "dEQP-GLES3.functional.shaders.switch"
#define VkglTestCase_016557_2 ".const_expr_in_label_uniform_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016557, VkglTestCase_016557_1, VkglTestCase_016557_2);

#define VkglTestCase_016558_1 "dEQP-GLES3.functional.shaders.switc"
#define VkglTestCase_016558_2 "h.const_expr_in_label_dynamic_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016558, VkglTestCase_016558_1, VkglTestCase_016558_2);

#define VkglTestCase_016559_1 "dEQP-GLES3.functional.shaders.switch"
#define VkglTestCase_016559_2 ".const_expr_in_label_dynamic_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016559, VkglTestCase_016559_1, VkglTestCase_016559_2);

#define VkglTestCase_016560_1 "dEQP-GLES3.functional.shaders.sw"
#define VkglTestCase_016560_2 "itch.default_label_static_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016560, VkglTestCase_016560_1, VkglTestCase_016560_2);

#define VkglTestCase_016561_1 "dEQP-GLES3.functional.shaders.swi"
#define VkglTestCase_016561_2 "tch.default_label_static_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016561, VkglTestCase_016561_1, VkglTestCase_016561_2);

#define VkglTestCase_016562_1 "dEQP-GLES3.functional.shaders.sw"
#define VkglTestCase_016562_2 "itch.default_label_uniform_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016562, VkglTestCase_016562_1, VkglTestCase_016562_2);

#define VkglTestCase_016563_1 "dEQP-GLES3.functional.shaders.swi"
#define VkglTestCase_016563_2 "tch.default_label_uniform_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016563, VkglTestCase_016563_1, VkglTestCase_016563_2);

#define VkglTestCase_016564_1 "dEQP-GLES3.functional.shaders.sw"
#define VkglTestCase_016564_2 "itch.default_label_dynamic_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016564, VkglTestCase_016564_1, VkglTestCase_016564_2);

#define VkglTestCase_016565_1 "dEQP-GLES3.functional.shaders.swi"
#define VkglTestCase_016565_2 "tch.default_label_dynamic_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016565, VkglTestCase_016565_1, VkglTestCase_016565_2);

#define VkglTestCase_016566_1 "dEQP-GLES3.functional.shaders.swi"
#define VkglTestCase_016566_2 "tch.default_not_last_static_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016566, VkglTestCase_016566_1, VkglTestCase_016566_2);

#define VkglTestCase_016567_1 "dEQP-GLES3.functional.shaders.swit"
#define VkglTestCase_016567_2 "ch.default_not_last_static_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016567, VkglTestCase_016567_1, VkglTestCase_016567_2);

#define VkglTestCase_016568_1 "dEQP-GLES3.functional.shaders.swit"
#define VkglTestCase_016568_2 "ch.default_not_last_uniform_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016568, VkglTestCase_016568_1, VkglTestCase_016568_2);

#define VkglTestCase_016569_1 "dEQP-GLES3.functional.shaders.switc"
#define VkglTestCase_016569_2 "h.default_not_last_uniform_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016569, VkglTestCase_016569_1, VkglTestCase_016569_2);

#define VkglTestCase_016570_1 "dEQP-GLES3.functional.shaders.swit"
#define VkglTestCase_016570_2 "ch.default_not_last_dynamic_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016570, VkglTestCase_016570_1, VkglTestCase_016570_2);

#define VkglTestCase_016571_1 "dEQP-GLES3.functional.shaders.switc"
#define VkglTestCase_016571_2 "h.default_not_last_dynamic_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016571, VkglTestCase_016571_1, VkglTestCase_016571_2);

#define VkglTestCase_016572_1 "dEQP-GLES3.functional.shaders.swi"
#define VkglTestCase_016572_2 "tch.no_default_label_static_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016572, VkglTestCase_016572_1, VkglTestCase_016572_2);

#define VkglTestCase_016573_1 "dEQP-GLES3.functional.shaders.swit"
#define VkglTestCase_016573_2 "ch.no_default_label_static_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016573, VkglTestCase_016573_1, VkglTestCase_016573_2);

#define VkglTestCase_016574_1 "dEQP-GLES3.functional.shaders.swit"
#define VkglTestCase_016574_2 "ch.no_default_label_uniform_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016574, VkglTestCase_016574_1, VkglTestCase_016574_2);

#define VkglTestCase_016575_1 "dEQP-GLES3.functional.shaders.switc"
#define VkglTestCase_016575_2 "h.no_default_label_uniform_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016575, VkglTestCase_016575_1, VkglTestCase_016575_2);

#define VkglTestCase_016576_1 "dEQP-GLES3.functional.shaders.swit"
#define VkglTestCase_016576_2 "ch.no_default_label_dynamic_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016576, VkglTestCase_016576_1, VkglTestCase_016576_2);

#define VkglTestCase_016577_1 "dEQP-GLES3.functional.shaders.switc"
#define VkglTestCase_016577_2 "h.no_default_label_dynamic_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016577, VkglTestCase_016577_1, VkglTestCase_016577_2);

#define VkglTestCase_016578_1 "dEQP-GLES3.functional.shaders.s"
#define VkglTestCase_016578_2 "witch.fall_through_static_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016578, VkglTestCase_016578_1, VkglTestCase_016578_2);

#define VkglTestCase_016579_1 "dEQP-GLES3.functional.shaders.sw"
#define VkglTestCase_016579_2 "itch.fall_through_static_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016579, VkglTestCase_016579_1, VkglTestCase_016579_2);

#define VkglTestCase_016580_1 "dEQP-GLES3.functional.shaders.sw"
#define VkglTestCase_016580_2 "itch.fall_through_uniform_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016580, VkglTestCase_016580_1, VkglTestCase_016580_2);

#define VkglTestCase_016581_1 "dEQP-GLES3.functional.shaders.swi"
#define VkglTestCase_016581_2 "tch.fall_through_uniform_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016581, VkglTestCase_016581_1, VkglTestCase_016581_2);

#define VkglTestCase_016582_1 "dEQP-GLES3.functional.shaders.sw"
#define VkglTestCase_016582_2 "itch.fall_through_dynamic_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016582, VkglTestCase_016582_1, VkglTestCase_016582_2);

#define VkglTestCase_016583_1 "dEQP-GLES3.functional.shaders.swi"
#define VkglTestCase_016583_2 "tch.fall_through_dynamic_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016583, VkglTestCase_016583_1, VkglTestCase_016583_2);

#define VkglTestCase_016584_1 "dEQP-GLES3.functional.shaders.switc"
#define VkglTestCase_016584_2 "h.fall_through_default_static_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016584, VkglTestCase_016584_1, VkglTestCase_016584_2);

#define VkglTestCase_016585_1 "dEQP-GLES3.functional.shaders.switch"
#define VkglTestCase_016585_2 ".fall_through_default_static_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016585, VkglTestCase_016585_1, VkglTestCase_016585_2);

#define VkglTestCase_016586_1 "dEQP-GLES3.functional.shaders.switch"
#define VkglTestCase_016586_2 ".fall_through_default_uniform_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016586, VkglTestCase_016586_1, VkglTestCase_016586_2);

#define VkglTestCase_016587_1 "dEQP-GLES3.functional.shaders.switch."
#define VkglTestCase_016587_2 "fall_through_default_uniform_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016587, VkglTestCase_016587_1, VkglTestCase_016587_2);

#define VkglTestCase_016588_1 "dEQP-GLES3.functional.shaders.switch"
#define VkglTestCase_016588_2 ".fall_through_default_dynamic_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016588, VkglTestCase_016588_1, VkglTestCase_016588_2);

#define VkglTestCase_016589_1 "dEQP-GLES3.functional.shaders.switch."
#define VkglTestCase_016589_2 "fall_through_default_dynamic_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016589, VkglTestCase_016589_1, VkglTestCase_016589_2);

#define VkglTestCase_016590_1 "dEQP-GLES3.functional.shaders.switch."
#define VkglTestCase_016590_2 "conditional_fall_through_static_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016590, VkglTestCase_016590_1, VkglTestCase_016590_2);

#define VkglTestCase_016591_1 "dEQP-GLES3.functional.shaders.switch.c"
#define VkglTestCase_016591_2 "onditional_fall_through_static_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016591, VkglTestCase_016591_1, VkglTestCase_016591_2);

#define VkglTestCase_016592_1 "dEQP-GLES3.functional.shaders.switch.c"
#define VkglTestCase_016592_2 "onditional_fall_through_uniform_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016592, VkglTestCase_016592_1, VkglTestCase_016592_2);

#define VkglTestCase_016593_1 "dEQP-GLES3.functional.shaders.switch.co"
#define VkglTestCase_016593_2 "nditional_fall_through_uniform_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016593, VkglTestCase_016593_1, VkglTestCase_016593_2);

#define VkglTestCase_016594_1 "dEQP-GLES3.functional.shaders.switch.c"
#define VkglTestCase_016594_2 "onditional_fall_through_dynamic_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016594, VkglTestCase_016594_1, VkglTestCase_016594_2);

#define VkglTestCase_016595_1 "dEQP-GLES3.functional.shaders.switch.co"
#define VkglTestCase_016595_2 "nditional_fall_through_dynamic_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016595, VkglTestCase_016595_1, VkglTestCase_016595_2);

#define VkglTestCase_016596_1 "dEQP-GLES3.functional.shaders.switch.c"
#define VkglTestCase_016596_2 "onditional_fall_through_2_static_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016596, VkglTestCase_016596_1, VkglTestCase_016596_2);

#define VkglTestCase_016597_1 "dEQP-GLES3.functional.shaders.switch.co"
#define VkglTestCase_016597_2 "nditional_fall_through_2_static_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016597, VkglTestCase_016597_1, VkglTestCase_016597_2);

#define VkglTestCase_016598_1 "dEQP-GLES3.functional.shaders.switch.co"
#define VkglTestCase_016598_2 "nditional_fall_through_2_uniform_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016598, VkglTestCase_016598_1, VkglTestCase_016598_2);

#define VkglTestCase_016599_1 "dEQP-GLES3.functional.shaders.switch.con"
#define VkglTestCase_016599_2 "ditional_fall_through_2_uniform_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016599, VkglTestCase_016599_1, VkglTestCase_016599_2);

#define VkglTestCase_016600_1 "dEQP-GLES3.functional.shaders.switch.co"
#define VkglTestCase_016600_2 "nditional_fall_through_2_dynamic_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016600, VkglTestCase_016600_1, VkglTestCase_016600_2);

#define VkglTestCase_016601_1 "dEQP-GLES3.functional.shaders.switch.con"
#define VkglTestCase_016601_2 "ditional_fall_through_2_dynamic_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016601, VkglTestCase_016601_1, VkglTestCase_016601_2);

#define VkglTestCase_016602_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_016602_2 "s.switch.scope_static_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016602, VkglTestCase_016602_1, VkglTestCase_016602_2);

#define VkglTestCase_016603_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_016603_2 ".switch.scope_static_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016603, VkglTestCase_016603_1, VkglTestCase_016603_2);

#define VkglTestCase_016604_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_016604_2 "s.switch.scope_uniform_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016604, VkglTestCase_016604_1, VkglTestCase_016604_2);

#define VkglTestCase_016605_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_016605_2 ".switch.scope_uniform_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016605, VkglTestCase_016605_1, VkglTestCase_016605_2);

#define VkglTestCase_016606_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_016606_2 "s.switch.scope_dynamic_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016606, VkglTestCase_016606_1, VkglTestCase_016606_2);

#define VkglTestCase_016607_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_016607_2 ".switch.scope_dynamic_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016607, VkglTestCase_016607_1, VkglTestCase_016607_2);

#define VkglTestCase_016608_1 "dEQP-GLES3.functional.shaders.s"
#define VkglTestCase_016608_2 "witch.switch_in_if_static_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016608, VkglTestCase_016608_1, VkglTestCase_016608_2);

#define VkglTestCase_016609_1 "dEQP-GLES3.functional.shaders.sw"
#define VkglTestCase_016609_2 "itch.switch_in_if_static_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016609, VkglTestCase_016609_1, VkglTestCase_016609_2);

#define VkglTestCase_016610_1 "dEQP-GLES3.functional.shaders.sw"
#define VkglTestCase_016610_2 "itch.switch_in_if_uniform_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016610, VkglTestCase_016610_1, VkglTestCase_016610_2);

#define VkglTestCase_016611_1 "dEQP-GLES3.functional.shaders.swi"
#define VkglTestCase_016611_2 "tch.switch_in_if_uniform_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016611, VkglTestCase_016611_1, VkglTestCase_016611_2);

#define VkglTestCase_016612_1 "dEQP-GLES3.functional.shaders.sw"
#define VkglTestCase_016612_2 "itch.switch_in_if_dynamic_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016612, VkglTestCase_016612_1, VkglTestCase_016612_2);

#define VkglTestCase_016613_1 "dEQP-GLES3.functional.shaders.swi"
#define VkglTestCase_016613_2 "tch.switch_in_if_dynamic_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016613, VkglTestCase_016613_1, VkglTestCase_016613_2);

#define VkglTestCase_016614_1 "dEQP-GLES3.functional.shaders.swit"
#define VkglTestCase_016614_2 "ch.switch_in_for_loop_static_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016614, VkglTestCase_016614_1, VkglTestCase_016614_2);

#define VkglTestCase_016615_1 "dEQP-GLES3.functional.shaders.switc"
#define VkglTestCase_016615_2 "h.switch_in_for_loop_static_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016615, VkglTestCase_016615_1, VkglTestCase_016615_2);

#define VkglTestCase_016616_1 "dEQP-GLES3.functional.shaders.switc"
#define VkglTestCase_016616_2 "h.switch_in_for_loop_uniform_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016616, VkglTestCase_016616_1, VkglTestCase_016616_2);

#define VkglTestCase_016617_1 "dEQP-GLES3.functional.shaders.switch"
#define VkglTestCase_016617_2 ".switch_in_for_loop_uniform_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016617, VkglTestCase_016617_1, VkglTestCase_016617_2);

#define VkglTestCase_016618_1 "dEQP-GLES3.functional.shaders.switc"
#define VkglTestCase_016618_2 "h.switch_in_for_loop_dynamic_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016618, VkglTestCase_016618_1, VkglTestCase_016618_2);

#define VkglTestCase_016619_1 "dEQP-GLES3.functional.shaders.switch"
#define VkglTestCase_016619_2 ".switch_in_for_loop_dynamic_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016619, VkglTestCase_016619_1, VkglTestCase_016619_2);

#define VkglTestCase_016620_1 "dEQP-GLES3.functional.shaders.switc"
#define VkglTestCase_016620_2 "h.switch_in_while_loop_static_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016620, VkglTestCase_016620_1, VkglTestCase_016620_2);

#define VkglTestCase_016621_1 "dEQP-GLES3.functional.shaders.switch"
#define VkglTestCase_016621_2 ".switch_in_while_loop_static_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016621, VkglTestCase_016621_1, VkglTestCase_016621_2);

#define VkglTestCase_016622_1 "dEQP-GLES3.functional.shaders.switch"
#define VkglTestCase_016622_2 ".switch_in_while_loop_uniform_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016622, VkglTestCase_016622_1, VkglTestCase_016622_2);

#define VkglTestCase_016623_1 "dEQP-GLES3.functional.shaders.switch."
#define VkglTestCase_016623_2 "switch_in_while_loop_uniform_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016623, VkglTestCase_016623_1, VkglTestCase_016623_2);

#define VkglTestCase_016624_1 "dEQP-GLES3.functional.shaders.switch"
#define VkglTestCase_016624_2 ".switch_in_while_loop_dynamic_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016624, VkglTestCase_016624_1, VkglTestCase_016624_2);

#define VkglTestCase_016625_1 "dEQP-GLES3.functional.shaders.switch."
#define VkglTestCase_016625_2 "switch_in_while_loop_dynamic_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016625, VkglTestCase_016625_1, VkglTestCase_016625_2);

#define VkglTestCase_016626_1 "dEQP-GLES3.functional.shaders.switch."
#define VkglTestCase_016626_2 "switch_in_do_while_loop_static_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016626, VkglTestCase_016626_1, VkglTestCase_016626_2);

#define VkglTestCase_016627_1 "dEQP-GLES3.functional.shaders.switch.s"
#define VkglTestCase_016627_2 "witch_in_do_while_loop_static_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016627, VkglTestCase_016627_1, VkglTestCase_016627_2);

#define VkglTestCase_016628_1 "dEQP-GLES3.functional.shaders.switch."
#define VkglTestCase_016628_2 "switch_in_do_while_loop_uniform_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016628, VkglTestCase_016628_1, VkglTestCase_016628_2);

#define VkglTestCase_016629_1 "dEQP-GLES3.functional.shaders.switch.s"
#define VkglTestCase_016629_2 "witch_in_do_while_loop_uniform_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016629, VkglTestCase_016629_1, VkglTestCase_016629_2);

#define VkglTestCase_016630_1 "dEQP-GLES3.functional.shaders.switch."
#define VkglTestCase_016630_2 "switch_in_do_while_loop_dynamic_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016630, VkglTestCase_016630_1, VkglTestCase_016630_2);

#define VkglTestCase_016631_1 "dEQP-GLES3.functional.shaders.switch.s"
#define VkglTestCase_016631_2 "witch_in_do_while_loop_dynamic_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016631, VkglTestCase_016631_1, VkglTestCase_016631_2);

#define VkglTestCase_016632_1 "dEQP-GLES3.functional.shaders.s"
#define VkglTestCase_016632_2 "witch.if_in_switch_static_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016632, VkglTestCase_016632_1, VkglTestCase_016632_2);

#define VkglTestCase_016633_1 "dEQP-GLES3.functional.shaders.sw"
#define VkglTestCase_016633_2 "itch.if_in_switch_static_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016633, VkglTestCase_016633_1, VkglTestCase_016633_2);

#define VkglTestCase_016634_1 "dEQP-GLES3.functional.shaders.sw"
#define VkglTestCase_016634_2 "itch.if_in_switch_uniform_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016634, VkglTestCase_016634_1, VkglTestCase_016634_2);

#define VkglTestCase_016635_1 "dEQP-GLES3.functional.shaders.swi"
#define VkglTestCase_016635_2 "tch.if_in_switch_uniform_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016635, VkglTestCase_016635_1, VkglTestCase_016635_2);

#define VkglTestCase_016636_1 "dEQP-GLES3.functional.shaders.sw"
#define VkglTestCase_016636_2 "itch.if_in_switch_dynamic_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016636, VkglTestCase_016636_1, VkglTestCase_016636_2);

#define VkglTestCase_016637_1 "dEQP-GLES3.functional.shaders.swi"
#define VkglTestCase_016637_2 "tch.if_in_switch_dynamic_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016637, VkglTestCase_016637_1, VkglTestCase_016637_2);

#define VkglTestCase_016638_1 "dEQP-GLES3.functional.shaders.swit"
#define VkglTestCase_016638_2 "ch.for_loop_in_switch_static_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016638, VkglTestCase_016638_1, VkglTestCase_016638_2);

#define VkglTestCase_016639_1 "dEQP-GLES3.functional.shaders.switc"
#define VkglTestCase_016639_2 "h.for_loop_in_switch_static_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016639, VkglTestCase_016639_1, VkglTestCase_016639_2);

#define VkglTestCase_016640_1 "dEQP-GLES3.functional.shaders.switc"
#define VkglTestCase_016640_2 "h.for_loop_in_switch_uniform_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016640, VkglTestCase_016640_1, VkglTestCase_016640_2);

#define VkglTestCase_016641_1 "dEQP-GLES3.functional.shaders.switch"
#define VkglTestCase_016641_2 ".for_loop_in_switch_uniform_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016641, VkglTestCase_016641_1, VkglTestCase_016641_2);

#define VkglTestCase_016642_1 "dEQP-GLES3.functional.shaders.switc"
#define VkglTestCase_016642_2 "h.for_loop_in_switch_dynamic_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016642, VkglTestCase_016642_1, VkglTestCase_016642_2);

#define VkglTestCase_016643_1 "dEQP-GLES3.functional.shaders.switch"
#define VkglTestCase_016643_2 ".for_loop_in_switch_dynamic_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016643, VkglTestCase_016643_1, VkglTestCase_016643_2);

#define VkglTestCase_016644_1 "dEQP-GLES3.functional.shaders.switc"
#define VkglTestCase_016644_2 "h.while_loop_in_switch_static_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016644, VkglTestCase_016644_1, VkglTestCase_016644_2);

#define VkglTestCase_016645_1 "dEQP-GLES3.functional.shaders.switch"
#define VkglTestCase_016645_2 ".while_loop_in_switch_static_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016645, VkglTestCase_016645_1, VkglTestCase_016645_2);

#define VkglTestCase_016646_1 "dEQP-GLES3.functional.shaders.switch"
#define VkglTestCase_016646_2 ".while_loop_in_switch_uniform_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016646, VkglTestCase_016646_1, VkglTestCase_016646_2);

#define VkglTestCase_016647_1 "dEQP-GLES3.functional.shaders.switch."
#define VkglTestCase_016647_2 "while_loop_in_switch_uniform_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016647, VkglTestCase_016647_1, VkglTestCase_016647_2);

#define VkglTestCase_016648_1 "dEQP-GLES3.functional.shaders.switch"
#define VkglTestCase_016648_2 ".while_loop_in_switch_dynamic_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016648, VkglTestCase_016648_1, VkglTestCase_016648_2);

#define VkglTestCase_016649_1 "dEQP-GLES3.functional.shaders.switch."
#define VkglTestCase_016649_2 "while_loop_in_switch_dynamic_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016649, VkglTestCase_016649_1, VkglTestCase_016649_2);

#define VkglTestCase_016650_1 "dEQP-GLES3.functional.shaders.switch."
#define VkglTestCase_016650_2 "do_while_loop_in_switch_static_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016650, VkglTestCase_016650_1, VkglTestCase_016650_2);

#define VkglTestCase_016651_1 "dEQP-GLES3.functional.shaders.switch.d"
#define VkglTestCase_016651_2 "o_while_loop_in_switch_static_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016651, VkglTestCase_016651_1, VkglTestCase_016651_2);

#define VkglTestCase_016652_1 "dEQP-GLES3.functional.shaders.switch."
#define VkglTestCase_016652_2 "do_while_loop_in_switch_uniform_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016652, VkglTestCase_016652_1, VkglTestCase_016652_2);

#define VkglTestCase_016653_1 "dEQP-GLES3.functional.shaders.switch.d"
#define VkglTestCase_016653_2 "o_while_loop_in_switch_uniform_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016653, VkglTestCase_016653_1, VkglTestCase_016653_2);

#define VkglTestCase_016654_1 "dEQP-GLES3.functional.shaders.switch."
#define VkglTestCase_016654_2 "do_while_loop_in_switch_dynamic_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016654, VkglTestCase_016654_1, VkglTestCase_016654_2);

#define VkglTestCase_016655_1 "dEQP-GLES3.functional.shaders.switch.d"
#define VkglTestCase_016655_2 "o_while_loop_in_switch_dynamic_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016655, VkglTestCase_016655_1, VkglTestCase_016655_2);

#define VkglTestCase_016656_1 "dEQP-GLES3.functional.shaders.swi"
#define VkglTestCase_016656_2 "tch.switch_in_switch_static_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016656, VkglTestCase_016656_1, VkglTestCase_016656_2);

#define VkglTestCase_016657_1 "dEQP-GLES3.functional.shaders.swit"
#define VkglTestCase_016657_2 "ch.switch_in_switch_static_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016657, VkglTestCase_016657_1, VkglTestCase_016657_2);

#define VkglTestCase_016658_1 "dEQP-GLES3.functional.shaders.swit"
#define VkglTestCase_016658_2 "ch.switch_in_switch_uniform_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016658, VkglTestCase_016658_1, VkglTestCase_016658_2);

#define VkglTestCase_016659_1 "dEQP-GLES3.functional.shaders.switc"
#define VkglTestCase_016659_2 "h.switch_in_switch_uniform_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016659, VkglTestCase_016659_1, VkglTestCase_016659_2);

#define VkglTestCase_016660_1 "dEQP-GLES3.functional.shaders.swit"
#define VkglTestCase_016660_2 "ch.switch_in_switch_dynamic_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016660, VkglTestCase_016660_1, VkglTestCase_016660_2);

#define VkglTestCase_016661_1 "dEQP-GLES3.functional.shaders.switc"
#define VkglTestCase_016661_2 "h.switch_in_switch_dynamic_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016661, VkglTestCase_016661_1, VkglTestCase_016661_2);

#define VkglTestCase_016662_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_016662_2 ".switch.empty_condition_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016662, VkglTestCase_016662_1, VkglTestCase_016662_2);

#define VkglTestCase_016663_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_016663_2 "switch.empty_condition_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016663, VkglTestCase_016663_1, VkglTestCase_016663_2);

#define VkglTestCase_016664_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_016664_2 ".switch.condition_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016664, VkglTestCase_016664_1, VkglTestCase_016664_2);

#define VkglTestCase_016665_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_016665_2 "switch.condition_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016665, VkglTestCase_016665_1, VkglTestCase_016665_2);

#define VkglTestCase_016666_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_016666_2 ".switch.condition_bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016666, VkglTestCase_016666_1, VkglTestCase_016666_2);

#define VkglTestCase_016667_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_016667_2 "switch.condition_bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016667, VkglTestCase_016667_1, VkglTestCase_016667_2);

#define VkglTestCase_016668_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_016668_2 ".switch.condition_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016668, VkglTestCase_016668_1, VkglTestCase_016668_2);

#define VkglTestCase_016669_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_016669_2 "switch.condition_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016669, VkglTestCase_016669_1, VkglTestCase_016669_2);

#define VkglTestCase_016670_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_016670_2 "switch.condition_struct_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016670, VkglTestCase_016670_1, VkglTestCase_016670_2);

#define VkglTestCase_016671_1 "dEQP-GLES3.functional.shaders.s"
#define VkglTestCase_016671_2 "witch.condition_struct_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016671, VkglTestCase_016671_1, VkglTestCase_016671_2);

#define VkglTestCase_016672_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_016672_2 ".switch.duplicate_label_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016672, VkglTestCase_016672_1, VkglTestCase_016672_2);

#define VkglTestCase_016673_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_016673_2 "switch.duplicate_label_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016673, VkglTestCase_016673_1, VkglTestCase_016673_2);

#define VkglTestCase_016674_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_016674_2 "rs.switch.float_label_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016674, VkglTestCase_016674_1, VkglTestCase_016674_2);

#define VkglTestCase_016675_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_016675_2 "s.switch.float_label_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016675, VkglTestCase_016675_1, VkglTestCase_016675_2);

#define VkglTestCase_016676_1 "dEQP-GLES3.functional.shaders.s"
#define VkglTestCase_016676_2 "witch.non_const_int_label_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016676, VkglTestCase_016676_1, VkglTestCase_016676_2);

#define VkglTestCase_016677_1 "dEQP-GLES3.functional.shaders.sw"
#define VkglTestCase_016677_2 "itch.non_const_int_label_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016677, VkglTestCase_016677_1, VkglTestCase_016677_2);

#define VkglTestCase_016678_1 "dEQP-GLES3.functional.shaders.swi"
#define VkglTestCase_016678_2 "tch.statement_before_label_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016678, VkglTestCase_016678_1, VkglTestCase_016678_2);

#define VkglTestCase_016679_1 "dEQP-GLES3.functional.shaders.swit"
#define VkglTestCase_016679_2 "ch.statement_before_label_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016679, VkglTestCase_016679_1, VkglTestCase_016679_2);

#define VkglTestCase_016680_1 "dEQP-GLES3.functional.shaders.switch."
#define VkglTestCase_016680_2 "statement_before_default_label_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016680, VkglTestCase_016680_1, VkglTestCase_016680_2);

#define VkglTestCase_016681_1 "dEQP-GLES3.functional.shaders.switch.s"
#define VkglTestCase_016681_2 "tatement_before_default_label_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016681, VkglTestCase_016681_1, VkglTestCase_016681_2);

#define VkglTestCase_016682_1 "dEQP-GLES3.functional.shaders.swit"
#define VkglTestCase_016682_2 "ch.no_statement_after_label_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016682, VkglTestCase_016682_1, VkglTestCase_016682_2);

#define VkglTestCase_016683_1 "dEQP-GLES3.functional.shaders.switc"
#define VkglTestCase_016683_2 "h.no_statement_after_label_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016683, VkglTestCase_016683_1, VkglTestCase_016683_2);

#define VkglTestCase_016684_1 "dEQP-GLES3.functional.shaders.switch.n"
#define VkglTestCase_016684_2 "o_statement_after_default_label_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016684, VkglTestCase_016684_1, VkglTestCase_016684_2);

#define VkglTestCase_016685_1 "dEQP-GLES3.functional.shaders.switch.no"
#define VkglTestCase_016685_2 "_statement_after_default_label_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016685, VkglTestCase_016685_1, VkglTestCase_016685_2);

#define VkglTestCase_016686_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_016686_2 "rs.switch.case_in_if_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016686, VkglTestCase_016686_1, VkglTestCase_016686_2);

#define VkglTestCase_016687_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_016687_2 "s.switch.case_in_if_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016687, VkglTestCase_016687_1, VkglTestCase_016687_2);

#define VkglTestCase_016688_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_016688_2 "s.switch.default_in_if_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016688, VkglTestCase_016688_1, VkglTestCase_016688_2);

#define VkglTestCase_016689_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_016689_2 ".switch.default_in_if_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016689, VkglTestCase_016689_1, VkglTestCase_016689_2);

#define VkglTestCase_016690_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_016690_2 "switch.case_in_for_loop_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016690, VkglTestCase_016690_1, VkglTestCase_016690_2);

#define VkglTestCase_016691_1 "dEQP-GLES3.functional.shaders.s"
#define VkglTestCase_016691_2 "witch.case_in_for_loop_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016691, VkglTestCase_016691_1, VkglTestCase_016691_2);

#define VkglTestCase_016692_1 "dEQP-GLES3.functional.shaders.s"
#define VkglTestCase_016692_2 "witch.default_in_for_loop_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016692, VkglTestCase_016692_1, VkglTestCase_016692_2);

#define VkglTestCase_016693_1 "dEQP-GLES3.functional.shaders.sw"
#define VkglTestCase_016693_2 "itch.default_in_for_loop_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016693, VkglTestCase_016693_1, VkglTestCase_016693_2);

#define VkglTestCase_016694_1 "dEQP-GLES3.functional.shaders.s"
#define VkglTestCase_016694_2 "witch.case_in_while_loop_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016694, VkglTestCase_016694_1, VkglTestCase_016694_2);

#define VkglTestCase_016695_1 "dEQP-GLES3.functional.shaders.sw"
#define VkglTestCase_016695_2 "itch.case_in_while_loop_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016695, VkglTestCase_016695_1, VkglTestCase_016695_2);

#define VkglTestCase_016696_1 "dEQP-GLES3.functional.shaders.sw"
#define VkglTestCase_016696_2 "itch.default_in_while_loop_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016696, VkglTestCase_016696_1, VkglTestCase_016696_2);

#define VkglTestCase_016697_1 "dEQP-GLES3.functional.shaders.swi"
#define VkglTestCase_016697_2 "tch.default_in_while_loop_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016697, VkglTestCase_016697_1, VkglTestCase_016697_2);

#define VkglTestCase_016698_1 "dEQP-GLES3.functional.shaders.sw"
#define VkglTestCase_016698_2 "itch.case_in_do_while_loop_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016698, VkglTestCase_016698_1, VkglTestCase_016698_2);

#define VkglTestCase_016699_1 "dEQP-GLES3.functional.shaders.swi"
#define VkglTestCase_016699_2 "tch.case_in_do_while_loop_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016699, VkglTestCase_016699_1, VkglTestCase_016699_2);

#define VkglTestCase_016700_1 "dEQP-GLES3.functional.shaders.swit"
#define VkglTestCase_016700_2 "ch.default_in_do_while_loop_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016700, VkglTestCase_016700_1, VkglTestCase_016700_2);

#define VkglTestCase_016701_1 "dEQP-GLES3.functional.shaders.switc"
#define VkglTestCase_016701_2 "h.default_in_do_while_loop_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016701, VkglTestCase_016701_1, VkglTestCase_016701_2);

#define VkglTestCase_016702_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_016702_2 "s.switch.missing_colon_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016702, VkglTestCase_016702_1, VkglTestCase_016702_2);

#define VkglTestCase_016703_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_016703_2 ".switch.missing_colon_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016703, VkglTestCase_016703_1, VkglTestCase_016703_2);

#define VkglTestCase_016704_1 "dEQP-GLES3.functional.shaders.sw"
#define VkglTestCase_016704_2 "itch.missing_opening_brace_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016704, VkglTestCase_016704_1, VkglTestCase_016704_2);

#define VkglTestCase_016705_1 "dEQP-GLES3.functional.shaders.swi"
#define VkglTestCase_016705_2 "tch.missing_opening_brace_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016705, VkglTestCase_016705_1, VkglTestCase_016705_2);

#define VkglTestCase_016706_1 "dEQP-GLES3.functional.shaders.sw"
#define VkglTestCase_016706_2 "itch.missing_closing_brace_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016706, VkglTestCase_016706_1, VkglTestCase_016706_2);

#define VkglTestCase_016707_1 "dEQP-GLES3.functional.shaders.swi"
#define VkglTestCase_016707_2 "tch.missing_closing_brace_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016707, VkglTestCase_016707_1, VkglTestCase_016707_2);

#define VkglTestCase_016708_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_016708_2 "rs.switch.double_case_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016708, VkglTestCase_016708_1, VkglTestCase_016708_2);

#define VkglTestCase_016709_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_016709_2 "s.switch.double_case_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016709, VkglTestCase_016709_1, VkglTestCase_016709_2);

#define VkglTestCase_016710_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_016710_2 "switch.double_default_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016710, VkglTestCase_016710_1, VkglTestCase_016710_2);

#define VkglTestCase_016711_1 "dEQP-GLES3.functional.shaders.s"
#define VkglTestCase_016711_2 "witch.double_default_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016711, VkglTestCase_016711_1, VkglTestCase_016711_2);

#define VkglTestCase_016712_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_016712_2 "switch.double_default_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016712, VkglTestCase_016712_1, VkglTestCase_016712_2);

#define VkglTestCase_016713_1 "dEQP-GLES3.functional.shaders.s"
#define VkglTestCase_016713_2 "witch.double_default_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016713, VkglTestCase_016713_1, VkglTestCase_016713_2);
