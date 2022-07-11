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
#include "../ActsDeqpgles20014TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_013401_1 "dEQP-GLES2.functional.vertex_arrays.multiple_"
#define VkglTestCase_013401_2 "attributes.stride.3_float2_0_float2_0_float2_0"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013401, VkglTestCase_013401_1, VkglTestCase_013401_2);

#define VkglTestCase_013402_1 "dEQP-GLES2.functional.vertex_arrays.multiple_"
#define VkglTestCase_013402_2 "attributes.stride.3_float2_0_float2_0_float2_8"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013402, VkglTestCase_013402_1, VkglTestCase_013402_2);

#define VkglTestCase_013403_1 "dEQP-GLES2.functional.vertex_arrays.multiple_a"
#define VkglTestCase_013403_2 "ttributes.stride.3_float2_0_float2_0_float2_17"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013403, VkglTestCase_013403_1, VkglTestCase_013403_2);

#define VkglTestCase_013404_1 "dEQP-GLES2.functional.vertex_arrays.multiple_a"
#define VkglTestCase_013404_2 "ttributes.stride.3_float2_0_float2_0_float2_32"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013404, VkglTestCase_013404_1, VkglTestCase_013404_2);

#define VkglTestCase_013405_1 "dEQP-GLES2.functional.vertex_arrays.multiple_"
#define VkglTestCase_013405_2 "attributes.stride.3_float2_0_float2_8_float2_0"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013405, VkglTestCase_013405_1, VkglTestCase_013405_2);

#define VkglTestCase_013406_1 "dEQP-GLES2.functional.vertex_arrays.multiple_"
#define VkglTestCase_013406_2 "attributes.stride.3_float2_0_float2_8_float2_8"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013406, VkglTestCase_013406_1, VkglTestCase_013406_2);

#define VkglTestCase_013407_1 "dEQP-GLES2.functional.vertex_arrays.multiple_a"
#define VkglTestCase_013407_2 "ttributes.stride.3_float2_0_float2_8_float2_17"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013407, VkglTestCase_013407_1, VkglTestCase_013407_2);

#define VkglTestCase_013408_1 "dEQP-GLES2.functional.vertex_arrays.multiple_a"
#define VkglTestCase_013408_2 "ttributes.stride.3_float2_0_float2_8_float2_32"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013408, VkglTestCase_013408_1, VkglTestCase_013408_2);

#define VkglTestCase_013409_1 "dEQP-GLES2.functional.vertex_arrays.multiple_a"
#define VkglTestCase_013409_2 "ttributes.stride.3_float2_0_float2_17_float2_0"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013409, VkglTestCase_013409_1, VkglTestCase_013409_2);

#define VkglTestCase_013410_1 "dEQP-GLES2.functional.vertex_arrays.multiple_a"
#define VkglTestCase_013410_2 "ttributes.stride.3_float2_0_float2_17_float2_8"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013410, VkglTestCase_013410_1, VkglTestCase_013410_2);

#define VkglTestCase_013411_1 "dEQP-GLES2.functional.vertex_arrays.multiple_a"
#define VkglTestCase_013411_2 "ttributes.stride.3_float2_0_float2_17_float2_17"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013411, VkglTestCase_013411_1, VkglTestCase_013411_2);

#define VkglTestCase_013412_1 "dEQP-GLES2.functional.vertex_arrays.multiple_a"
#define VkglTestCase_013412_2 "ttributes.stride.3_float2_0_float2_17_float2_32"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013412, VkglTestCase_013412_1, VkglTestCase_013412_2);

#define VkglTestCase_013413_1 "dEQP-GLES2.functional.vertex_arrays.multiple_a"
#define VkglTestCase_013413_2 "ttributes.stride.3_float2_0_float2_32_float2_0"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013413, VkglTestCase_013413_1, VkglTestCase_013413_2);

#define VkglTestCase_013414_1 "dEQP-GLES2.functional.vertex_arrays.multiple_a"
#define VkglTestCase_013414_2 "ttributes.stride.3_float2_0_float2_32_float2_8"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013414, VkglTestCase_013414_1, VkglTestCase_013414_2);

#define VkglTestCase_013415_1 "dEQP-GLES2.functional.vertex_arrays.multiple_a"
#define VkglTestCase_013415_2 "ttributes.stride.3_float2_0_float2_32_float2_17"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013415, VkglTestCase_013415_1, VkglTestCase_013415_2);

#define VkglTestCase_013416_1 "dEQP-GLES2.functional.vertex_arrays.multiple_a"
#define VkglTestCase_013416_2 "ttributes.stride.3_float2_0_float2_32_float2_32"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013416, VkglTestCase_013416_1, VkglTestCase_013416_2);

