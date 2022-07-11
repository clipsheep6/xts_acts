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
#include "../ActsDeqpgles20010TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_009432_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009432_2 ".random.trigonometric.vertex.0"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009432, VkglTestCase_009432_1, VkglTestCase_009432_2);

#define VkglTestCase_009433_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009433_2 ".random.trigonometric.vertex.1"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009433, VkglTestCase_009433_1, VkglTestCase_009433_2);

#define VkglTestCase_009434_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009434_2 ".random.trigonometric.vertex.2"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009434, VkglTestCase_009434_1, VkglTestCase_009434_2);

#define VkglTestCase_009435_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009435_2 ".random.trigonometric.vertex.3"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009435, VkglTestCase_009435_1, VkglTestCase_009435_2);

#define VkglTestCase_009436_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009436_2 ".random.trigonometric.vertex.4"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009436, VkglTestCase_009436_1, VkglTestCase_009436_2);

#define VkglTestCase_009437_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009437_2 ".random.trigonometric.vertex.5"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009437, VkglTestCase_009437_1, VkglTestCase_009437_2);

#define VkglTestCase_009438_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009438_2 ".random.trigonometric.vertex.6"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009438, VkglTestCase_009438_1, VkglTestCase_009438_2);

#define VkglTestCase_009439_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009439_2 ".random.trigonometric.vertex.7"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009439, VkglTestCase_009439_1, VkglTestCase_009439_2);

#define VkglTestCase_009440_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009440_2 ".random.trigonometric.vertex.8"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009440, VkglTestCase_009440_1, VkglTestCase_009440_2);

#define VkglTestCase_009441_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009441_2 ".random.trigonometric.vertex.9"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009441, VkglTestCase_009441_1, VkglTestCase_009441_2);

#define VkglTestCase_009442_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009442_2 "random.trigonometric.vertex.10"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009442, VkglTestCase_009442_1, VkglTestCase_009442_2);

#define VkglTestCase_009443_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009443_2 "random.trigonometric.vertex.11"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009443, VkglTestCase_009443_1, VkglTestCase_009443_2);

#define VkglTestCase_009444_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009444_2 "random.trigonometric.vertex.12"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009444, VkglTestCase_009444_1, VkglTestCase_009444_2);

#define VkglTestCase_009445_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009445_2 "random.trigonometric.vertex.13"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009445, VkglTestCase_009445_1, VkglTestCase_009445_2);

#define VkglTestCase_009446_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009446_2 "random.trigonometric.vertex.14"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009446, VkglTestCase_009446_1, VkglTestCase_009446_2);

#define VkglTestCase_009447_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009447_2 "random.trigonometric.vertex.15"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009447, VkglTestCase_009447_1, VkglTestCase_009447_2);

#define VkglTestCase_009448_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009448_2 "random.trigonometric.vertex.16"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009448, VkglTestCase_009448_1, VkglTestCase_009448_2);

#define VkglTestCase_009449_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009449_2 "random.trigonometric.vertex.17"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009449, VkglTestCase_009449_1, VkglTestCase_009449_2);

#define VkglTestCase_009450_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009450_2 "random.trigonometric.vertex.18"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009450, VkglTestCase_009450_1, VkglTestCase_009450_2);

#define VkglTestCase_009451_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009451_2 "random.trigonometric.vertex.19"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009451, VkglTestCase_009451_1, VkglTestCase_009451_2);

#define VkglTestCase_009452_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009452_2 "random.trigonometric.vertex.20"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009452, VkglTestCase_009452_1, VkglTestCase_009452_2);

#define VkglTestCase_009453_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009453_2 "random.trigonometric.vertex.21"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009453, VkglTestCase_009453_1, VkglTestCase_009453_2);

#define VkglTestCase_009454_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009454_2 "random.trigonometric.vertex.22"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009454, VkglTestCase_009454_1, VkglTestCase_009454_2);

#define VkglTestCase_009455_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009455_2 "random.trigonometric.vertex.23"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009455, VkglTestCase_009455_1, VkglTestCase_009455_2);

