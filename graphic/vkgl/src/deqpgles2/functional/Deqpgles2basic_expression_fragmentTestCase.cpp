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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20009TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_008432_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008432_2 "ndom.basic_expression.fragment.0"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008432, VkglTestCase_008432_1, VkglTestCase_008432_2);

#define VkglTestCase_008433_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008433_2 "ndom.basic_expression.fragment.1"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008433, VkglTestCase_008433_1, VkglTestCase_008433_2);

#define VkglTestCase_008434_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008434_2 "ndom.basic_expression.fragment.2"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008434, VkglTestCase_008434_1, VkglTestCase_008434_2);

#define VkglTestCase_008435_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008435_2 "ndom.basic_expression.fragment.3"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008435, VkglTestCase_008435_1, VkglTestCase_008435_2);

#define VkglTestCase_008436_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008436_2 "ndom.basic_expression.fragment.4"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008436, VkglTestCase_008436_1, VkglTestCase_008436_2);

#define VkglTestCase_008437_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008437_2 "ndom.basic_expression.fragment.5"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008437, VkglTestCase_008437_1, VkglTestCase_008437_2);

#define VkglTestCase_008438_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008438_2 "ndom.basic_expression.fragment.6"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008438, VkglTestCase_008438_1, VkglTestCase_008438_2);

#define VkglTestCase_008439_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008439_2 "ndom.basic_expression.fragment.7"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008439, VkglTestCase_008439_1, VkglTestCase_008439_2);

#define VkglTestCase_008440_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008440_2 "ndom.basic_expression.fragment.8"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008440, VkglTestCase_008440_1, VkglTestCase_008440_2);

#define VkglTestCase_008441_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008441_2 "ndom.basic_expression.fragment.9"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008441, VkglTestCase_008441_1, VkglTestCase_008441_2);

#define VkglTestCase_008442_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008442_2 "ndom.basic_expression.fragment.10"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008442, VkglTestCase_008442_1, VkglTestCase_008442_2);

#define VkglTestCase_008443_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008443_2 "ndom.basic_expression.fragment.11"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008443, VkglTestCase_008443_1, VkglTestCase_008443_2);

#define VkglTestCase_008444_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008444_2 "ndom.basic_expression.fragment.12"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008444, VkglTestCase_008444_1, VkglTestCase_008444_2);

#define VkglTestCase_008445_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008445_2 "ndom.basic_expression.fragment.13"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008445, VkglTestCase_008445_1, VkglTestCase_008445_2);

#define VkglTestCase_008446_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008446_2 "ndom.basic_expression.fragment.14"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008446, VkglTestCase_008446_1, VkglTestCase_008446_2);

#define VkglTestCase_008447_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008447_2 "ndom.basic_expression.fragment.15"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008447, VkglTestCase_008447_1, VkglTestCase_008447_2);

#define VkglTestCase_008448_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008448_2 "ndom.basic_expression.fragment.16"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008448, VkglTestCase_008448_1, VkglTestCase_008448_2);

#define VkglTestCase_008449_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008449_2 "ndom.basic_expression.fragment.17"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008449, VkglTestCase_008449_1, VkglTestCase_008449_2);

#define VkglTestCase_008450_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008450_2 "ndom.basic_expression.fragment.18"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008450, VkglTestCase_008450_1, VkglTestCase_008450_2);

#define VkglTestCase_008451_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008451_2 "ndom.basic_expression.fragment.19"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008451, VkglTestCase_008451_1, VkglTestCase_008451_2);

#define VkglTestCase_008452_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008452_2 "ndom.basic_expression.fragment.20"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008452, VkglTestCase_008452_1, VkglTestCase_008452_2);

#define VkglTestCase_008453_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008453_2 "ndom.basic_expression.fragment.21"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008453, VkglTestCase_008453_1, VkglTestCase_008453_2);

#define VkglTestCase_008454_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008454_2 "ndom.basic_expression.fragment.22"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008454, VkglTestCase_008454_1, VkglTestCase_008454_2);

#define VkglTestCase_008455_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008455_2 "ndom.basic_expression.fragment.23"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008455, VkglTestCase_008455_1, VkglTestCase_008455_2);

