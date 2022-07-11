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

#define VkglTestCase_014569_1 "dEQP-GLES31.functional.texture.border_clamp.formats."
#define VkglTestCase_014569_2 "compressed_rgba8_etc2_eac.nearest_size_tile_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014569, VkglTestCase_014569_1, VkglTestCase_014569_2);

#define VkglTestCase_014570_1 "dEQP-GLES31.functional.texture.border_clamp.formats.co"
#define VkglTestCase_014570_2 "mpressed_rgba8_etc2_eac.nearest_size_not_tile_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014570, VkglTestCase_014570_1, VkglTestCase_014570_2);

#define VkglTestCase_014571_1 "dEQP-GLES31.functional.texture.border_clamp.formats"
#define VkglTestCase_014571_2 ".compressed_rgba8_etc2_eac.linear_size_tile_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014571, VkglTestCase_014571_1, VkglTestCase_014571_2);

#define VkglTestCase_014572_1 "dEQP-GLES31.functional.texture.border_clamp.formats.c"
#define VkglTestCase_014572_2 "ompressed_rgba8_etc2_eac.linear_size_not_tile_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014572, VkglTestCase_014572_1, VkglTestCase_014572_2);

#define VkglTestCase_014573_1 "dEQP-GLES31.functional.texture.border_clamp.formats"
#define VkglTestCase_014573_2 ".compressed_rgba8_etc2_eac.gather_size_tile_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014573, VkglTestCase_014573_1, VkglTestCase_014573_2);

#define VkglTestCase_014574_1 "dEQP-GLES31.functional.texture.border_clamp.formats.c"
#define VkglTestCase_014574_2 "ompressed_rgba8_etc2_eac.gather_size_not_tile_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014574, VkglTestCase_014574_1, VkglTestCase_014574_2);
