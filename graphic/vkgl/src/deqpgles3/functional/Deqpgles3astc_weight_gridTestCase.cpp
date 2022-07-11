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

#define VkglTestCase_027388_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_027388_2 "compressed.astc.weight_grid.4x4"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027388, VkglTestCase_027388_1, VkglTestCase_027388_2);

#define VkglTestCase_027389_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_027389_2 "compressed.astc.weight_grid.5x4"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027389, VkglTestCase_027389_1, VkglTestCase_027389_2);

#define VkglTestCase_027390_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_027390_2 "compressed.astc.weight_grid.5x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027390, VkglTestCase_027390_1, VkglTestCase_027390_2);

#define VkglTestCase_027391_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_027391_2 "compressed.astc.weight_grid.6x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027391, VkglTestCase_027391_1, VkglTestCase_027391_2);

#define VkglTestCase_027392_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_027392_2 "compressed.astc.weight_grid.6x6"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027392, VkglTestCase_027392_1, VkglTestCase_027392_2);

#define VkglTestCase_027393_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_027393_2 "compressed.astc.weight_grid.8x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027393, VkglTestCase_027393_1, VkglTestCase_027393_2);

#define VkglTestCase_027394_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_027394_2 "compressed.astc.weight_grid.8x6"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027394, VkglTestCase_027394_1, VkglTestCase_027394_2);

#define VkglTestCase_027395_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_027395_2 "compressed.astc.weight_grid.8x8"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027395, VkglTestCase_027395_1, VkglTestCase_027395_2);

#define VkglTestCase_027396_1 "dEQP-GLES3.functional.texture.c"
#define VkglTestCase_027396_2 "ompressed.astc.weight_grid.10x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027396, VkglTestCase_027396_1, VkglTestCase_027396_2);

#define VkglTestCase_027397_1 "dEQP-GLES3.functional.texture.c"
#define VkglTestCase_027397_2 "ompressed.astc.weight_grid.10x6"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027397, VkglTestCase_027397_1, VkglTestCase_027397_2);

#define VkglTestCase_027398_1 "dEQP-GLES3.functional.texture.c"
#define VkglTestCase_027398_2 "ompressed.astc.weight_grid.10x8"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027398, VkglTestCase_027398_1, VkglTestCase_027398_2);

#define VkglTestCase_027399_1 "dEQP-GLES3.functional.texture.c"
#define VkglTestCase_027399_2 "ompressed.astc.weight_grid.10x10"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027399, VkglTestCase_027399_1, VkglTestCase_027399_2);

#define VkglTestCase_027400_1 "dEQP-GLES3.functional.texture.c"
#define VkglTestCase_027400_2 "ompressed.astc.weight_grid.12x10"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027400, VkglTestCase_027400_1, VkglTestCase_027400_2);

#define VkglTestCase_027401_1 "dEQP-GLES3.functional.texture.c"
#define VkglTestCase_027401_2 "ompressed.astc.weight_grid.12x12"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027401, VkglTestCase_027401_1, VkglTestCase_027401_2);

#define VkglTestCase_027402_1 "dEQP-GLES3.functional.texture.com"
#define VkglTestCase_027402_2 "pressed.astc.weight_grid.4x4_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027402, VkglTestCase_027402_1, VkglTestCase_027402_2);

#define VkglTestCase_027403_1 "dEQP-GLES3.functional.texture.com"
#define VkglTestCase_027403_2 "pressed.astc.weight_grid.5x4_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027403, VkglTestCase_027403_1, VkglTestCase_027403_2);

#define VkglTestCase_027404_1 "dEQP-GLES3.functional.texture.com"
#define VkglTestCase_027404_2 "pressed.astc.weight_grid.5x5_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027404, VkglTestCase_027404_1, VkglTestCase_027404_2);

#define VkglTestCase_027405_1 "dEQP-GLES3.functional.texture.com"
#define VkglTestCase_027405_2 "pressed.astc.weight_grid.6x5_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027405, VkglTestCase_027405_1, VkglTestCase_027405_2);

#define VkglTestCase_027406_1 "dEQP-GLES3.functional.texture.com"
#define VkglTestCase_027406_2 "pressed.astc.weight_grid.6x6_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027406, VkglTestCase_027406_1, VkglTestCase_027406_2);

#define VkglTestCase_027407_1 "dEQP-GLES3.functional.texture.com"
#define VkglTestCase_027407_2 "pressed.astc.weight_grid.8x5_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027407, VkglTestCase_027407_1, VkglTestCase_027407_2);

#define VkglTestCase_027408_1 "dEQP-GLES3.functional.texture.com"
#define VkglTestCase_027408_2 "pressed.astc.weight_grid.8x6_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027408, VkglTestCase_027408_1, VkglTestCase_027408_2);

#define VkglTestCase_027409_1 "dEQP-GLES3.functional.texture.com"
#define VkglTestCase_027409_2 "pressed.astc.weight_grid.8x8_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027409, VkglTestCase_027409_1, VkglTestCase_027409_2);

#define VkglTestCase_027410_1 "dEQP-GLES3.functional.texture.com"
#define VkglTestCase_027410_2 "pressed.astc.weight_grid.10x5_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027410, VkglTestCase_027410_1, VkglTestCase_027410_2);

#define VkglTestCase_027411_1 "dEQP-GLES3.functional.texture.com"
#define VkglTestCase_027411_2 "pressed.astc.weight_grid.10x6_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027411, VkglTestCase_027411_1, VkglTestCase_027411_2);

#define VkglTestCase_027412_1 "dEQP-GLES3.functional.texture.com"
#define VkglTestCase_027412_2 "pressed.astc.weight_grid.10x8_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027412, VkglTestCase_027412_1, VkglTestCase_027412_2);

#define VkglTestCase_027413_1 "dEQP-GLES3.functional.texture.comp"
#define VkglTestCase_027413_2 "ressed.astc.weight_grid.10x10_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027413, VkglTestCase_027413_1, VkglTestCase_027413_2);

#define VkglTestCase_027414_1 "dEQP-GLES3.functional.texture.comp"
#define VkglTestCase_027414_2 "ressed.astc.weight_grid.12x10_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027414, VkglTestCase_027414_1, VkglTestCase_027414_2);

#define VkglTestCase_027415_1 "dEQP-GLES3.functional.texture.comp"
#define VkglTestCase_027415_2 "ressed.astc.weight_grid.12x12_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027415, VkglTestCase_027415_1, VkglTestCase_027415_2);