#define VkglTestCase_008456_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008456_2 "ndom.basic_expression.fragment.24"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008456, VkglTestCase_008456_1, VkglTestCase_008456_2);

#define VkglTestCase_008457_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008457_2 "ndom.basic_expression.fragment.25"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008457, VkglTestCase_008457_1, VkglTestCase_008457_2);

#define VkglTestCase_008458_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008458_2 "ndom.basic_expression.fragment.26"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008458, VkglTestCase_008458_1, VkglTestCase_008458_2);

#define VkglTestCase_008459_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008459_2 "ndom.basic_expression.fragment.27"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008459, VkglTestCase_008459_1, VkglTestCase_008459_2);

#define VkglTestCase_008460_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008460_2 "ndom.basic_expression.fragment.28"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008460, VkglTestCase_008460_1, VkglTestCase_008460_2);

#define VkglTestCase_008461_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008461_2 "ndom.basic_expression.fragment.29"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008461, VkglTestCase_008461_1, VkglTestCase_008461_2);

#define VkglTestCase_008462_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008462_2 "ndom.basic_expression.fragment.30"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008462, VkglTestCase_008462_1, VkglTestCase_008462_2);

#define VkglTestCase_008463_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008463_2 "ndom.basic_expression.fragment.31"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008463, VkglTestCase_008463_1, VkglTestCase_008463_2);

#define VkglTestCase_008464_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008464_2 "ndom.basic_expression.fragment.32"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008464, VkglTestCase_008464_1, VkglTestCase_008464_2);

#define VkglTestCase_008465_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008465_2 "ndom.basic_expression.fragment.33"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008465, VkglTestCase_008465_1, VkglTestCase_008465_2);

#define VkglTestCase_008466_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008466_2 "ndom.basic_expression.fragment.34"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008466, VkglTestCase_008466_1, VkglTestCase_008466_2);

#define VkglTestCase_008467_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008467_2 "ndom.basic_expression.fragment.35"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008467, VkglTestCase_008467_1, VkglTestCase_008467_2);

#define VkglTestCase_008468_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008468_2 "ndom.basic_expression.fragment.36"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008468, VkglTestCase_008468_1, VkglTestCase_008468_2);

#define VkglTestCase_008469_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008469_2 "ndom.basic_expression.fragment.37"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008469, VkglTestCase_008469_1, VkglTestCase_008469_2);

#define VkglTestCase_008470_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008470_2 "ndom.basic_expression.fragment.38"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008470, VkglTestCase_008470_1, VkglTestCase_008470_2);

#define VkglTestCase_008471_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008471_2 "ndom.basic_expression.fragment.39"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008471, VkglTestCase_008471_1, VkglTestCase_008471_2);

#define VkglTestCase_008472_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008472_2 "ndom.basic_expression.fragment.40"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008472, VkglTestCase_008472_1, VkglTestCase_008472_2);

#define VkglTestCase_008473_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008473_2 "ndom.basic_expression.fragment.41"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008473, VkglTestCase_008473_1, VkglTestCase_008473_2);

#define VkglTestCase_008474_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008474_2 "ndom.basic_expression.fragment.42"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008474, VkglTestCase_008474_1, VkglTestCase_008474_2);

#define VkglTestCase_008475_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008475_2 "ndom.basic_expression.fragment.43"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008475, VkglTestCase_008475_1, VkglTestCase_008475_2);

#define VkglTestCase_008476_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008476_2 "ndom.basic_expression.fragment.44"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008476, VkglTestCase_008476_1, VkglTestCase_008476_2);

#define VkglTestCase_008477_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008477_2 "ndom.basic_expression.fragment.45"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008477, VkglTestCase_008477_1, VkglTestCase_008477_2);

#define VkglTestCase_008478_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008478_2 "ndom.basic_expression.fragment.46"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008478, VkglTestCase_008478_1, VkglTestCase_008478_2);

#define VkglTestCase_008479_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008479_2 "ndom.basic_expression.fragment.47"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008479, VkglTestCase_008479_1, VkglTestCase_008479_2);

#define VkglTestCase_008480_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008480_2 "ndom.basic_expression.fragment.48"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008480, VkglTestCase_008480_1, VkglTestCase_008480_2);

#define VkglTestCase_008481_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008481_2 "ndom.basic_expression.fragment.49"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008481, VkglTestCase_008481_1, VkglTestCase_008481_2);

