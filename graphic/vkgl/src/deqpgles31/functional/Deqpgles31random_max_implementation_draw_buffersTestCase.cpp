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
#include "../ActsDeqpgles310038TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_037699_1 "dEQP-GLES31.functional.draw_buffers_indexe"
#define VkglTestCase_037699_2 "d.random.max_implementation_draw_buffers.0"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037699, VkglTestCase_037699_1, VkglTestCase_037699_2);

#define VkglTestCase_037700_1 "dEQP-GLES31.functional.draw_buffers_indexe"
#define VkglTestCase_037700_2 "d.random.max_implementation_draw_buffers.1"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037700, VkglTestCase_037700_1, VkglTestCase_037700_2);

#define VkglTestCase_037701_1 "dEQP-GLES31.functional.draw_buffers_indexe"
#define VkglTestCase_037701_2 "d.random.max_implementation_draw_buffers.2"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037701, VkglTestCase_037701_1, VkglTestCase_037701_2);

#define VkglTestCase_037702_1 "dEQP-GLES31.functional.draw_buffers_indexe"
#define VkglTestCase_037702_2 "d.random.max_implementation_draw_buffers.3"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037702, VkglTestCase_037702_1, VkglTestCase_037702_2);

#define VkglTestCase_037703_1 "dEQP-GLES31.functional.draw_buffers_indexe"
#define VkglTestCase_037703_2 "d.random.max_implementation_draw_buffers.4"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037703, VkglTestCase_037703_1, VkglTestCase_037703_2);

#define VkglTestCase_037704_1 "dEQP-GLES31.functional.draw_buffers_indexe"
#define VkglTestCase_037704_2 "d.random.max_implementation_draw_buffers.5"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037704, VkglTestCase_037704_1, VkglTestCase_037704_2);

#define VkglTestCase_037705_1 "dEQP-GLES31.functional.draw_buffers_indexe"
#define VkglTestCase_037705_2 "d.random.max_implementation_draw_buffers.6"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037705, VkglTestCase_037705_1, VkglTestCase_037705_2);

#define VkglTestCase_037706_1 "dEQP-GLES31.functional.draw_buffers_indexe"
#define VkglTestCase_037706_2 "d.random.max_implementation_draw_buffers.7"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037706, VkglTestCase_037706_1, VkglTestCase_037706_2);

#define VkglTestCase_037707_1 "dEQP-GLES31.functional.draw_buffers_indexe"
#define VkglTestCase_037707_2 "d.random.max_implementation_draw_buffers.8"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037707, VkglTestCase_037707_1, VkglTestCase_037707_2);

#define VkglTestCase_037708_1 "dEQP-GLES31.functional.draw_buffers_indexe"
#define VkglTestCase_037708_2 "d.random.max_implementation_draw_buffers.9"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037708, VkglTestCase_037708_1, VkglTestCase_037708_2);

#define VkglTestCase_037709_1 "dEQP-GLES31.functional.draw_buffers_indexe"
#define VkglTestCase_037709_2 "d.random.max_implementation_draw_buffers.10"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037709, VkglTestCase_037709_1, VkglTestCase_037709_2);

#define VkglTestCase_037710_1 "dEQP-GLES31.functional.draw_buffers_indexe"
#define VkglTestCase_037710_2 "d.random.max_implementation_draw_buffers.11"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037710, VkglTestCase_037710_1, VkglTestCase_037710_2);

#define VkglTestCase_037711_1 "dEQP-GLES31.functional.draw_buffers_indexe"
#define VkglTestCase_037711_2 "d.random.max_implementation_draw_buffers.12"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037711, VkglTestCase_037711_1, VkglTestCase_037711_2);

#define VkglTestCase_037712_1 "dEQP-GLES31.functional.draw_buffers_indexe"
#define VkglTestCase_037712_2 "d.random.max_implementation_draw_buffers.13"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037712, VkglTestCase_037712_1, VkglTestCase_037712_2);

#define VkglTestCase_037713_1 "dEQP-GLES31.functional.draw_buffers_indexe"
#define VkglTestCase_037713_2 "d.random.max_implementation_draw_buffers.14"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037713, VkglTestCase_037713_1, VkglTestCase_037713_2);

#define VkglTestCase_037714_1 "dEQP-GLES31.functional.draw_buffers_indexe"
#define VkglTestCase_037714_2 "d.random.max_implementation_draw_buffers.15"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037714, VkglTestCase_037714_1, VkglTestCase_037714_2);

#define VkglTestCase_037715_1 "dEQP-GLES31.functional.draw_buffers_indexe"
#define VkglTestCase_037715_2 "d.random.max_implementation_draw_buffers.16"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037715, VkglTestCase_037715_1, VkglTestCase_037715_2);

#define VkglTestCase_037716_1 "dEQP-GLES31.functional.draw_buffers_indexe"
#define VkglTestCase_037716_2 "d.random.max_implementation_draw_buffers.17"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037716, VkglTestCase_037716_1, VkglTestCase_037716_2);

#define VkglTestCase_037717_1 "dEQP-GLES31.functional.draw_buffers_indexe"
#define VkglTestCase_037717_2 "d.random.max_implementation_draw_buffers.18"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037717, VkglTestCase_037717_1, VkglTestCase_037717_2);

#define VkglTestCase_037718_1 "dEQP-GLES31.functional.draw_buffers_indexe"
#define VkglTestCase_037718_2 "d.random.max_implementation_draw_buffers.19"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037718, VkglTestCase_037718_1, VkglTestCase_037718_2);
