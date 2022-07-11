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

#define VkglTestCase_011726_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011726_2 "e.2d_array.atomic.exchange_r32f_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011726, VkglTestCase_011726_1, VkglTestCase_011726_2);

#define VkglTestCase_011727_1 "dEQP-GLES31.functional.image_load_store.2"
#define VkglTestCase_011727_2 "d_array.atomic.exchange_r32f_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011727, VkglTestCase_011727_1, VkglTestCase_011727_2);

#define VkglTestCase_011728_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011728_2 "ore.2d_array.atomic.add_r32ui_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011728, VkglTestCase_011728_1, VkglTestCase_011728_2);

#define VkglTestCase_011729_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011729_2 ".2d_array.atomic.add_r32ui_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011729, VkglTestCase_011729_1, VkglTestCase_011729_2);

#define VkglTestCase_011730_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011730_2 "ore.2d_array.atomic.min_r32ui_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011730, VkglTestCase_011730_1, VkglTestCase_011730_2);

#define VkglTestCase_011731_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011731_2 ".2d_array.atomic.min_r32ui_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011731, VkglTestCase_011731_1, VkglTestCase_011731_2);

#define VkglTestCase_011732_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011732_2 "ore.2d_array.atomic.max_r32ui_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011732, VkglTestCase_011732_1, VkglTestCase_011732_2);

#define VkglTestCase_011733_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011733_2 ".2d_array.atomic.max_r32ui_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011733, VkglTestCase_011733_1, VkglTestCase_011733_2);

#define VkglTestCase_011734_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011734_2 "ore.2d_array.atomic.and_r32ui_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011734, VkglTestCase_011734_1, VkglTestCase_011734_2);

#define VkglTestCase_011735_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011735_2 ".2d_array.atomic.and_r32ui_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011735, VkglTestCase_011735_1, VkglTestCase_011735_2);

#define VkglTestCase_011736_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011736_2 "tore.2d_array.atomic.or_r32ui_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011736, VkglTestCase_011736_1, VkglTestCase_011736_2);

#define VkglTestCase_011737_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011737_2 "e.2d_array.atomic.or_r32ui_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011737, VkglTestCase_011737_1, VkglTestCase_011737_2);

#define VkglTestCase_011738_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011738_2 "ore.2d_array.atomic.xor_r32ui_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011738, VkglTestCase_011738_1, VkglTestCase_011738_2);

#define VkglTestCase_011739_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011739_2 ".2d_array.atomic.xor_r32ui_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011739, VkglTestCase_011739_1, VkglTestCase_011739_2);

#define VkglTestCase_011740_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011740_2 "e.2d_array.atomic.exchange_r32ui_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011740, VkglTestCase_011740_1, VkglTestCase_011740_2);

#define VkglTestCase_011741_1 "dEQP-GLES31.functional.image_load_store.2"
#define VkglTestCase_011741_2 "d_array.atomic.exchange_r32ui_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011741, VkglTestCase_011741_1, VkglTestCase_011741_2);

#define VkglTestCase_011742_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011742_2 ".2d_array.atomic.comp_swap_r32ui_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011742, VkglTestCase_011742_1, VkglTestCase_011742_2);

#define VkglTestCase_011743_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011743_2 "tore.2d_array.atomic.add_r32i_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011743, VkglTestCase_011743_1, VkglTestCase_011743_2);

#define VkglTestCase_011744_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011744_2 "e.2d_array.atomic.add_r32i_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011744, VkglTestCase_011744_1, VkglTestCase_011744_2);

#define VkglTestCase_011745_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011745_2 "tore.2d_array.atomic.min_r32i_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011745, VkglTestCase_011745_1, VkglTestCase_011745_2);

#define VkglTestCase_011746_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011746_2 "e.2d_array.atomic.min_r32i_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011746, VkglTestCase_011746_1, VkglTestCase_011746_2);

#define VkglTestCase_011747_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011747_2 "tore.2d_array.atomic.max_r32i_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011747, VkglTestCase_011747_1, VkglTestCase_011747_2);

#define VkglTestCase_011748_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011748_2 "e.2d_array.atomic.max_r32i_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011748, VkglTestCase_011748_1, VkglTestCase_011748_2);

#define VkglTestCase_011749_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011749_2 "tore.2d_array.atomic.and_r32i_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011749, VkglTestCase_011749_1, VkglTestCase_011749_2);

#define VkglTestCase_011750_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011750_2 "e.2d_array.atomic.and_r32i_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011750, VkglTestCase_011750_1, VkglTestCase_011750_2);

#define VkglTestCase_011751_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011751_2 "tore.2d_array.atomic.or_r32i_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011751, VkglTestCase_011751_1, VkglTestCase_011751_2);

#define VkglTestCase_011752_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011752_2 "e.2d_array.atomic.or_r32i_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011752, VkglTestCase_011752_1, VkglTestCase_011752_2);

#define VkglTestCase_011753_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011753_2 "tore.2d_array.atomic.xor_r32i_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011753, VkglTestCase_011753_1, VkglTestCase_011753_2);

#define VkglTestCase_011754_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011754_2 "e.2d_array.atomic.xor_r32i_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011754, VkglTestCase_011754_1, VkglTestCase_011754_2);

#define VkglTestCase_011755_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011755_2 "e.2d_array.atomic.exchange_r32i_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011755, VkglTestCase_011755_1, VkglTestCase_011755_2);

#define VkglTestCase_011756_1 "dEQP-GLES31.functional.image_load_store.2"
#define VkglTestCase_011756_2 "d_array.atomic.exchange_r32i_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011756, VkglTestCase_011756_1, VkglTestCase_011756_2);

#define VkglTestCase_011757_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011757_2 "e.2d_array.atomic.comp_swap_r32i_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011757, VkglTestCase_011757_1, VkglTestCase_011757_2);