#define VkglTestCase_008482_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008482_2 "ndom.basic_expression.fragment.50"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008482, VkglTestCase_008482_1, VkglTestCase_008482_2);

#define VkglTestCase_008483_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008483_2 "ndom.basic_expression.fragment.51"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008483, VkglTestCase_008483_1, VkglTestCase_008483_2);

#define VkglTestCase_008484_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008484_2 "ndom.basic_expression.fragment.52"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008484, VkglTestCase_008484_1, VkglTestCase_008484_2);

#define VkglTestCase_008485_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008485_2 "ndom.basic_expression.fragment.53"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008485, VkglTestCase_008485_1, VkglTestCase_008485_2);

#define VkglTestCase_008486_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008486_2 "ndom.basic_expression.fragment.54"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008486, VkglTestCase_008486_1, VkglTestCase_008486_2);

#define VkglTestCase_008487_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008487_2 "ndom.basic_expression.fragment.55"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008487, VkglTestCase_008487_1, VkglTestCase_008487_2);

#define VkglTestCase_008488_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008488_2 "ndom.basic_expression.fragment.56"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008488, VkglTestCase_008488_1, VkglTestCase_008488_2);

#define VkglTestCase_008489_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008489_2 "ndom.basic_expression.fragment.57"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008489, VkglTestCase_008489_1, VkglTestCase_008489_2);

#define VkglTestCase_008490_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008490_2 "ndom.basic_expression.fragment.58"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008490, VkglTestCase_008490_1, VkglTestCase_008490_2);

#define VkglTestCase_008491_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008491_2 "ndom.basic_expression.fragment.59"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008491, VkglTestCase_008491_1, VkglTestCase_008491_2);

#define VkglTestCase_008492_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008492_2 "ndom.basic_expression.fragment.60"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008492, VkglTestCase_008492_1, VkglTestCase_008492_2);

#define VkglTestCase_008493_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008493_2 "ndom.basic_expression.fragment.61"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008493, VkglTestCase_008493_1, VkglTestCase_008493_2);

#define VkglTestCase_008494_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008494_2 "ndom.basic_expression.fragment.62"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008494, VkglTestCase_008494_1, VkglTestCase_008494_2);

#define VkglTestCase_008495_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008495_2 "ndom.basic_expression.fragment.63"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008495, VkglTestCase_008495_1, VkglTestCase_008495_2);

#define VkglTestCase_008496_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008496_2 "ndom.basic_expression.fragment.64"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008496, VkglTestCase_008496_1, VkglTestCase_008496_2);

#define VkglTestCase_008497_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008497_2 "ndom.basic_expression.fragment.65"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008497, VkglTestCase_008497_1, VkglTestCase_008497_2);

#define VkglTestCase_008498_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008498_2 "ndom.basic_expression.fragment.66"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008498, VkglTestCase_008498_1, VkglTestCase_008498_2);

#define VkglTestCase_008499_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008499_2 "ndom.basic_expression.fragment.67"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008499, VkglTestCase_008499_1, VkglTestCase_008499_2);

#define VkglTestCase_008500_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008500_2 "ndom.basic_expression.fragment.68"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008500, VkglTestCase_008500_1, VkglTestCase_008500_2);

#define VkglTestCase_008501_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008501_2 "ndom.basic_expression.fragment.69"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008501, VkglTestCase_008501_1, VkglTestCase_008501_2);

#define VkglTestCase_008502_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008502_2 "ndom.basic_expression.fragment.70"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008502, VkglTestCase_008502_1, VkglTestCase_008502_2);

#define VkglTestCase_008503_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008503_2 "ndom.basic_expression.fragment.71"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008503, VkglTestCase_008503_1, VkglTestCase_008503_2);

#define VkglTestCase_008504_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008504_2 "ndom.basic_expression.fragment.72"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008504, VkglTestCase_008504_1, VkglTestCase_008504_2);

#define VkglTestCase_008505_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008505_2 "ndom.basic_expression.fragment.73"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008505, VkglTestCase_008505_1, VkglTestCase_008505_2);

#define VkglTestCase_008506_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008506_2 "ndom.basic_expression.fragment.74"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008506, VkglTestCase_008506_1, VkglTestCase_008506_2);

