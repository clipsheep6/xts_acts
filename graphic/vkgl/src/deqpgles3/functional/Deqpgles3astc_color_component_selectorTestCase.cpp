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

#define VkglTestCase_027584_1 "dEQP-GLES3.functional.texture.compres"
#define VkglTestCase_027584_2 "sed.astc.color_component_selector.4x4"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027584, VkglTestCase_027584_1, VkglTestCase_027584_2);

#define VkglTestCase_027585_1 "dEQP-GLES3.functional.texture.compres"
#define VkglTestCase_027585_2 "sed.astc.color_component_selector.5x4"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027585, VkglTestCase_027585_1, VkglTestCase_027585_2);

#define VkglTestCase_027586_1 "dEQP-GLES3.functional.texture.compres"
#define VkglTestCase_027586_2 "sed.astc.color_component_selector.5x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027586, VkglTestCase_027586_1, VkglTestCase_027586_2);

#define VkglTestCase_027587_1 "dEQP-GLES3.functional.texture.compres"
#define VkglTestCase_027587_2 "sed.astc.color_component_selector.6x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027587, VkglTestCase_027587_1, VkglTestCase_027587_2);

#define VkglTestCase_027588_1 "dEQP-GLES3.functional.texture.compres"
#define VkglTestCase_027588_2 "sed.astc.color_component_selector.6x6"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027588, VkglTestCase_027588_1, VkglTestCase_027588_2);

#define VkglTestCase_027589_1 "dEQP-GLES3.functional.texture.compres"
#define VkglTestCase_027589_2 "sed.astc.color_component_selector.8x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027589, VkglTestCase_027589_1, VkglTestCase_027589_2);

#define VkglTestCase_027590_1 "dEQP-GLES3.functional.texture.compres"
#define VkglTestCase_027590_2 "sed.astc.color_component_selector.8x6"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027590, VkglTestCase_027590_1, VkglTestCase_027590_2);

#define VkglTestCase_027591_1 "dEQP-GLES3.functional.texture.compres"
#define VkglTestCase_027591_2 "sed.astc.color_component_selector.8x8"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027591, VkglTestCase_027591_1, VkglTestCase_027591_2);

#define VkglTestCase_027592_1 "dEQP-GLES3.functional.texture.compres"
#define VkglTestCase_027592_2 "sed.astc.color_component_selector.10x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027592, VkglTestCase_027592_1, VkglTestCase_027592_2);

#define VkglTestCase_027593_1 "dEQP-GLES3.functional.texture.compres"
#define VkglTestCase_027593_2 "sed.astc.color_component_selector.10x6"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027593, VkglTestCase_027593_1, VkglTestCase_027593_2);

#define VkglTestCase_027594_1 "dEQP-GLES3.functional.texture.compres"
#define VkglTestCase_027594_2 "sed.astc.color_component_selector.10x8"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027594, VkglTestCase_027594_1, VkglTestCase_027594_2);

#define VkglTestCase_027595_1 "dEQP-GLES3.functional.texture.compress"
#define VkglTestCase_027595_2 "ed.astc.color_component_selector.10x10"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027595, VkglTestCase_027595_1, VkglTestCase_027595_2);

#define VkglTestCase_027596_1 "dEQP-GLES3.functional.texture.compress"
#define VkglTestCase_027596_2 "ed.astc.color_component_selector.12x10"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027596, VkglTestCase_027596_1, VkglTestCase_027596_2);

#define VkglTestCase_027597_1 "dEQP-GLES3.functional.texture.compress"
#define VkglTestCase_027597_2 "ed.astc.color_component_selector.12x12"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027597, VkglTestCase_027597_1, VkglTestCase_027597_2);

#define VkglTestCase_027598_1 "dEQP-GLES3.functional.texture.compresse"
#define VkglTestCase_027598_2 "d.astc.color_component_selector.4x4_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027598, VkglTestCase_027598_1, VkglTestCase_027598_2);

#define VkglTestCase_027599_1 "dEQP-GLES3.functional.texture.compresse"
#define VkglTestCase_027599_2 "d.astc.color_component_selector.5x4_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027599, VkglTestCase_027599_1, VkglTestCase_027599_2);

#define VkglTestCase_027600_1 "dEQP-GLES3.functional.texture.compresse"
#define VkglTestCase_027600_2 "d.astc.color_component_selector.5x5_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027600, VkglTestCase_027600_1, VkglTestCase_027600_2);

#define VkglTestCase_027601_1 "dEQP-GLES3.functional.texture.compresse"
#define VkglTestCase_027601_2 "d.astc.color_component_selector.6x5_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027601, VkglTestCase_027601_1, VkglTestCase_027601_2);

#define VkglTestCase_027602_1 "dEQP-GLES3.functional.texture.compresse"
#define VkglTestCase_027602_2 "d.astc.color_component_selector.6x6_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027602, VkglTestCase_027602_1, VkglTestCase_027602_2);

#define VkglTestCase_027603_1 "dEQP-GLES3.functional.texture.compresse"
#define VkglTestCase_027603_2 "d.astc.color_component_selector.8x5_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027603, VkglTestCase_027603_1, VkglTestCase_027603_2);

#define VkglTestCase_027604_1 "dEQP-GLES3.functional.texture.compresse"
#define VkglTestCase_027604_2 "d.astc.color_component_selector.8x6_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027604, VkglTestCase_027604_1, VkglTestCase_027604_2);

#define VkglTestCase_027605_1 "dEQP-GLES3.functional.texture.compresse"
#define VkglTestCase_027605_2 "d.astc.color_component_selector.8x8_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027605, VkglTestCase_027605_1, VkglTestCase_027605_2);

#define VkglTestCase_027606_1 "dEQP-GLES3.functional.texture.compressed"
#define VkglTestCase_027606_2 ".astc.color_component_selector.10x5_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027606, VkglTestCase_027606_1, VkglTestCase_027606_2);

#define VkglTestCase_027607_1 "dEQP-GLES3.functional.texture.compressed"
#define VkglTestCase_027607_2 ".astc.color_component_selector.10x6_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027607, VkglTestCase_027607_1, VkglTestCase_027607_2);

#define VkglTestCase_027608_1 "dEQP-GLES3.functional.texture.compressed"
#define VkglTestCase_027608_2 ".astc.color_component_selector.10x8_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027608, VkglTestCase_027608_1, VkglTestCase_027608_2);

#define VkglTestCase_027609_1 "dEQP-GLES3.functional.texture.compressed"
#define VkglTestCase_027609_2 ".astc.color_component_selector.10x10_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027609, VkglTestCase_027609_1, VkglTestCase_027609_2);

#define VkglTestCase_027610_1 "dEQP-GLES3.functional.texture.compressed"
#define VkglTestCase_027610_2 ".astc.color_component_selector.12x10_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027610, VkglTestCase_027610_1, VkglTestCase_027610_2);

#define VkglTestCase_027611_1 "dEQP-GLES3.functional.texture.compressed"
#define VkglTestCase_027611_2 ".astc.color_component_selector.12x12_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027611, VkglTestCase_027611_1, VkglTestCase_027611_2);