#define VkglTestCase_009456_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009456_2 "random.trigonometric.vertex.24"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009456, VkglTestCase_009456_1, VkglTestCase_009456_2);

#define VkglTestCase_009457_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009457_2 "random.trigonometric.vertex.25"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009457, VkglTestCase_009457_1, VkglTestCase_009457_2);

#define VkglTestCase_009458_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009458_2 "random.trigonometric.vertex.26"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009458, VkglTestCase_009458_1, VkglTestCase_009458_2);

#define VkglTestCase_009459_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009459_2 "random.trigonometric.vertex.27"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009459, VkglTestCase_009459_1, VkglTestCase_009459_2);

#define VkglTestCase_009460_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009460_2 "random.trigonometric.vertex.28"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009460, VkglTestCase_009460_1, VkglTestCase_009460_2);

#define VkglTestCase_009461_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009461_2 "random.trigonometric.vertex.29"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009461, VkglTestCase_009461_1, VkglTestCase_009461_2);

#define VkglTestCase_009462_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009462_2 "random.trigonometric.vertex.30"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009462, VkglTestCase_009462_1, VkglTestCase_009462_2);

#define VkglTestCase_009463_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009463_2 "random.trigonometric.vertex.31"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009463, VkglTestCase_009463_1, VkglTestCase_009463_2);

#define VkglTestCase_009464_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009464_2 "random.trigonometric.vertex.32"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009464, VkglTestCase_009464_1, VkglTestCase_009464_2);

#define VkglTestCase_009465_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009465_2 "random.trigonometric.vertex.33"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009465, VkglTestCase_009465_1, VkglTestCase_009465_2);

#define VkglTestCase_009466_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009466_2 "random.trigonometric.vertex.34"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009466, VkglTestCase_009466_1, VkglTestCase_009466_2);

#define VkglTestCase_009467_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009467_2 "random.trigonometric.vertex.35"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009467, VkglTestCase_009467_1, VkglTestCase_009467_2);

#define VkglTestCase_009468_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009468_2 "random.trigonometric.vertex.36"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009468, VkglTestCase_009468_1, VkglTestCase_009468_2);

#define VkglTestCase_009469_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009469_2 "random.trigonometric.vertex.37"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009469, VkglTestCase_009469_1, VkglTestCase_009469_2);

#define VkglTestCase_009470_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009470_2 "random.trigonometric.vertex.38"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009470, VkglTestCase_009470_1, VkglTestCase_009470_2);

#define VkglTestCase_009471_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009471_2 "random.trigonometric.vertex.39"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009471, VkglTestCase_009471_1, VkglTestCase_009471_2);

#define VkglTestCase_009472_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009472_2 "random.trigonometric.vertex.40"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009472, VkglTestCase_009472_1, VkglTestCase_009472_2);

#define VkglTestCase_009473_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009473_2 "random.trigonometric.vertex.41"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009473, VkglTestCase_009473_1, VkglTestCase_009473_2);

#define VkglTestCase_009474_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009474_2 "random.trigonometric.vertex.42"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009474, VkglTestCase_009474_1, VkglTestCase_009474_2);

#define VkglTestCase_009475_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009475_2 "random.trigonometric.vertex.43"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009475, VkglTestCase_009475_1, VkglTestCase_009475_2);

#define VkglTestCase_009476_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009476_2 "random.trigonometric.vertex.44"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009476, VkglTestCase_009476_1, VkglTestCase_009476_2);

#define VkglTestCase_009477_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009477_2 "random.trigonometric.vertex.45"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009477, VkglTestCase_009477_1, VkglTestCase_009477_2);

#define VkglTestCase_009478_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009478_2 "random.trigonometric.vertex.46"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009478, VkglTestCase_009478_1, VkglTestCase_009478_2);

#define VkglTestCase_009479_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009479_2 "random.trigonometric.vertex.47"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009479, VkglTestCase_009479_1, VkglTestCase_009479_2);

#define VkglTestCase_009480_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009480_2 "random.trigonometric.vertex.48"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009480, VkglTestCase_009480_1, VkglTestCase_009480_2);

#define VkglTestCase_009481_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009481_2 "random.trigonometric.vertex.49"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009481, VkglTestCase_009481_1, VkglTestCase_009481_2);

