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

#define VkglTestCase_014329_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014329_2 "_clamp.formats.srgb8.nearest_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014329, VkglTestCase_014329_1, VkglTestCase_014329_2);

#define VkglTestCase_014330_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014330_2 "_clamp.formats.srgb8.nearest_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014330, VkglTestCase_014330_1, VkglTestCase_014330_2);

#define VkglTestCase_014331_1 "dEQP-GLES31.functional.texture.borde"
#define VkglTestCase_014331_2 "r_clamp.formats.srgb8.linear_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014331, VkglTestCase_014331_1, VkglTestCase_014331_2);

#define VkglTestCase_014332_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014332_2 "_clamp.formats.srgb8.linear_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014332, VkglTestCase_014332_1, VkglTestCase_014332_2);

#define VkglTestCase_014333_1 "dEQP-GLES31.functional.texture.borde"
#define VkglTestCase_014333_2 "r_clamp.formats.srgb8.gather_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014333, VkglTestCase_014333_1, VkglTestCase_014333_2);

#define VkglTestCase_014334_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014334_2 "_clamp.formats.srgb8.gather_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014334, VkglTestCase_014334_1, VkglTestCase_014334_2);
