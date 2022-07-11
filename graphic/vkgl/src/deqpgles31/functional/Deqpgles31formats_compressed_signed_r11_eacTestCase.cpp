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

#define VkglTestCase_014527_1 "dEQP-GLES31.functional.texture.border_clamp.formats."
#define VkglTestCase_014527_2 "compressed_signed_r11_eac.nearest_size_tile_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014527, VkglTestCase_014527_1, VkglTestCase_014527_2);

#define VkglTestCase_014528_1 "dEQP-GLES31.functional.texture.border_clamp.formats.co"
#define VkglTestCase_014528_2 "mpressed_signed_r11_eac.nearest_size_not_tile_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014528, VkglTestCase_014528_1, VkglTestCase_014528_2);

#define VkglTestCase_014529_1 "dEQP-GLES31.functional.texture.border_clamp.formats"
#define VkglTestCase_014529_2 ".compressed_signed_r11_eac.linear_size_tile_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014529, VkglTestCase_014529_1, VkglTestCase_014529_2);

#define VkglTestCase_014530_1 "dEQP-GLES31.functional.texture.border_clamp.formats.c"
#define VkglTestCase_014530_2 "ompressed_signed_r11_eac.linear_size_not_tile_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014530, VkglTestCase_014530_1, VkglTestCase_014530_2);

#define VkglTestCase_014531_1 "dEQP-GLES31.functional.texture.border_clamp.formats"
#define VkglTestCase_014531_2 ".compressed_signed_r11_eac.gather_size_tile_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014531, VkglTestCase_014531_1, VkglTestCase_014531_2);

#define VkglTestCase_014532_1 "dEQP-GLES31.functional.texture.border_clamp.formats.c"
#define VkglTestCase_014532_2 "ompressed_signed_r11_eac.gather_size_not_tile_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014532, VkglTestCase_014532_1, VkglTestCase_014532_2);