#define VkglTestCase_009482_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009482_2 "random.trigonometric.vertex.50"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009482, VkglTestCase_009482_1, VkglTestCase_009482_2);

#define VkglTestCase_009483_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009483_2 "random.trigonometric.vertex.51"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009483, VkglTestCase_009483_1, VkglTestCase_009483_2);

#define VkglTestCase_009484_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009484_2 "random.trigonometric.vertex.52"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009484, VkglTestCase_009484_1, VkglTestCase_009484_2);

#define VkglTestCase_009485_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009485_2 "random.trigonometric.vertex.53"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009485, VkglTestCase_009485_1, VkglTestCase_009485_2);

#define VkglTestCase_009486_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009486_2 "random.trigonometric.vertex.54"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009486, VkglTestCase_009486_1, VkglTestCase_009486_2);

#define VkglTestCase_009487_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009487_2 "random.trigonometric.vertex.55"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009487, VkglTestCase_009487_1, VkglTestCase_009487_2);

#define VkglTestCase_009488_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009488_2 "random.trigonometric.vertex.56"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009488, VkglTestCase_009488_1, VkglTestCase_009488_2);

#define VkglTestCase_009489_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009489_2 "random.trigonometric.vertex.57"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009489, VkglTestCase_009489_1, VkglTestCase_009489_2);

#define VkglTestCase_009490_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009490_2 "random.trigonometric.vertex.58"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009490, VkglTestCase_009490_1, VkglTestCase_009490_2);

#define VkglTestCase_009491_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009491_2 "random.trigonometric.vertex.59"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009491, VkglTestCase_009491_1, VkglTestCase_009491_2);

#define VkglTestCase_009492_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009492_2 "random.trigonometric.vertex.60"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009492, VkglTestCase_009492_1, VkglTestCase_009492_2);

#define VkglTestCase_009493_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009493_2 "random.trigonometric.vertex.61"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009493, VkglTestCase_009493_1, VkglTestCase_009493_2);

#define VkglTestCase_009494_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009494_2 "random.trigonometric.vertex.62"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009494, VkglTestCase_009494_1, VkglTestCase_009494_2);

#define VkglTestCase_009495_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009495_2 "random.trigonometric.vertex.63"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009495, VkglTestCase_009495_1, VkglTestCase_009495_2);

#define VkglTestCase_009496_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009496_2 "random.trigonometric.vertex.64"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009496, VkglTestCase_009496_1, VkglTestCase_009496_2);

#define VkglTestCase_009497_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009497_2 "random.trigonometric.vertex.65"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009497, VkglTestCase_009497_1, VkglTestCase_009497_2);

#define VkglTestCase_009498_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009498_2 "random.trigonometric.vertex.66"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009498, VkglTestCase_009498_1, VkglTestCase_009498_2);

#define VkglTestCase_009499_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009499_2 "random.trigonometric.vertex.67"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009499, VkglTestCase_009499_1, VkglTestCase_009499_2);

#define VkglTestCase_009500_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009500_2 "random.trigonometric.vertex.68"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009500, VkglTestCase_009500_1, VkglTestCase_009500_2);

#define VkglTestCase_009501_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009501_2 "random.trigonometric.vertex.69"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009501, VkglTestCase_009501_1, VkglTestCase_009501_2);

#define VkglTestCase_009502_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009502_2 "random.trigonometric.vertex.70"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009502, VkglTestCase_009502_1, VkglTestCase_009502_2);

#define VkglTestCase_009503_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009503_2 "random.trigonometric.vertex.71"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009503, VkglTestCase_009503_1, VkglTestCase_009503_2);

#define VkglTestCase_009504_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009504_2 "random.trigonometric.vertex.72"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009504, VkglTestCase_009504_1, VkglTestCase_009504_2);

#define VkglTestCase_009505_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009505_2 "random.trigonometric.vertex.73"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009505, VkglTestCase_009505_1, VkglTestCase_009505_2);

#define VkglTestCase_009506_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009506_2 "random.trigonometric.vertex.74"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009506, VkglTestCase_009506_1, VkglTestCase_009506_2);