#define VkglTestCase_013417_1 "dEQP-GLES2.functional.vertex_arrays.multiple_"
#define VkglTestCase_013417_2 "attributes.stride.3_float2_8_float2_0_float2_0"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013417, VkglTestCase_013417_1, VkglTestCase_013417_2);

#define VkglTestCase_013418_1 "dEQP-GLES2.functional.vertex_arrays.multiple_"
#define VkglTestCase_013418_2 "attributes.stride.3_float2_8_float2_0_float2_8"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013418, VkglTestCase_013418_1, VkglTestCase_013418_2);

#define VkglTestCase_013419_1 "dEQP-GLES2.functional.vertex_arrays.multiple_a"
#define VkglTestCase_013419_2 "ttributes.stride.3_float2_8_float2_0_float2_17"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013419, VkglTestCase_013419_1, VkglTestCase_013419_2);

#define VkglTestCase_013420_1 "dEQP-GLES2.functional.vertex_arrays.multiple_a"
#define VkglTestCase_013420_2 "ttributes.stride.3_float2_8_float2_0_float2_32"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013420, VkglTestCase_013420_1, VkglTestCase_013420_2);

#define VkglTestCase_013421_1 "dEQP-GLES2.functional.vertex_arrays.multiple_"
#define VkglTestCase_013421_2 "attributes.stride.3_float2_8_float2_8_float2_0"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013421, VkglTestCase_013421_1, VkglTestCase_013421_2);

#define VkglTestCase_013422_1 "dEQP-GLES2.functional.vertex_arrays.multiple_"
#define VkglTestCase_013422_2 "attributes.stride.3_float2_8_float2_8_float2_8"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013422, VkglTestCase_013422_1, VkglTestCase_013422_2);

#define VkglTestCase_013423_1 "dEQP-GLES2.functional.vertex_arrays.multiple_a"
#define VkglTestCase_013423_2 "ttributes.stride.3_float2_8_float2_8_float2_17"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013423, VkglTestCase_013423_1, VkglTestCase_013423_2);

#define VkglTestCase_013424_1 "dEQP-GLES2.functional.vertex_arrays.multiple_a"
#define VkglTestCase_013424_2 "ttributes.stride.3_float2_8_float2_8_float2_32"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013424, VkglTestCase_013424_1, VkglTestCase_013424_2);

#define VkglTestCase_013425_1 "dEQP-GLES2.functional.vertex_arrays.multiple_a"
#define VkglTestCase_013425_2 "ttributes.stride.3_float2_8_float2_17_float2_0"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013425, VkglTestCase_013425_1, VkglTestCase_013425_2);

#define VkglTestCase_013426_1 "dEQP-GLES2.functional.vertex_arrays.multiple_a"
#define VkglTestCase_013426_2 "ttributes.stride.3_float2_8_float2_17_float2_8"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013426, VkglTestCase_013426_1, VkglTestCase_013426_2);

#define VkglTestCase_013427_1 "dEQP-GLES2.functional.vertex_arrays.multiple_a"
#define VkglTestCase_013427_2 "ttributes.stride.3_float2_8_float2_17_float2_17"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013427, VkglTestCase_013427_1, VkglTestCase_013427_2);

#define VkglTestCase_013428_1 "dEQP-GLES2.functional.vertex_arrays.multiple_a"
#define VkglTestCase_013428_2 "ttributes.stride.3_float2_8_float2_17_float2_32"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013428, VkglTestCase_013428_1, VkglTestCase_013428_2);

#define VkglTestCase_013429_1 "dEQP-GLES2.functional.vertex_arrays.multiple_a"
#define VkglTestCase_013429_2 "ttributes.stride.3_float2_8_float2_32_float2_0"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013429, VkglTestCase_013429_1, VkglTestCase_013429_2);

#define VkglTestCase_013430_1 "dEQP-GLES2.functional.vertex_arrays.multiple_a"
#define VkglTestCase_013430_2 "ttributes.stride.3_float2_8_float2_32_float2_8"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013430, VkglTestCase_013430_1, VkglTestCase_013430_2);

#define VkglTestCase_013431_1 "dEQP-GLES2.functional.vertex_arrays.multiple_a"
#define VkglTestCase_013431_2 "ttributes.stride.3_float2_8_float2_32_float2_17"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013431, VkglTestCase_013431_1, VkglTestCase_013431_2);

#define VkglTestCase_013432_1 "dEQP-GLES2.functional.vertex_arrays.multiple_a"
#define VkglTestCase_013432_2 "ttributes.stride.3_float2_8_float2_32_float2_32"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013432, VkglTestCase_013432_1, VkglTestCase_013432_2);

