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

#define VkglTestCase_011855_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011855_2 "re.buffer.atomic.exchange_r32f_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011855, VkglTestCase_011855_1, VkglTestCase_011855_2);

#define VkglTestCase_011856_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011856_2 "buffer.atomic.exchange_r32f_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011856, VkglTestCase_011856_1, VkglTestCase_011856_2);

#define VkglTestCase_011857_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011857_2 "tore.buffer.atomic.add_r32ui_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011857, VkglTestCase_011857_1, VkglTestCase_011857_2);

#define VkglTestCase_011858_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011858_2 "e.buffer.atomic.add_r32ui_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011858, VkglTestCase_011858_1, VkglTestCase_011858_2);

#define VkglTestCase_011859_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011859_2 "tore.buffer.atomic.min_r32ui_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011859, VkglTestCase_011859_1, VkglTestCase_011859_2);

#define VkglTestCase_011860_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011860_2 "e.buffer.atomic.min_r32ui_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011860, VkglTestCase_011860_1, VkglTestCase_011860_2);

#define VkglTestCase_011861_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011861_2 "tore.buffer.atomic.max_r32ui_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011861, VkglTestCase_011861_1, VkglTestCase_011861_2);

#define VkglTestCase_011862_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011862_2 "e.buffer.atomic.max_r32ui_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011862, VkglTestCase_011862_1, VkglTestCase_011862_2);

#define VkglTestCase_011863_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011863_2 "tore.buffer.atomic.and_r32ui_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011863, VkglTestCase_011863_1, VkglTestCase_011863_2);

#define VkglTestCase_011864_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011864_2 "e.buffer.atomic.and_r32ui_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011864, VkglTestCase_011864_1, VkglTestCase_011864_2);

#define VkglTestCase_011865_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011865_2 "store.buffer.atomic.or_r32ui_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011865, VkglTestCase_011865_1, VkglTestCase_011865_2);

#define VkglTestCase_011866_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011866_2 "re.buffer.atomic.or_r32ui_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011866, VkglTestCase_011866_1, VkglTestCase_011866_2);

#define VkglTestCase_011867_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011867_2 "tore.buffer.atomic.xor_r32ui_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011867, VkglTestCase_011867_1, VkglTestCase_011867_2);

#define VkglTestCase_011868_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011868_2 "e.buffer.atomic.xor_r32ui_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011868, VkglTestCase_011868_1, VkglTestCase_011868_2);

#define VkglTestCase_011869_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011869_2 "re.buffer.atomic.exchange_r32ui_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011869, VkglTestCase_011869_1, VkglTestCase_011869_2);

#define VkglTestCase_011870_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011870_2 "buffer.atomic.exchange_r32ui_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011870, VkglTestCase_011870_1, VkglTestCase_011870_2);

#define VkglTestCase_011871_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011871_2 "e.buffer.atomic.comp_swap_r32ui_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011871, VkglTestCase_011871_1, VkglTestCase_011871_2);

#define VkglTestCase_011872_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011872_2 "store.buffer.atomic.add_r32i_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011872, VkglTestCase_011872_1, VkglTestCase_011872_2);

#define VkglTestCase_011873_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011873_2 "re.buffer.atomic.add_r32i_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011873, VkglTestCase_011873_1, VkglTestCase_011873_2);

#define VkglTestCase_011874_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011874_2 "store.buffer.atomic.min_r32i_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011874, VkglTestCase_011874_1, VkglTestCase_011874_2);

#define VkglTestCase_011875_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011875_2 "re.buffer.atomic.min_r32i_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011875, VkglTestCase_011875_1, VkglTestCase_011875_2);

#define VkglTestCase_011876_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011876_2 "store.buffer.atomic.max_r32i_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011876, VkglTestCase_011876_1, VkglTestCase_011876_2);

#define VkglTestCase_011877_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011877_2 "re.buffer.atomic.max_r32i_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011877, VkglTestCase_011877_1, VkglTestCase_011877_2);

#define VkglTestCase_011878_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011878_2 "store.buffer.atomic.and_r32i_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011878, VkglTestCase_011878_1, VkglTestCase_011878_2);

#define VkglTestCase_011879_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011879_2 "re.buffer.atomic.and_r32i_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011879, VkglTestCase_011879_1, VkglTestCase_011879_2);

#define VkglTestCase_011880_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011880_2 "store.buffer.atomic.or_r32i_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011880, VkglTestCase_011880_1, VkglTestCase_011880_2);

#define VkglTestCase_011881_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011881_2 "re.buffer.atomic.or_r32i_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011881, VkglTestCase_011881_1, VkglTestCase_011881_2);

#define VkglTestCase_011882_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011882_2 "store.buffer.atomic.xor_r32i_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011882, VkglTestCase_011882_1, VkglTestCase_011882_2);

#define VkglTestCase_011883_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011883_2 "re.buffer.atomic.xor_r32i_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011883, VkglTestCase_011883_1, VkglTestCase_011883_2);

#define VkglTestCase_011884_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011884_2 "re.buffer.atomic.exchange_r32i_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011884, VkglTestCase_011884_1, VkglTestCase_011884_2);

#define VkglTestCase_011885_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011885_2 "buffer.atomic.exchange_r32i_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011885, VkglTestCase_011885_1, VkglTestCase_011885_2);

#define VkglTestCase_011886_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011886_2 "re.buffer.atomic.comp_swap_r32i_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011886, VkglTestCase_011886_1, VkglTestCase_011886_2);