#define VkglTestCase_009507_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009507_2 "random.trigonometric.vertex.75"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009507, VkglTestCase_009507_1, VkglTestCase_009507_2);

#define VkglTestCase_009508_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009508_2 "random.trigonometric.vertex.76"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009508, VkglTestCase_009508_1, VkglTestCase_009508_2);

#define VkglTestCase_009509_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009509_2 "random.trigonometric.vertex.77"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009509, VkglTestCase_009509_1, VkglTestCase_009509_2);

#define VkglTestCase_009510_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009510_2 "random.trigonometric.vertex.78"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009510, VkglTestCase_009510_1, VkglTestCase_009510_2);

#define VkglTestCase_009511_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009511_2 "random.trigonometric.vertex.79"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009511, VkglTestCase_009511_1, VkglTestCase_009511_2);

#define VkglTestCase_009512_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009512_2 "random.trigonometric.vertex.80"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009512, VkglTestCase_009512_1, VkglTestCase_009512_2);

#define VkglTestCase_009513_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009513_2 "random.trigonometric.vertex.81"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009513, VkglTestCase_009513_1, VkglTestCase_009513_2);

#define VkglTestCase_009514_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009514_2 "random.trigonometric.vertex.82"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009514, VkglTestCase_009514_1, VkglTestCase_009514_2);

#define VkglTestCase_009515_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009515_2 "random.trigonometric.vertex.83"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009515, VkglTestCase_009515_1, VkglTestCase_009515_2);

#define VkglTestCase_009516_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009516_2 "random.trigonometric.vertex.84"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009516, VkglTestCase_009516_1, VkglTestCase_009516_2);

#define VkglTestCase_009517_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009517_2 "random.trigonometric.vertex.85"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009517, VkglTestCase_009517_1, VkglTestCase_009517_2);

#define VkglTestCase_009518_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009518_2 "random.trigonometric.vertex.86"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009518, VkglTestCase_009518_1, VkglTestCase_009518_2);

#define VkglTestCase_009519_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009519_2 "random.trigonometric.vertex.87"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009519, VkglTestCase_009519_1, VkglTestCase_009519_2);

#define VkglTestCase_009520_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009520_2 "random.trigonometric.vertex.88"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009520, VkglTestCase_009520_1, VkglTestCase_009520_2);

#define VkglTestCase_009521_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009521_2 "random.trigonometric.vertex.89"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009521, VkglTestCase_009521_1, VkglTestCase_009521_2);

#define VkglTestCase_009522_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009522_2 "random.trigonometric.vertex.90"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009522, VkglTestCase_009522_1, VkglTestCase_009522_2);

#define VkglTestCase_009523_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009523_2 "random.trigonometric.vertex.91"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009523, VkglTestCase_009523_1, VkglTestCase_009523_2);

#define VkglTestCase_009524_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009524_2 "random.trigonometric.vertex.92"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009524, VkglTestCase_009524_1, VkglTestCase_009524_2);

#define VkglTestCase_009525_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009525_2 "random.trigonometric.vertex.93"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009525, VkglTestCase_009525_1, VkglTestCase_009525_2);

#define VkglTestCase_009526_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009526_2 "random.trigonometric.vertex.94"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009526, VkglTestCase_009526_1, VkglTestCase_009526_2);

#define VkglTestCase_009527_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009527_2 "random.trigonometric.vertex.95"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009527, VkglTestCase_009527_1, VkglTestCase_009527_2);

#define VkglTestCase_009528_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009528_2 "random.trigonometric.vertex.96"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009528, VkglTestCase_009528_1, VkglTestCase_009528_2);

#define VkglTestCase_009529_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009529_2 "random.trigonometric.vertex.97"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009529, VkglTestCase_009529_1, VkglTestCase_009529_2);

#define VkglTestCase_009530_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009530_2 "random.trigonometric.vertex.98"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009530, VkglTestCase_009530_1, VkglTestCase_009530_2);

#define VkglTestCase_009531_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009531_2 "random.trigonometric.vertex.99"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009531, VkglTestCase_009531_1, VkglTestCase_009531_2);