#define VkglTestCase_013433_1 "dEQP-GLES2.functional.vertex_arrays.multiple_a"
#define VkglTestCase_013433_2 "ttributes.stride.3_float2_17_float2_0_float2_0"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013433, VkglTestCase_013433_1, VkglTestCase_013433_2);

#define VkglTestCase_013434_1 "dEQP-GLES2.functional.vertex_arrays.multiple_a"
#define VkglTestCase_013434_2 "ttributes.stride.3_float2_17_float2_0_float2_8"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013434, VkglTestCase_013434_1, VkglTestCase_013434_2);

#define VkglTestCase_013435_1 "dEQP-GLES2.functional.vertex_arrays.multiple_a"
#define VkglTestCase_013435_2 "ttributes.stride.3_float2_17_float2_0_float2_17"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013435, VkglTestCase_013435_1, VkglTestCase_013435_2);

#define VkglTestCase_013436_1 "dEQP-GLES2.functional.vertex_arrays.multiple_a"
#define VkglTestCase_013436_2 "ttributes.stride.3_float2_17_float2_0_float2_32"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013436, VkglTestCase_013436_1, VkglTestCase_013436_2);

#define VkglTestCase_013437_1 "dEQP-GLES2.functional.vertex_arrays.multiple_a"
#define VkglTestCase_013437_2 "ttributes.stride.3_float2_17_float2_8_float2_0"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013437, VkglTestCase_013437_1, VkglTestCase_013437_2);

#define VkglTestCase_013438_1 "dEQP-GLES2.functional.vertex_arrays.multiple_a"
#define VkglTestCase_013438_2 "ttributes.stride.3_float2_17_float2_8_float2_8"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013438, VkglTestCase_013438_1, VkglTestCase_013438_2);

#define VkglTestCase_013439_1 "dEQP-GLES2.functional.vertex_arrays.multiple_a"
#define VkglTestCase_013439_2 "ttributes.stride.3_float2_17_float2_8_float2_17"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013439, VkglTestCase_013439_1, VkglTestCase_013439_2);

#define VkglTestCase_013440_1 "dEQP-GLES2.functional.vertex_arrays.multiple_a"
#define VkglTestCase_013440_2 "ttributes.stride.3_float2_17_float2_8_float2_32"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013440, VkglTestCase_013440_1, VkglTestCase_013440_2);

#define VkglTestCase_013441_1 "dEQP-GLES2.functional.vertex_arrays.multiple_a"
#define VkglTestCase_013441_2 "ttributes.stride.3_float2_17_float2_17_float2_0"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013441, VkglTestCase_013441_1, VkglTestCase_013441_2);

#define VkglTestCase_013442_1 "dEQP-GLES2.functional.vertex_arrays.multiple_a"
#define VkglTestCase_013442_2 "ttributes.stride.3_float2_17_float2_17_float2_8"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013442, VkglTestCase_013442_1, VkglTestCase_013442_2);

#define VkglTestCase_013443_1 "dEQP-GLES2.functional.vertex_arrays.multiple_at"
#define VkglTestCase_013443_2 "tributes.stride.3_float2_17_float2_17_float2_17"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013443, VkglTestCase_013443_1, VkglTestCase_013443_2);

#define VkglTestCase_013444_1 "dEQP-GLES2.functional.vertex_arrays.multiple_at"
#define VkglTestCase_013444_2 "tributes.stride.3_float2_17_float2_17_float2_32"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013444, VkglTestCase_013444_1, VkglTestCase_013444_2);

#define VkglTestCase_013445_1 "dEQP-GLES2.functional.vertex_arrays.multiple_a"
#define VkglTestCase_013445_2 "ttributes.stride.3_float2_17_float2_32_float2_0"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013445, VkglTestCase_013445_1, VkglTestCase_013445_2);

#define VkglTestCase_013446_1 "dEQP-GLES2.functional.vertex_arrays.multiple_a"
#define VkglTestCase_013446_2 "ttributes.stride.3_float2_17_float2_32_float2_8"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013446, VkglTestCase_013446_1, VkglTestCase_013446_2);

#define VkglTestCase_013447_1 "dEQP-GLES2.functional.vertex_arrays.multiple_at"
#define VkglTestCase_013447_2 "tributes.stride.3_float2_17_float2_32_float2_17"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013447, VkglTestCase_013447_1, VkglTestCase_013447_2);

#define VkglTestCase_013448_1 "dEQP-GLES2.functional.vertex_arrays.multiple_at"
#define VkglTestCase_013448_2 "tributes.stride.3_float2_17_float2_32_float2_32"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013448, VkglTestCase_013448_1, VkglTestCase_013448_2);

