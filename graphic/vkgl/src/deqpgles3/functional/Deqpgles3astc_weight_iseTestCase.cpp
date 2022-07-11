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

#define VkglTestCase_027416_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_027416_2 "compressed.astc.weight_ise.4x4"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027416, VkglTestCase_027416_1, VkglTestCase_027416_2);

#define VkglTestCase_027417_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_027417_2 "compressed.astc.weight_ise.5x4"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027417, VkglTestCase_027417_1, VkglTestCase_027417_2);

#define VkglTestCase_027418_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_027418_2 "compressed.astc.weight_ise.5x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027418, VkglTestCase_027418_1, VkglTestCase_027418_2);

#define VkglTestCase_027419_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_027419_2 "compressed.astc.weight_ise.6x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027419, VkglTestCase_027419_1, VkglTestCase_027419_2);

#define VkglTestCase_027420_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_027420_2 "compressed.astc.weight_ise.6x6"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027420, VkglTestCase_027420_1, VkglTestCase_027420_2);

#define VkglTestCase_027421_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_027421_2 "compressed.astc.weight_ise.8x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027421, VkglTestCase_027421_1, VkglTestCase_027421_2);

#define VkglTestCase_027422_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_027422_2 "compressed.astc.weight_ise.8x6"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027422, VkglTestCase_027422_1, VkglTestCase_027422_2);

#define VkglTestCase_027423_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_027423_2 "compressed.astc.weight_ise.8x8"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027423, VkglTestCase_027423_1, VkglTestCase_027423_2);

#define VkglTestCase_027424_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_027424_2 "compressed.astc.weight_ise.10x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027424, VkglTestCase_027424_1, VkglTestCase_027424_2);

#define VkglTestCase_027425_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_027425_2 "compressed.astc.weight_ise.10x6"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027425, VkglTestCase_027425_1, VkglTestCase_027425_2);

#define VkglTestCase_027426_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_027426_2 "compressed.astc.weight_ise.10x8"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027426, VkglTestCase_027426_1, VkglTestCase_027426_2);

#define VkglTestCase_027427_1 "dEQP-GLES3.functional.texture.c"
#define VkglTestCase_027427_2 "ompressed.astc.weight_ise.10x10"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027427, VkglTestCase_027427_1, VkglTestCase_027427_2);

#define VkglTestCase_027428_1 "dEQP-GLES3.functional.texture.c"
#define VkglTestCase_027428_2 "ompressed.astc.weight_ise.12x10"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027428, VkglTestCase_027428_1, VkglTestCase_027428_2);

#define VkglTestCase_027429_1 "dEQP-GLES3.functional.texture.c"
#define VkglTestCase_027429_2 "ompressed.astc.weight_ise.12x12"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027429, VkglTestCase_027429_1, VkglTestCase_027429_2);

#define VkglTestCase_027430_1 "dEQP-GLES3.functional.texture.co"
#define VkglTestCase_027430_2 "mpressed.astc.weight_ise.4x4_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027430, VkglTestCase_027430_1, VkglTestCase_027430_2);

#define VkglTestCase_027431_1 "dEQP-GLES3.functional.texture.co"
#define VkglTestCase_027431_2 "mpressed.astc.weight_ise.5x4_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027431, VkglTestCase_027431_1, VkglTestCase_027431_2);

#define VkglTestCase_027432_1 "dEQP-GLES3.functional.texture.co"
#define VkglTestCase_027432_2 "mpressed.astc.weight_ise.5x5_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027432, VkglTestCase_027432_1, VkglTestCase_027432_2);

#define VkglTestCase_027433_1 "dEQP-GLES3.functional.texture.co"
#define VkglTestCase_027433_2 "mpressed.astc.weight_ise.6x5_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027433, VkglTestCase_027433_1, VkglTestCase_027433_2);

#define VkglTestCase_027434_1 "dEQP-GLES3.functional.texture.co"
#define VkglTestCase_027434_2 "mpressed.astc.weight_ise.6x6_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027434, VkglTestCase_027434_1, VkglTestCase_027434_2);

#define VkglTestCase_027435_1 "dEQP-GLES3.functional.texture.co"
#define VkglTestCase_027435_2 "mpressed.astc.weight_ise.8x5_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027435, VkglTestCase_027435_1, VkglTestCase_027435_2);

#define VkglTestCase_027436_1 "dEQP-GLES3.functional.texture.co"
#define VkglTestCase_027436_2 "mpressed.astc.weight_ise.8x6_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027436, VkglTestCase_027436_1, VkglTestCase_027436_2);

#define VkglTestCase_027437_1 "dEQP-GLES3.functional.texture.co"
#define VkglTestCase_027437_2 "mpressed.astc.weight_ise.8x8_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027437, VkglTestCase_027437_1, VkglTestCase_027437_2);

#define VkglTestCase_027438_1 "dEQP-GLES3.functional.texture.com"
#define VkglTestCase_027438_2 "pressed.astc.weight_ise.10x5_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027438, VkglTestCase_027438_1, VkglTestCase_027438_2);

#define VkglTestCase_027439_1 "dEQP-GLES3.functional.texture.com"
#define VkglTestCase_027439_2 "pressed.astc.weight_ise.10x6_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027439, VkglTestCase_027439_1, VkglTestCase_027439_2);

#define VkglTestCase_027440_1 "dEQP-GLES3.functional.texture.com"
#define VkglTestCase_027440_2 "pressed.astc.weight_ise.10x8_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027440, VkglTestCase_027440_1, VkglTestCase_027440_2);

#define VkglTestCase_027441_1 "dEQP-GLES3.functional.texture.com"
#define VkglTestCase_027441_2 "pressed.astc.weight_ise.10x10_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027441, VkglTestCase_027441_1, VkglTestCase_027441_2);

#define VkglTestCase_027442_1 "dEQP-GLES3.functional.texture.com"
#define VkglTestCase_027442_2 "pressed.astc.weight_ise.12x10_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027442, VkglTestCase_027442_1, VkglTestCase_027442_2);

#define VkglTestCase_027443_1 "dEQP-GLES3.functional.texture.com"
#define VkglTestCase_027443_2 "pressed.astc.weight_ise.12x12_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027443, VkglTestCase_027443_1, VkglTestCase_027443_2);