#define VkglTestCase_008507_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008507_2 "ndom.basic_expression.fragment.75"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008507, VkglTestCase_008507_1, VkglTestCase_008507_2);

#define VkglTestCase_008508_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008508_2 "ndom.basic_expression.fragment.76"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008508, VkglTestCase_008508_1, VkglTestCase_008508_2);

#define VkglTestCase_008509_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008509_2 "ndom.basic_expression.fragment.77"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008509, VkglTestCase_008509_1, VkglTestCase_008509_2);

#define VkglTestCase_008510_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008510_2 "ndom.basic_expression.fragment.78"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008510, VkglTestCase_008510_1, VkglTestCase_008510_2);

#define VkglTestCase_008511_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008511_2 "ndom.basic_expression.fragment.79"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008511, VkglTestCase_008511_1, VkglTestCase_008511_2);

#define VkglTestCase_008512_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008512_2 "ndom.basic_expression.fragment.80"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008512, VkglTestCase_008512_1, VkglTestCase_008512_2);

#define VkglTestCase_008513_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008513_2 "ndom.basic_expression.fragment.81"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008513, VkglTestCase_008513_1, VkglTestCase_008513_2);

#define VkglTestCase_008514_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008514_2 "ndom.basic_expression.fragment.82"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008514, VkglTestCase_008514_1, VkglTestCase_008514_2);

#define VkglTestCase_008515_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008515_2 "ndom.basic_expression.fragment.83"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008515, VkglTestCase_008515_1, VkglTestCase_008515_2);

#define VkglTestCase_008516_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008516_2 "ndom.basic_expression.fragment.84"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008516, VkglTestCase_008516_1, VkglTestCase_008516_2);

#define VkglTestCase_008517_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008517_2 "ndom.basic_expression.fragment.85"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008517, VkglTestCase_008517_1, VkglTestCase_008517_2);

#define VkglTestCase_008518_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008518_2 "ndom.basic_expression.fragment.86"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008518, VkglTestCase_008518_1, VkglTestCase_008518_2);

#define VkglTestCase_008519_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008519_2 "ndom.basic_expression.fragment.87"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008519, VkglTestCase_008519_1, VkglTestCase_008519_2);

#define VkglTestCase_008520_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008520_2 "ndom.basic_expression.fragment.88"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008520, VkglTestCase_008520_1, VkglTestCase_008520_2);

#define VkglTestCase_008521_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008521_2 "ndom.basic_expression.fragment.89"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008521, VkglTestCase_008521_1, VkglTestCase_008521_2);

#define VkglTestCase_008522_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008522_2 "ndom.basic_expression.fragment.90"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008522, VkglTestCase_008522_1, VkglTestCase_008522_2);

#define VkglTestCase_008523_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008523_2 "ndom.basic_expression.fragment.91"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008523, VkglTestCase_008523_1, VkglTestCase_008523_2);

#define VkglTestCase_008524_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008524_2 "ndom.basic_expression.fragment.92"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008524, VkglTestCase_008524_1, VkglTestCase_008524_2);

#define VkglTestCase_008525_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008525_2 "ndom.basic_expression.fragment.93"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008525, VkglTestCase_008525_1, VkglTestCase_008525_2);

#define VkglTestCase_008526_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008526_2 "ndom.basic_expression.fragment.94"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008526, VkglTestCase_008526_1, VkglTestCase_008526_2);

#define VkglTestCase_008527_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008527_2 "ndom.basic_expression.fragment.95"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008527, VkglTestCase_008527_1, VkglTestCase_008527_2);

#define VkglTestCase_008528_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008528_2 "ndom.basic_expression.fragment.96"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008528, VkglTestCase_008528_1, VkglTestCase_008528_2);

#define VkglTestCase_008529_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008529_2 "ndom.basic_expression.fragment.97"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008529, VkglTestCase_008529_1, VkglTestCase_008529_2);

#define VkglTestCase_008530_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008530_2 "ndom.basic_expression.fragment.98"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008530, VkglTestCase_008530_1, VkglTestCase_008530_2);

#define VkglTestCase_008531_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008531_2 "ndom.basic_expression.fragment.99"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008531, VkglTestCase_008531_1, VkglTestCase_008531_2);
