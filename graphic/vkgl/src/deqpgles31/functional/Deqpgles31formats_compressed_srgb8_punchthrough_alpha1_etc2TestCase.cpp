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

#define VkglTestCase_014563_1 "dEQP-GLES31.functional.texture.border_clamp.formats.compress"
#define VkglTestCase_014563_2 "ed_srgb8_punchthrough_alpha1_etc2.nearest_size_tile_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014563, VkglTestCase_014563_1, VkglTestCase_014563_2);

#define VkglTestCase_014564_1 "dEQP-GLES31.functional.texture.border_clamp.formats.compressed"
#define VkglTestCase_014564_2 "_srgb8_punchthrough_alpha1_etc2.nearest_size_not_tile_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014564, VkglTestCase_014564_1, VkglTestCase_014564_2);

#define VkglTestCase_014565_1 "dEQP-GLES31.functional.texture.border_clamp.formats.compres"
#define VkglTestCase_014565_2 "sed_srgb8_punchthrough_alpha1_etc2.linear_size_tile_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014565, VkglTestCase_014565_1, VkglTestCase_014565_2);

#define VkglTestCase_014566_1 "dEQP-GLES31.functional.texture.border_clamp.formats.compresse"
#define VkglTestCase_014566_2 "d_srgb8_punchthrough_alpha1_etc2.linear_size_not_tile_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014566, VkglTestCase_014566_1, VkglTestCase_014566_2);

#define VkglTestCase_014567_1 "dEQP-GLES31.functional.texture.border_clamp.formats.compres"
#define VkglTestCase_014567_2 "sed_srgb8_punchthrough_alpha1_etc2.gather_size_tile_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014567, VkglTestCase_014567_1, VkglTestCase_014567_2);

#define VkglTestCase_014568_1 "dEQP-GLES31.functional.texture.border_clamp.formats.compresse"
#define VkglTestCase_014568_2 "d_srgb8_punchthrough_alpha1_etc2.gather_size_not_tile_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014568, VkglTestCase_014568_1, VkglTestCase_014568_2);
