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
#include "../ActsDeqpgles310015TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_014545_1 "dEQP-GLES31.functional.texture.border_clamp.forma"
#define VkglTestCase_014545_2 "ts.compressed_rgb8_etc2.nearest_size_tile_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014545, VkglTestCase_014545_1, VkglTestCase_014545_2);

#define VkglTestCase_014546_1 "dEQP-GLES31.functional.texture.border_clamp.formats"
#define VkglTestCase_014546_2 ".compressed_rgb8_etc2.nearest_size_not_tile_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014546, VkglTestCase_014546_1, VkglTestCase_014546_2);

#define VkglTestCase_014547_1 "dEQP-GLES31.functional.texture.border_clamp.forma"
#define VkglTestCase_014547_2 "ts.compressed_rgb8_etc2.linear_size_tile_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014547, VkglTestCase_014547_1, VkglTestCase_014547_2);

#define VkglTestCase_014548_1 "dEQP-GLES31.functional.texture.border_clamp.formats"
#define VkglTestCase_014548_2 ".compressed_rgb8_etc2.linear_size_not_tile_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014548, VkglTestCase_014548_1, VkglTestCase_014548_2);

#define VkglTestCase_014549_1 "dEQP-GLES31.functional.texture.border_clamp.forma"
#define VkglTestCase_014549_2 "ts.compressed_rgb8_etc2.gather_size_tile_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014549, VkglTestCase_014549_1, VkglTestCase_014549_2);

#define VkglTestCase_014550_1 "dEQP-GLES31.functional.texture.border_clamp.formats"
#define VkglTestCase_014550_2 ".compressed_rgb8_etc2.gather_size_not_tile_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014550, VkglTestCase_014550_1, VkglTestCase_014550_2);
