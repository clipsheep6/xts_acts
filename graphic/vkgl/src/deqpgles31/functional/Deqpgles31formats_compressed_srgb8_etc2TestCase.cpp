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

#define VkglTestCase_014551_1 "dEQP-GLES31.functional.texture.border_clamp.format"
#define VkglTestCase_014551_2 "s.compressed_srgb8_etc2.nearest_size_tile_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014551, VkglTestCase_014551_1, VkglTestCase_014551_2);

#define VkglTestCase_014552_1 "dEQP-GLES31.functional.texture.border_clamp.formats."
#define VkglTestCase_014552_2 "compressed_srgb8_etc2.nearest_size_not_tile_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014552, VkglTestCase_014552_1, VkglTestCase_014552_2);

#define VkglTestCase_014553_1 "dEQP-GLES31.functional.texture.border_clamp.forma"
#define VkglTestCase_014553_2 "ts.compressed_srgb8_etc2.linear_size_tile_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014553, VkglTestCase_014553_1, VkglTestCase_014553_2);

#define VkglTestCase_014554_1 "dEQP-GLES31.functional.texture.border_clamp.formats"
#define VkglTestCase_014554_2 ".compressed_srgb8_etc2.linear_size_not_tile_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014554, VkglTestCase_014554_1, VkglTestCase_014554_2);

#define VkglTestCase_014555_1 "dEQP-GLES31.functional.texture.border_clamp.forma"
#define VkglTestCase_014555_2 "ts.compressed_srgb8_etc2.gather_size_tile_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014555, VkglTestCase_014555_1, VkglTestCase_014555_2);

#define VkglTestCase_014556_1 "dEQP-GLES31.functional.texture.border_clamp.formats"
#define VkglTestCase_014556_2 ".compressed_srgb8_etc2.gather_size_not_tile_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014556, VkglTestCase_014556_1, VkglTestCase_014556_2);
