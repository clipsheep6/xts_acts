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

#define VkglTestCase_014347_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014347_2 "_clamp.formats.rg16f.nearest_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014347, VkglTestCase_014347_1, VkglTestCase_014347_2);

#define VkglTestCase_014348_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014348_2 "_clamp.formats.rg16f.nearest_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014348, VkglTestCase_014348_1, VkglTestCase_014348_2);

#define VkglTestCase_014349_1 "dEQP-GLES31.functional.texture.borde"
#define VkglTestCase_014349_2 "r_clamp.formats.rg16f.linear_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014349, VkglTestCase_014349_1, VkglTestCase_014349_2);

#define VkglTestCase_014350_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014350_2 "_clamp.formats.rg16f.linear_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014350, VkglTestCase_014350_1, VkglTestCase_014350_2);

#define VkglTestCase_014351_1 "dEQP-GLES31.functional.texture.borde"
#define VkglTestCase_014351_2 "r_clamp.formats.rg16f.gather_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014351, VkglTestCase_014351_1, VkglTestCase_014351_2);

#define VkglTestCase_014352_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014352_2 "_clamp.formats.rg16f.gather_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014352, VkglTestCase_014352_1, VkglTestCase_014352_2);