#define VkglTestCase_013449_1 "dEQP-GLES2.functional.vertex_arrays.multiple_a"
#define VkglTestCase_013449_2 "ttributes.stride.3_float2_32_float2_0_float2_0"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013449, VkglTestCase_013449_1, VkglTestCase_013449_2);

#define VkglTestCase_013450_1 "dEQP-GLES2.functional.vertex_arrays.multiple_a"
#define VkglTestCase_013450_2 "ttributes.stride.3_float2_32_float2_0_float2_8"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013450, VkglTestCase_013450_1, VkglTestCase_013450_2);

#define VkglTestCase_013451_1 "dEQP-GLES2.functional.vertex_arrays.multiple_a"
#define VkglTestCase_013451_2 "ttributes.stride.3_float2_32_float2_0_float2_17"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013451, VkglTestCase_013451_1, VkglTestCase_013451_2);

#define VkglTestCase_013452_1 "dEQP-GLES2.functional.vertex_arrays.multiple_a"
#define VkglTestCase_013452_2 "ttributes.stride.3_float2_32_float2_0_float2_32"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013452, VkglTestCase_013452_1, VkglTestCase_013452_2);

#define VkglTestCase_013453_1 "dEQP-GLES2.functional.vertex_arrays.multiple_a"
#define VkglTestCase_013453_2 "ttributes.stride.3_float2_32_float2_8_float2_0"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013453, VkglTestCase_013453_1, VkglTestCase_013453_2);

#define VkglTestCase_013454_1 "dEQP-GLES2.functional.vertex_arrays.multiple_a"
#define VkglTestCase_013454_2 "ttributes.stride.3_float2_32_float2_8_float2_8"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013454, VkglTestCase_013454_1, VkglTestCase_013454_2);

#define VkglTestCase_013455_1 "dEQP-GLES2.functional.vertex_arrays.multiple_a"
#define VkglTestCase_013455_2 "ttributes.stride.3_float2_32_float2_8_float2_17"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013455, VkglTestCase_013455_1, VkglTestCase_013455_2);

#define VkglTestCase_013456_1 "dEQP-GLES2.functional.vertex_arrays.multiple_a"
#define VkglTestCase_013456_2 "ttributes.stride.3_float2_32_float2_8_float2_32"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013456, VkglTestCase_013456_1, VkglTestCase_013456_2);

#define VkglTestCase_013457_1 "dEQP-GLES2.functional.vertex_arrays.multiple_a"
#define VkglTestCase_013457_2 "ttributes.stride.3_float2_32_float2_17_float2_0"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013457, VkglTestCase_013457_1, VkglTestCase_013457_2);

#define VkglTestCase_013458_1 "dEQP-GLES2.functional.vertex_arrays.multiple_a"
#define VkglTestCase_013458_2 "ttributes.stride.3_float2_32_float2_17_float2_8"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013458, VkglTestCase_013458_1, VkglTestCase_013458_2);

#define VkglTestCase_013459_1 "dEQP-GLES2.functional.vertex_arrays.multiple_at"
#define VkglTestCase_013459_2 "tributes.stride.3_float2_32_float2_17_float2_17"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013459, VkglTestCase_013459_1, VkglTestCase_013459_2);

#define VkglTestCase_013460_1 "dEQP-GLES2.functional.vertex_arrays.multiple_at"
#define VkglTestCase_013460_2 "tributes.stride.3_float2_32_float2_17_float2_32"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013460, VkglTestCase_013460_1, VkglTestCase_013460_2);

#define VkglTestCase_013461_1 "dEQP-GLES2.functional.vertex_arrays.multiple_a"
#define VkglTestCase_013461_2 "ttributes.stride.3_float2_32_float2_32_float2_0"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013461, VkglTestCase_013461_1, VkglTestCase_013461_2);

#define VkglTestCase_013462_1 "dEQP-GLES2.functional.vertex_arrays.multiple_a"
#define VkglTestCase_013462_2 "ttributes.stride.3_float2_32_float2_32_float2_8"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013462, VkglTestCase_013462_1, VkglTestCase_013462_2);

#define VkglTestCase_013463_1 "dEQP-GLES2.functional.vertex_arrays.multiple_at"
#define VkglTestCase_013463_2 "tributes.stride.3_float2_32_float2_32_float2_17"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013463, VkglTestCase_013463_1, VkglTestCase_013463_2);

#define VkglTestCase_013464_1 "dEQP-GLES2.functional.vertex_arrays.multiple_at"
#define VkglTestCase_013464_2 "tributes.stride.3_float2_32_float2_32_float2_32"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013464, VkglTestCase_013464_1, VkglTestCase_013464_2);
