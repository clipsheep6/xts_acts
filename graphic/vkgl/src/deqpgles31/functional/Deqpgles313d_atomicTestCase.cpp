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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310012TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_011569_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011569_2 "tore.3d.atomic.exchange_r32f_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011569, VkglTestCase_011569_1, VkglTestCase_011569_2);

#define VkglTestCase_011570_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011570_2 "e.3d.atomic.exchange_r32f_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011570, VkglTestCase_011570_1, VkglTestCase_011570_2);

#define VkglTestCase_011571_1 "dEQP-GLES31.functional.image_load"
#define VkglTestCase_011571_2 "_store.3d.atomic.add_r32ui_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011571, VkglTestCase_011571_1, VkglTestCase_011571_2);

#define VkglTestCase_011572_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011572_2 "ore.3d.atomic.add_r32ui_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011572, VkglTestCase_011572_1, VkglTestCase_011572_2);

#define VkglTestCase_011573_1 "dEQP-GLES31.functional.image_load"
#define VkglTestCase_011573_2 "_store.3d.atomic.min_r32ui_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011573, VkglTestCase_011573_1, VkglTestCase_011573_2);

#define VkglTestCase_011574_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011574_2 "ore.3d.atomic.min_r32ui_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011574, VkglTestCase_011574_1, VkglTestCase_011574_2);

#define VkglTestCase_011575_1 "dEQP-GLES31.functional.image_load"
#define VkglTestCase_011575_2 "_store.3d.atomic.max_r32ui_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011575, VkglTestCase_011575_1, VkglTestCase_011575_2);

#define VkglTestCase_011576_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011576_2 "ore.3d.atomic.max_r32ui_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011576, VkglTestCase_011576_1, VkglTestCase_011576_2);

#define VkglTestCase_011577_1 "dEQP-GLES31.functional.image_load"
#define VkglTestCase_011577_2 "_store.3d.atomic.and_r32ui_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011577, VkglTestCase_011577_1, VkglTestCase_011577_2);

#define VkglTestCase_011578_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011578_2 "ore.3d.atomic.and_r32ui_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011578, VkglTestCase_011578_1, VkglTestCase_011578_2);

#define VkglTestCase_011579_1 "dEQP-GLES31.functional.image_loa"
#define VkglTestCase_011579_2 "d_store.3d.atomic.or_r32ui_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011579, VkglTestCase_011579_1, VkglTestCase_011579_2);

#define VkglTestCase_011580_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011580_2 "tore.3d.atomic.or_r32ui_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011580, VkglTestCase_011580_1, VkglTestCase_011580_2);

#define VkglTestCase_011581_1 "dEQP-GLES31.functional.image_load"
#define VkglTestCase_011581_2 "_store.3d.atomic.xor_r32ui_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011581, VkglTestCase_011581_1, VkglTestCase_011581_2);

#define VkglTestCase_011582_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011582_2 "ore.3d.atomic.xor_r32ui_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011582, VkglTestCase_011582_1, VkglTestCase_011582_2);

#define VkglTestCase_011583_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011583_2 "tore.3d.atomic.exchange_r32ui_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011583, VkglTestCase_011583_1, VkglTestCase_011583_2);

#define VkglTestCase_011584_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011584_2 "e.3d.atomic.exchange_r32ui_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011584, VkglTestCase_011584_1, VkglTestCase_011584_2);

#define VkglTestCase_011585_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011585_2 "ore.3d.atomic.comp_swap_r32ui_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011585, VkglTestCase_011585_1, VkglTestCase_011585_2);

#define VkglTestCase_011586_1 "dEQP-GLES31.functional.image_loa"
#define VkglTestCase_011586_2 "d_store.3d.atomic.add_r32i_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011586, VkglTestCase_011586_1, VkglTestCase_011586_2);

#define VkglTestCase_011587_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011587_2 "tore.3d.atomic.add_r32i_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011587, VkglTestCase_011587_1, VkglTestCase_011587_2);

#define VkglTestCase_011588_1 "dEQP-GLES31.functional.image_loa"
#define VkglTestCase_011588_2 "d_store.3d.atomic.min_r32i_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011588, VkglTestCase_011588_1, VkglTestCase_011588_2);

#define VkglTestCase_011589_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011589_2 "tore.3d.atomic.min_r32i_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011589, VkglTestCase_011589_1, VkglTestCase_011589_2);

#define VkglTestCase_011590_1 "dEQP-GLES31.functional.image_loa"
#define VkglTestCase_011590_2 "d_store.3d.atomic.max_r32i_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011590, VkglTestCase_011590_1, VkglTestCase_011590_2);

#define VkglTestCase_011591_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011591_2 "tore.3d.atomic.max_r32i_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011591, VkglTestCase_011591_1, VkglTestCase_011591_2);

#define VkglTestCase_011592_1 "dEQP-GLES31.functional.image_loa"
#define VkglTestCase_011592_2 "d_store.3d.atomic.and_r32i_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011592, VkglTestCase_011592_1, VkglTestCase_011592_2);

#define VkglTestCase_011593_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011593_2 "tore.3d.atomic.and_r32i_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011593, VkglTestCase_011593_1, VkglTestCase_011593_2);

#define VkglTestCase_011594_1 "dEQP-GLES31.functional.image_loa"
#define VkglTestCase_011594_2 "d_store.3d.atomic.or_r32i_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011594, VkglTestCase_011594_1, VkglTestCase_011594_2);

#define VkglTestCase_011595_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011595_2 "tore.3d.atomic.or_r32i_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011595, VkglTestCase_011595_1, VkglTestCase_011595_2);

#define VkglTestCase_011596_1 "dEQP-GLES31.functional.image_loa"
#define VkglTestCase_011596_2 "d_store.3d.atomic.xor_r32i_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011596, VkglTestCase_011596_1, VkglTestCase_011596_2);

#define VkglTestCase_011597_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011597_2 "tore.3d.atomic.xor_r32i_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011597, VkglTestCase_011597_1, VkglTestCase_011597_2);

#define VkglTestCase_011598_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011598_2 "tore.3d.atomic.exchange_r32i_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011598, VkglTestCase_011598_1, VkglTestCase_011598_2);

#define VkglTestCase_011599_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011599_2 "e.3d.atomic.exchange_r32i_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011599, VkglTestCase_011599_1, VkglTestCase_011599_2);

#define VkglTestCase_011600_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011600_2 "tore.3d.atomic.comp_swap_r32i_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011600, VkglTestCase_011600_1, VkglTestCase_011600_2);
