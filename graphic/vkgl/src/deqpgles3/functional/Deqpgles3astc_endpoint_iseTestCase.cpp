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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30028TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_027556_1 "dEQP-GLES3.functional.texture.c"
#define VkglTestCase_027556_2 "ompressed.astc.endpoint_ise.4x4"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027556, VkglTestCase_027556_1, VkglTestCase_027556_2);

#define VkglTestCase_027557_1 "dEQP-GLES3.functional.texture.c"
#define VkglTestCase_027557_2 "ompressed.astc.endpoint_ise.5x4"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027557, VkglTestCase_027557_1, VkglTestCase_027557_2);

#define VkglTestCase_027558_1 "dEQP-GLES3.functional.texture.c"
#define VkglTestCase_027558_2 "ompressed.astc.endpoint_ise.5x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027558, VkglTestCase_027558_1, VkglTestCase_027558_2);

#define VkglTestCase_027559_1 "dEQP-GLES3.functional.texture.c"
#define VkglTestCase_027559_2 "ompressed.astc.endpoint_ise.6x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027559, VkglTestCase_027559_1, VkglTestCase_027559_2);

#define VkglTestCase_027560_1 "dEQP-GLES3.functional.texture.c"
#define VkglTestCase_027560_2 "ompressed.astc.endpoint_ise.6x6"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027560, VkglTestCase_027560_1, VkglTestCase_027560_2);

#define VkglTestCase_027561_1 "dEQP-GLES3.functional.texture.c"
#define VkglTestCase_027561_2 "ompressed.astc.endpoint_ise.8x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027561, VkglTestCase_027561_1, VkglTestCase_027561_2);

#define VkglTestCase_027562_1 "dEQP-GLES3.functional.texture.c"
#define VkglTestCase_027562_2 "ompressed.astc.endpoint_ise.8x6"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027562, VkglTestCase_027562_1, VkglTestCase_027562_2);

#define VkglTestCase_027563_1 "dEQP-GLES3.functional.texture.c"
#define VkglTestCase_027563_2 "ompressed.astc.endpoint_ise.8x8"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027563, VkglTestCase_027563_1, VkglTestCase_027563_2);

#define VkglTestCase_027564_1 "dEQP-GLES3.functional.texture.c"
#define VkglTestCase_027564_2 "ompressed.astc.endpoint_ise.10x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027564, VkglTestCase_027564_1, VkglTestCase_027564_2);

#define VkglTestCase_027565_1 "dEQP-GLES3.functional.texture.c"
#define VkglTestCase_027565_2 "ompressed.astc.endpoint_ise.10x6"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027565, VkglTestCase_027565_1, VkglTestCase_027565_2);

#define VkglTestCase_027566_1 "dEQP-GLES3.functional.texture.c"
#define VkglTestCase_027566_2 "ompressed.astc.endpoint_ise.10x8"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027566, VkglTestCase_027566_1, VkglTestCase_027566_2);

#define VkglTestCase_027567_1 "dEQP-GLES3.functional.texture.co"
#define VkglTestCase_027567_2 "mpressed.astc.endpoint_ise.10x10"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027567, VkglTestCase_027567_1, VkglTestCase_027567_2);

#define VkglTestCase_027568_1 "dEQP-GLES3.functional.texture.co"
#define VkglTestCase_027568_2 "mpressed.astc.endpoint_ise.12x10"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027568, VkglTestCase_027568_1, VkglTestCase_027568_2);

#define VkglTestCase_027569_1 "dEQP-GLES3.functional.texture.co"
#define VkglTestCase_027569_2 "mpressed.astc.endpoint_ise.12x12"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027569, VkglTestCase_027569_1, VkglTestCase_027569_2);

#define VkglTestCase_027570_1 "dEQP-GLES3.functional.texture.com"
#define VkglTestCase_027570_2 "pressed.astc.endpoint_ise.4x4_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027570, VkglTestCase_027570_1, VkglTestCase_027570_2);

#define VkglTestCase_027571_1 "dEQP-GLES3.functional.texture.com"
#define VkglTestCase_027571_2 "pressed.astc.endpoint_ise.5x4_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027571, VkglTestCase_027571_1, VkglTestCase_027571_2);

#define VkglTestCase_027572_1 "dEQP-GLES3.functional.texture.com"
#define VkglTestCase_027572_2 "pressed.astc.endpoint_ise.5x5_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027572, VkglTestCase_027572_1, VkglTestCase_027572_2);

#define VkglTestCase_027573_1 "dEQP-GLES3.functional.texture.com"
#define VkglTestCase_027573_2 "pressed.astc.endpoint_ise.6x5_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027573, VkglTestCase_027573_1, VkglTestCase_027573_2);

#define VkglTestCase_027574_1 "dEQP-GLES3.functional.texture.com"
#define VkglTestCase_027574_2 "pressed.astc.endpoint_ise.6x6_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027574, VkglTestCase_027574_1, VkglTestCase_027574_2);

#define VkglTestCase_027575_1 "dEQP-GLES3.functional.texture.com"
#define VkglTestCase_027575_2 "pressed.astc.endpoint_ise.8x5_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027575, VkglTestCase_027575_1, VkglTestCase_027575_2);

#define VkglTestCase_027576_1 "dEQP-GLES3.functional.texture.com"
#define VkglTestCase_027576_2 "pressed.astc.endpoint_ise.8x6_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027576, VkglTestCase_027576_1, VkglTestCase_027576_2);

#define VkglTestCase_027577_1 "dEQP-GLES3.functional.texture.com"
#define VkglTestCase_027577_2 "pressed.astc.endpoint_ise.8x8_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027577, VkglTestCase_027577_1, VkglTestCase_027577_2);

#define VkglTestCase_027578_1 "dEQP-GLES3.functional.texture.comp"
#define VkglTestCase_027578_2 "ressed.astc.endpoint_ise.10x5_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027578, VkglTestCase_027578_1, VkglTestCase_027578_2);

#define VkglTestCase_027579_1 "dEQP-GLES3.functional.texture.comp"
#define VkglTestCase_027579_2 "ressed.astc.endpoint_ise.10x6_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027579, VkglTestCase_027579_1, VkglTestCase_027579_2);

#define VkglTestCase_027580_1 "dEQP-GLES3.functional.texture.comp"
#define VkglTestCase_027580_2 "ressed.astc.endpoint_ise.10x8_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027580, VkglTestCase_027580_1, VkglTestCase_027580_2);

#define VkglTestCase_027581_1 "dEQP-GLES3.functional.texture.comp"
#define VkglTestCase_027581_2 "ressed.astc.endpoint_ise.10x10_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027581, VkglTestCase_027581_1, VkglTestCase_027581_2);

#define VkglTestCase_027582_1 "dEQP-GLES3.functional.texture.comp"
#define VkglTestCase_027582_2 "ressed.astc.endpoint_ise.12x10_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027582, VkglTestCase_027582_1, VkglTestCase_027582_2);

#define VkglTestCase_027583_1 "dEQP-GLES3.functional.texture.comp"
#define VkglTestCase_027583_2 "ressed.astc.endpoint_ise.12x12_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027583, VkglTestCase_027583_1, VkglTestCase_027583_2);
