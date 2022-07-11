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
#include "../ActsDeqpgles30044TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_043411_1 "dEQP-GLES3.functional.clipping.triangl"
#define VkglTestCase_043411_2 "e_vertex.clip_two.clip_neg_x_and_pos_x"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043411, VkglTestCase_043411_1, VkglTestCase_043411_2);

#define VkglTestCase_043412_1 "dEQP-GLES3.functional.clipping.triangl"
#define VkglTestCase_043412_2 "e_vertex.clip_two.clip_neg_x_and_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043412, VkglTestCase_043412_1, VkglTestCase_043412_2);

#define VkglTestCase_043413_1 "dEQP-GLES3.functional.clipping.triangl"
#define VkglTestCase_043413_2 "e_vertex.clip_two.clip_neg_x_and_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043413, VkglTestCase_043413_1, VkglTestCase_043413_2);

#define VkglTestCase_043414_1 "dEQP-GLES3.functional.clipping.triangle_v"
#define VkglTestCase_043414_2 "ertex.clip_two.clip_neg_x_and_neg_x_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043414, VkglTestCase_043414_1, VkglTestCase_043414_2);

#define VkglTestCase_043415_1 "dEQP-GLES3.functional.clipping.triangle_v"
#define VkglTestCase_043415_2 "ertex.clip_two.clip_neg_x_and_pos_x_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043415, VkglTestCase_043415_1, VkglTestCase_043415_2);

#define VkglTestCase_043416_1 "dEQP-GLES3.functional.clipping.triangle_v"
#define VkglTestCase_043416_2 "ertex.clip_two.clip_neg_x_and_pos_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043416, VkglTestCase_043416_1, VkglTestCase_043416_2);

#define VkglTestCase_043417_1 "dEQP-GLES3.functional.clipping.triangle_v"
#define VkglTestCase_043417_2 "ertex.clip_two.clip_neg_x_and_neg_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043417, VkglTestCase_043417_1, VkglTestCase_043417_2);

#define VkglTestCase_043418_1 "dEQP-GLES3.functional.clipping.triangle_v"
#define VkglTestCase_043418_2 "ertex.clip_two.clip_neg_x_and_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043418, VkglTestCase_043418_1, VkglTestCase_043418_2);

#define VkglTestCase_043419_1 "dEQP-GLES3.functional.clipping.triangle_v"
#define VkglTestCase_043419_2 "ertex.clip_two.clip_neg_x_and_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043419, VkglTestCase_043419_1, VkglTestCase_043419_2);

#define VkglTestCase_043420_1 "dEQP-GLES3.functional.clipping.triangle_v"
#define VkglTestCase_043420_2 "ertex.clip_two.clip_neg_x_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043420, VkglTestCase_043420_1, VkglTestCase_043420_2);

#define VkglTestCase_043421_1 "dEQP-GLES3.functional.clipping.triangle_v"
#define VkglTestCase_043421_2 "ertex.clip_two.clip_neg_x_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043421, VkglTestCase_043421_1, VkglTestCase_043421_2);

#define VkglTestCase_043422_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043422_2 "ex.clip_two.clip_neg_x_and_neg_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043422, VkglTestCase_043422_1, VkglTestCase_043422_2);

#define VkglTestCase_043423_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043423_2 "ex.clip_two.clip_neg_x_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043423, VkglTestCase_043423_1, VkglTestCase_043423_2);

#define VkglTestCase_043424_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043424_2 "ex.clip_two.clip_neg_x_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043424, VkglTestCase_043424_1, VkglTestCase_043424_2);

#define VkglTestCase_043425_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043425_2 "ex.clip_two.clip_neg_x_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043425, VkglTestCase_043425_1, VkglTestCase_043425_2);

#define VkglTestCase_043426_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043426_2 "ex.clip_two.clip_neg_x_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043426, VkglTestCase_043426_1, VkglTestCase_043426_2);

#define VkglTestCase_043427_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043427_2 "ex.clip_two.clip_neg_x_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043427, VkglTestCase_043427_1, VkglTestCase_043427_2);

#define VkglTestCase_043428_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043428_2 "ex.clip_two.clip_neg_x_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043428, VkglTestCase_043428_1, VkglTestCase_043428_2);

#define VkglTestCase_043429_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043429_2 "ex.clip_two.clip_neg_x_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043429, VkglTestCase_043429_1, VkglTestCase_043429_2);

#define VkglTestCase_043430_1 "dEQP-GLES3.functional.clipping.triangl"
#define VkglTestCase_043430_2 "e_vertex.clip_two.clip_pos_x_and_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043430, VkglTestCase_043430_1, VkglTestCase_043430_2);

#define VkglTestCase_043431_1 "dEQP-GLES3.functional.clipping.triangl"
#define VkglTestCase_043431_2 "e_vertex.clip_two.clip_pos_x_and_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043431, VkglTestCase_043431_1, VkglTestCase_043431_2);

#define VkglTestCase_043432_1 "dEQP-GLES3.functional.clipping.triangle_v"
#define VkglTestCase_043432_2 "ertex.clip_two.clip_pos_x_and_neg_x_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043432, VkglTestCase_043432_1, VkglTestCase_043432_2);

#define VkglTestCase_043433_1 "dEQP-GLES3.functional.clipping.triangle_v"
#define VkglTestCase_043433_2 "ertex.clip_two.clip_pos_x_and_pos_x_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043433, VkglTestCase_043433_1, VkglTestCase_043433_2);

#define VkglTestCase_043434_1 "dEQP-GLES3.functional.clipping.triangle_v"
#define VkglTestCase_043434_2 "ertex.clip_two.clip_pos_x_and_pos_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043434, VkglTestCase_043434_1, VkglTestCase_043434_2);

#define VkglTestCase_043435_1 "dEQP-GLES3.functional.clipping.triangle_v"
#define VkglTestCase_043435_2 "ertex.clip_two.clip_pos_x_and_neg_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043435, VkglTestCase_043435_1, VkglTestCase_043435_2);

#define VkglTestCase_043436_1 "dEQP-GLES3.functional.clipping.triangle_v"
#define VkglTestCase_043436_2 "ertex.clip_two.clip_pos_x_and_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043436, VkglTestCase_043436_1, VkglTestCase_043436_2);

#define VkglTestCase_043437_1 "dEQP-GLES3.functional.clipping.triangle_v"
#define VkglTestCase_043437_2 "ertex.clip_two.clip_pos_x_and_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043437, VkglTestCase_043437_1, VkglTestCase_043437_2);

#define VkglTestCase_043438_1 "dEQP-GLES3.functional.clipping.triangle_v"
#define VkglTestCase_043438_2 "ertex.clip_two.clip_pos_x_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043438, VkglTestCase_043438_1, VkglTestCase_043438_2);

#define VkglTestCase_043439_1 "dEQP-GLES3.functional.clipping.triangle_v"
#define VkglTestCase_043439_2 "ertex.clip_two.clip_pos_x_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043439, VkglTestCase_043439_1, VkglTestCase_043439_2);

#define VkglTestCase_043440_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043440_2 "ex.clip_two.clip_pos_x_and_neg_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043440, VkglTestCase_043440_1, VkglTestCase_043440_2);

#define VkglTestCase_043441_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043441_2 "ex.clip_two.clip_pos_x_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043441, VkglTestCase_043441_1, VkglTestCase_043441_2);

#define VkglTestCase_043442_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043442_2 "ex.clip_two.clip_pos_x_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043442, VkglTestCase_043442_1, VkglTestCase_043442_2);

#define VkglTestCase_043443_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043443_2 "ex.clip_two.clip_pos_x_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043443, VkglTestCase_043443_1, VkglTestCase_043443_2);

#define VkglTestCase_043444_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043444_2 "ex.clip_two.clip_pos_x_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043444, VkglTestCase_043444_1, VkglTestCase_043444_2);

#define VkglTestCase_043445_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043445_2 "ex.clip_two.clip_pos_x_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043445, VkglTestCase_043445_1, VkglTestCase_043445_2);

#define VkglTestCase_043446_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043446_2 "ex.clip_two.clip_pos_x_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043446, VkglTestCase_043446_1, VkglTestCase_043446_2);

#define VkglTestCase_043447_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043447_2 "ex.clip_two.clip_pos_x_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043447, VkglTestCase_043447_1, VkglTestCase_043447_2);

#define VkglTestCase_043448_1 "dEQP-GLES3.functional.clipping.triangl"
#define VkglTestCase_043448_2 "e_vertex.clip_two.clip_pos_y_and_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043448, VkglTestCase_043448_1, VkglTestCase_043448_2);

#define VkglTestCase_043449_1 "dEQP-GLES3.functional.clipping.triangle_v"
#define VkglTestCase_043449_2 "ertex.clip_two.clip_pos_y_and_neg_x_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043449, VkglTestCase_043449_1, VkglTestCase_043449_2);

#define VkglTestCase_043450_1 "dEQP-GLES3.functional.clipping.triangle_v"
#define VkglTestCase_043450_2 "ertex.clip_two.clip_pos_y_and_pos_x_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043450, VkglTestCase_043450_1, VkglTestCase_043450_2);

#define VkglTestCase_043451_1 "dEQP-GLES3.functional.clipping.triangle_v"
#define VkglTestCase_043451_2 "ertex.clip_two.clip_pos_y_and_pos_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043451, VkglTestCase_043451_1, VkglTestCase_043451_2);

#define VkglTestCase_043452_1 "dEQP-GLES3.functional.clipping.triangle_v"
#define VkglTestCase_043452_2 "ertex.clip_two.clip_pos_y_and_neg_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043452, VkglTestCase_043452_1, VkglTestCase_043452_2);

#define VkglTestCase_043453_1 "dEQP-GLES3.functional.clipping.triangle_v"
#define VkglTestCase_043453_2 "ertex.clip_two.clip_pos_y_and_neg_x_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043453, VkglTestCase_043453_1, VkglTestCase_043453_2);

#define VkglTestCase_043454_1 "dEQP-GLES3.functional.clipping.triangle_v"
#define VkglTestCase_043454_2 "ertex.clip_two.clip_pos_y_and_pos_x_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043454, VkglTestCase_043454_1, VkglTestCase_043454_2);

#define VkglTestCase_043455_1 "dEQP-GLES3.functional.clipping.triangle_v"
#define VkglTestCase_043455_2 "ertex.clip_two.clip_pos_y_and_pos_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043455, VkglTestCase_043455_1, VkglTestCase_043455_2);

#define VkglTestCase_043456_1 "dEQP-GLES3.functional.clipping.triangle_v"
#define VkglTestCase_043456_2 "ertex.clip_two.clip_pos_y_and_neg_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043456, VkglTestCase_043456_1, VkglTestCase_043456_2);

#define VkglTestCase_043457_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043457_2 "ex.clip_two.clip_pos_y_and_neg_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043457, VkglTestCase_043457_1, VkglTestCase_043457_2);

#define VkglTestCase_043458_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043458_2 "ex.clip_two.clip_pos_y_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043458, VkglTestCase_043458_1, VkglTestCase_043458_2);

#define VkglTestCase_043459_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043459_2 "ex.clip_two.clip_pos_y_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043459, VkglTestCase_043459_1, VkglTestCase_043459_2);

#define VkglTestCase_043460_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043460_2 "ex.clip_two.clip_pos_y_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043460, VkglTestCase_043460_1, VkglTestCase_043460_2);

#define VkglTestCase_043461_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043461_2 "ex.clip_two.clip_pos_y_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043461, VkglTestCase_043461_1, VkglTestCase_043461_2);

#define VkglTestCase_043462_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043462_2 "ex.clip_two.clip_pos_y_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043462, VkglTestCase_043462_1, VkglTestCase_043462_2);

#define VkglTestCase_043463_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043463_2 "ex.clip_two.clip_pos_y_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043463, VkglTestCase_043463_1, VkglTestCase_043463_2);

#define VkglTestCase_043464_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043464_2 "ex.clip_two.clip_pos_y_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043464, VkglTestCase_043464_1, VkglTestCase_043464_2);

#define VkglTestCase_043465_1 "dEQP-GLES3.functional.clipping.triangle_v"
#define VkglTestCase_043465_2 "ertex.clip_two.clip_neg_y_and_neg_x_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043465, VkglTestCase_043465_1, VkglTestCase_043465_2);

#define VkglTestCase_043466_1 "dEQP-GLES3.functional.clipping.triangle_v"
#define VkglTestCase_043466_2 "ertex.clip_two.clip_neg_y_and_pos_x_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043466, VkglTestCase_043466_1, VkglTestCase_043466_2);

#define VkglTestCase_043467_1 "dEQP-GLES3.functional.clipping.triangle_v"
#define VkglTestCase_043467_2 "ertex.clip_two.clip_neg_y_and_pos_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043467, VkglTestCase_043467_1, VkglTestCase_043467_2);

#define VkglTestCase_043468_1 "dEQP-GLES3.functional.clipping.triangle_v"
#define VkglTestCase_043468_2 "ertex.clip_two.clip_neg_y_and_neg_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043468, VkglTestCase_043468_1, VkglTestCase_043468_2);

#define VkglTestCase_043469_1 "dEQP-GLES3.functional.clipping.triangle_v"
#define VkglTestCase_043469_2 "ertex.clip_two.clip_neg_y_and_neg_x_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043469, VkglTestCase_043469_1, VkglTestCase_043469_2);

#define VkglTestCase_043470_1 "dEQP-GLES3.functional.clipping.triangle_v"
#define VkglTestCase_043470_2 "ertex.clip_two.clip_neg_y_and_pos_x_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043470, VkglTestCase_043470_1, VkglTestCase_043470_2);

#define VkglTestCase_043471_1 "dEQP-GLES3.functional.clipping.triangle_v"
#define VkglTestCase_043471_2 "ertex.clip_two.clip_neg_y_and_pos_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043471, VkglTestCase_043471_1, VkglTestCase_043471_2);

#define VkglTestCase_043472_1 "dEQP-GLES3.functional.clipping.triangle_v"
#define VkglTestCase_043472_2 "ertex.clip_two.clip_neg_y_and_neg_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043472, VkglTestCase_043472_1, VkglTestCase_043472_2);

#define VkglTestCase_043473_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043473_2 "ex.clip_two.clip_neg_y_and_neg_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043473, VkglTestCase_043473_1, VkglTestCase_043473_2);

#define VkglTestCase_043474_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043474_2 "ex.clip_two.clip_neg_y_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043474, VkglTestCase_043474_1, VkglTestCase_043474_2);

#define VkglTestCase_043475_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043475_2 "ex.clip_two.clip_neg_y_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043475, VkglTestCase_043475_1, VkglTestCase_043475_2);

#define VkglTestCase_043476_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043476_2 "ex.clip_two.clip_neg_y_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043476, VkglTestCase_043476_1, VkglTestCase_043476_2);

#define VkglTestCase_043477_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043477_2 "ex.clip_two.clip_neg_y_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043477, VkglTestCase_043477_1, VkglTestCase_043477_2);

#define VkglTestCase_043478_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043478_2 "ex.clip_two.clip_neg_y_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043478, VkglTestCase_043478_1, VkglTestCase_043478_2);

#define VkglTestCase_043479_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043479_2 "ex.clip_two.clip_neg_y_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043479, VkglTestCase_043479_1, VkglTestCase_043479_2);

#define VkglTestCase_043480_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043480_2 "ex.clip_two.clip_neg_y_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043480, VkglTestCase_043480_1, VkglTestCase_043480_2);

#define VkglTestCase_043481_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043481_2 "ex.clip_two.clip_neg_x_neg_y_and_pos_x_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043481, VkglTestCase_043481_1, VkglTestCase_043481_2);

#define VkglTestCase_043482_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043482_2 "ex.clip_two.clip_neg_x_neg_y_and_pos_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043482, VkglTestCase_043482_1, VkglTestCase_043482_2);

#define VkglTestCase_043483_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043483_2 "ex.clip_two.clip_neg_x_neg_y_and_neg_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043483, VkglTestCase_043483_1, VkglTestCase_043483_2);

#define VkglTestCase_043484_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043484_2 "ex.clip_two.clip_neg_x_neg_y_and_neg_x_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043484, VkglTestCase_043484_1, VkglTestCase_043484_2);

#define VkglTestCase_043485_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043485_2 "ex.clip_two.clip_neg_x_neg_y_and_pos_x_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043485, VkglTestCase_043485_1, VkglTestCase_043485_2);

#define VkglTestCase_043486_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043486_2 "ex.clip_two.clip_neg_x_neg_y_and_pos_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043486, VkglTestCase_043486_1, VkglTestCase_043486_2);

#define VkglTestCase_043487_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043487_2 "ex.clip_two.clip_neg_x_neg_y_and_neg_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043487, VkglTestCase_043487_1, VkglTestCase_043487_2);

#define VkglTestCase_043488_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043488_2 "ex.clip_two.clip_neg_x_neg_y_and_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043488, VkglTestCase_043488_1, VkglTestCase_043488_2);

#define VkglTestCase_043489_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043489_2 "ex.clip_two.clip_neg_x_neg_y_and_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043489, VkglTestCase_043489_1, VkglTestCase_043489_2);

#define VkglTestCase_043490_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043490_2 "ex.clip_two.clip_neg_x_neg_y_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043490, VkglTestCase_043490_1, VkglTestCase_043490_2);

#define VkglTestCase_043491_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043491_2 "ex.clip_two.clip_neg_x_neg_y_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043491, VkglTestCase_043491_1, VkglTestCase_043491_2);

#define VkglTestCase_043492_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043492_2 "clip_two.clip_neg_x_neg_y_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043492, VkglTestCase_043492_1, VkglTestCase_043492_2);

#define VkglTestCase_043493_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043493_2 "clip_two.clip_neg_x_neg_y_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043493, VkglTestCase_043493_1, VkglTestCase_043493_2);

#define VkglTestCase_043494_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043494_2 "clip_two.clip_neg_x_neg_y_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043494, VkglTestCase_043494_1, VkglTestCase_043494_2);

#define VkglTestCase_043495_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043495_2 "clip_two.clip_neg_x_neg_y_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043495, VkglTestCase_043495_1, VkglTestCase_043495_2);

#define VkglTestCase_043496_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043496_2 "ex.clip_two.clip_pos_x_neg_y_and_pos_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043496, VkglTestCase_043496_1, VkglTestCase_043496_2);

#define VkglTestCase_043497_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043497_2 "ex.clip_two.clip_pos_x_neg_y_and_neg_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043497, VkglTestCase_043497_1, VkglTestCase_043497_2);

#define VkglTestCase_043498_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043498_2 "ex.clip_two.clip_pos_x_neg_y_and_neg_x_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043498, VkglTestCase_043498_1, VkglTestCase_043498_2);

#define VkglTestCase_043499_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043499_2 "ex.clip_two.clip_pos_x_neg_y_and_pos_x_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043499, VkglTestCase_043499_1, VkglTestCase_043499_2);

#define VkglTestCase_043500_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043500_2 "ex.clip_two.clip_pos_x_neg_y_and_pos_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043500, VkglTestCase_043500_1, VkglTestCase_043500_2);

#define VkglTestCase_043501_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043501_2 "ex.clip_two.clip_pos_x_neg_y_and_neg_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043501, VkglTestCase_043501_1, VkglTestCase_043501_2);

#define VkglTestCase_043502_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043502_2 "ex.clip_two.clip_pos_x_neg_y_and_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043502, VkglTestCase_043502_1, VkglTestCase_043502_2);

#define VkglTestCase_043503_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043503_2 "ex.clip_two.clip_pos_x_neg_y_and_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043503, VkglTestCase_043503_1, VkglTestCase_043503_2);

#define VkglTestCase_043504_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043504_2 "ex.clip_two.clip_pos_x_neg_y_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043504, VkglTestCase_043504_1, VkglTestCase_043504_2);

#define VkglTestCase_043505_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043505_2 "ex.clip_two.clip_pos_x_neg_y_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043505, VkglTestCase_043505_1, VkglTestCase_043505_2);

#define VkglTestCase_043506_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043506_2 "clip_two.clip_pos_x_neg_y_and_neg_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043506, VkglTestCase_043506_1, VkglTestCase_043506_2);

#define VkglTestCase_043507_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043507_2 "clip_two.clip_pos_x_neg_y_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043507, VkglTestCase_043507_1, VkglTestCase_043507_2);

#define VkglTestCase_043508_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043508_2 "clip_two.clip_pos_x_neg_y_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043508, VkglTestCase_043508_1, VkglTestCase_043508_2);

#define VkglTestCase_043509_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043509_2 "clip_two.clip_pos_x_neg_y_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043509, VkglTestCase_043509_1, VkglTestCase_043509_2);

#define VkglTestCase_043510_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043510_2 "ex.clip_two.clip_pos_x_pos_y_and_neg_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043510, VkglTestCase_043510_1, VkglTestCase_043510_2);

#define VkglTestCase_043511_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043511_2 "ex.clip_two.clip_pos_x_pos_y_and_neg_x_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043511, VkglTestCase_043511_1, VkglTestCase_043511_2);

#define VkglTestCase_043512_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043512_2 "ex.clip_two.clip_pos_x_pos_y_and_pos_x_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043512, VkglTestCase_043512_1, VkglTestCase_043512_2);

#define VkglTestCase_043513_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043513_2 "ex.clip_two.clip_pos_x_pos_y_and_pos_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043513, VkglTestCase_043513_1, VkglTestCase_043513_2);

#define VkglTestCase_043514_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043514_2 "ex.clip_two.clip_pos_x_pos_y_and_neg_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043514, VkglTestCase_043514_1, VkglTestCase_043514_2);

#define VkglTestCase_043515_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043515_2 "ex.clip_two.clip_pos_x_pos_y_and_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043515, VkglTestCase_043515_1, VkglTestCase_043515_2);

#define VkglTestCase_043516_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043516_2 "ex.clip_two.clip_pos_x_pos_y_and_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043516, VkglTestCase_043516_1, VkglTestCase_043516_2);

#define VkglTestCase_043517_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043517_2 "ex.clip_two.clip_pos_x_pos_y_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043517, VkglTestCase_043517_1, VkglTestCase_043517_2);

#define VkglTestCase_043518_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043518_2 "ex.clip_two.clip_pos_x_pos_y_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043518, VkglTestCase_043518_1, VkglTestCase_043518_2);

#define VkglTestCase_043519_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043519_2 "clip_two.clip_pos_x_pos_y_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043519, VkglTestCase_043519_1, VkglTestCase_043519_2);

#define VkglTestCase_043520_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043520_2 "clip_two.clip_pos_x_pos_y_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043520, VkglTestCase_043520_1, VkglTestCase_043520_2);

#define VkglTestCase_043521_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043521_2 "clip_two.clip_pos_x_pos_y_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043521, VkglTestCase_043521_1, VkglTestCase_043521_2);

#define VkglTestCase_043522_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043522_2 "clip_two.clip_pos_x_pos_y_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043522, VkglTestCase_043522_1, VkglTestCase_043522_2);

#define VkglTestCase_043523_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043523_2 "ex.clip_two.clip_neg_x_pos_y_and_neg_x_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043523, VkglTestCase_043523_1, VkglTestCase_043523_2);

#define VkglTestCase_043524_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043524_2 "ex.clip_two.clip_neg_x_pos_y_and_pos_x_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043524, VkglTestCase_043524_1, VkglTestCase_043524_2);

#define VkglTestCase_043525_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043525_2 "ex.clip_two.clip_neg_x_pos_y_and_pos_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043525, VkglTestCase_043525_1, VkglTestCase_043525_2);

#define VkglTestCase_043526_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043526_2 "ex.clip_two.clip_neg_x_pos_y_and_neg_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043526, VkglTestCase_043526_1, VkglTestCase_043526_2);

#define VkglTestCase_043527_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043527_2 "ex.clip_two.clip_neg_x_pos_y_and_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043527, VkglTestCase_043527_1, VkglTestCase_043527_2);

#define VkglTestCase_043528_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043528_2 "ex.clip_two.clip_neg_x_pos_y_and_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043528, VkglTestCase_043528_1, VkglTestCase_043528_2);

#define VkglTestCase_043529_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043529_2 "ex.clip_two.clip_neg_x_pos_y_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043529, VkglTestCase_043529_1, VkglTestCase_043529_2);

#define VkglTestCase_043530_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043530_2 "ex.clip_two.clip_neg_x_pos_y_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043530, VkglTestCase_043530_1, VkglTestCase_043530_2);

#define VkglTestCase_043531_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043531_2 "clip_two.clip_neg_x_pos_y_and_neg_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043531, VkglTestCase_043531_1, VkglTestCase_043531_2);

#define VkglTestCase_043532_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043532_2 "clip_two.clip_neg_x_pos_y_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043532, VkglTestCase_043532_1, VkglTestCase_043532_2);

#define VkglTestCase_043533_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043533_2 "clip_two.clip_neg_x_pos_y_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043533, VkglTestCase_043533_1, VkglTestCase_043533_2);

#define VkglTestCase_043534_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043534_2 "clip_two.clip_neg_x_pos_y_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043534, VkglTestCase_043534_1, VkglTestCase_043534_2);

#define VkglTestCase_043535_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043535_2 "ex.clip_two.clip_neg_x_neg_z_and_pos_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043535, VkglTestCase_043535_1, VkglTestCase_043535_2);

#define VkglTestCase_043536_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043536_2 "ex.clip_two.clip_neg_x_neg_z_and_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043536, VkglTestCase_043536_1, VkglTestCase_043536_2);

#define VkglTestCase_043537_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043537_2 "ex.clip_two.clip_neg_x_neg_z_and_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043537, VkglTestCase_043537_1, VkglTestCase_043537_2);

#define VkglTestCase_043538_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043538_2 "ex.clip_two.clip_neg_x_neg_z_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043538, VkglTestCase_043538_1, VkglTestCase_043538_2);

#define VkglTestCase_043539_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043539_2 "ex.clip_two.clip_neg_x_neg_z_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043539, VkglTestCase_043539_1, VkglTestCase_043539_2);

#define VkglTestCase_043540_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043540_2 "clip_two.clip_neg_x_neg_z_and_neg_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043540, VkglTestCase_043540_1, VkglTestCase_043540_2);

#define VkglTestCase_043541_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043541_2 "clip_two.clip_neg_x_neg_z_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043541, VkglTestCase_043541_1, VkglTestCase_043541_2);

#define VkglTestCase_043542_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043542_2 "clip_two.clip_neg_x_neg_z_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043542, VkglTestCase_043542_1, VkglTestCase_043542_2);

#define VkglTestCase_043543_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043543_2 "clip_two.clip_neg_x_neg_z_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043543, VkglTestCase_043543_1, VkglTestCase_043543_2);

#define VkglTestCase_043544_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043544_2 "clip_two.clip_neg_x_neg_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043544, VkglTestCase_043544_1, VkglTestCase_043544_2);

#define VkglTestCase_043545_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043545_2 "clip_two.clip_neg_x_neg_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043545, VkglTestCase_043545_1, VkglTestCase_043545_2);

#define VkglTestCase_043546_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043546_2 "clip_two.clip_neg_x_neg_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043546, VkglTestCase_043546_1, VkglTestCase_043546_2);

#define VkglTestCase_043547_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043547_2 "clip_two.clip_neg_x_neg_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043547, VkglTestCase_043547_1, VkglTestCase_043547_2);

#define VkglTestCase_043548_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043548_2 "ex.clip_two.clip_pos_x_neg_z_and_neg_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043548, VkglTestCase_043548_1, VkglTestCase_043548_2);

#define VkglTestCase_043549_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043549_2 "ex.clip_two.clip_pos_x_neg_z_and_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043549, VkglTestCase_043549_1, VkglTestCase_043549_2);

#define VkglTestCase_043550_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043550_2 "ex.clip_two.clip_pos_x_neg_z_and_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043550, VkglTestCase_043550_1, VkglTestCase_043550_2);

#define VkglTestCase_043551_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043551_2 "ex.clip_two.clip_pos_x_neg_z_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043551, VkglTestCase_043551_1, VkglTestCase_043551_2);

#define VkglTestCase_043552_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043552_2 "ex.clip_two.clip_pos_x_neg_z_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043552, VkglTestCase_043552_1, VkglTestCase_043552_2);

#define VkglTestCase_043553_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043553_2 "clip_two.clip_pos_x_neg_z_and_neg_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043553, VkglTestCase_043553_1, VkglTestCase_043553_2);

#define VkglTestCase_043554_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043554_2 "clip_two.clip_pos_x_neg_z_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043554, VkglTestCase_043554_1, VkglTestCase_043554_2);

#define VkglTestCase_043555_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043555_2 "clip_two.clip_pos_x_neg_z_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043555, VkglTestCase_043555_1, VkglTestCase_043555_2);

#define VkglTestCase_043556_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043556_2 "clip_two.clip_pos_x_neg_z_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043556, VkglTestCase_043556_1, VkglTestCase_043556_2);

#define VkglTestCase_043557_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043557_2 "clip_two.clip_pos_x_neg_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043557, VkglTestCase_043557_1, VkglTestCase_043557_2);

#define VkglTestCase_043558_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043558_2 "clip_two.clip_pos_x_neg_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043558, VkglTestCase_043558_1, VkglTestCase_043558_2);

#define VkglTestCase_043559_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043559_2 "clip_two.clip_pos_x_neg_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043559, VkglTestCase_043559_1, VkglTestCase_043559_2);

#define VkglTestCase_043560_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043560_2 "clip_two.clip_pos_x_neg_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043560, VkglTestCase_043560_1, VkglTestCase_043560_2);

#define VkglTestCase_043561_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043561_2 "ex.clip_two.clip_pos_x_pos_z_and_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043561, VkglTestCase_043561_1, VkglTestCase_043561_2);

#define VkglTestCase_043562_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043562_2 "ex.clip_two.clip_pos_x_pos_z_and_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043562, VkglTestCase_043562_1, VkglTestCase_043562_2);

#define VkglTestCase_043563_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043563_2 "ex.clip_two.clip_pos_x_pos_z_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043563, VkglTestCase_043563_1, VkglTestCase_043563_2);

#define VkglTestCase_043564_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043564_2 "ex.clip_two.clip_pos_x_pos_z_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043564, VkglTestCase_043564_1, VkglTestCase_043564_2);

#define VkglTestCase_043565_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043565_2 "clip_two.clip_pos_x_pos_z_and_neg_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043565, VkglTestCase_043565_1, VkglTestCase_043565_2);

#define VkglTestCase_043566_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043566_2 "clip_two.clip_pos_x_pos_z_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043566, VkglTestCase_043566_1, VkglTestCase_043566_2);

#define VkglTestCase_043567_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043567_2 "clip_two.clip_pos_x_pos_z_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043567, VkglTestCase_043567_1, VkglTestCase_043567_2);

#define VkglTestCase_043568_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043568_2 "clip_two.clip_pos_x_pos_z_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043568, VkglTestCase_043568_1, VkglTestCase_043568_2);

#define VkglTestCase_043569_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043569_2 "clip_two.clip_pos_x_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043569, VkglTestCase_043569_1, VkglTestCase_043569_2);

#define VkglTestCase_043570_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043570_2 "clip_two.clip_pos_x_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043570, VkglTestCase_043570_1, VkglTestCase_043570_2);

#define VkglTestCase_043571_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043571_2 "clip_two.clip_pos_x_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043571, VkglTestCase_043571_1, VkglTestCase_043571_2);

#define VkglTestCase_043572_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043572_2 "clip_two.clip_pos_x_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043572, VkglTestCase_043572_1, VkglTestCase_043572_2);

#define VkglTestCase_043573_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043573_2 "ex.clip_two.clip_neg_x_pos_z_and_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043573, VkglTestCase_043573_1, VkglTestCase_043573_2);

#define VkglTestCase_043574_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043574_2 "ex.clip_two.clip_neg_x_pos_z_and_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043574, VkglTestCase_043574_1, VkglTestCase_043574_2);

#define VkglTestCase_043575_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043575_2 "ex.clip_two.clip_neg_x_pos_z_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043575, VkglTestCase_043575_1, VkglTestCase_043575_2);

#define VkglTestCase_043576_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043576_2 "ex.clip_two.clip_neg_x_pos_z_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043576, VkglTestCase_043576_1, VkglTestCase_043576_2);

#define VkglTestCase_043577_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043577_2 "clip_two.clip_neg_x_pos_z_and_neg_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043577, VkglTestCase_043577_1, VkglTestCase_043577_2);

#define VkglTestCase_043578_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043578_2 "clip_two.clip_neg_x_pos_z_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043578, VkglTestCase_043578_1, VkglTestCase_043578_2);

#define VkglTestCase_043579_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043579_2 "clip_two.clip_neg_x_pos_z_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043579, VkglTestCase_043579_1, VkglTestCase_043579_2);

#define VkglTestCase_043580_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043580_2 "clip_two.clip_neg_x_pos_z_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043580, VkglTestCase_043580_1, VkglTestCase_043580_2);

#define VkglTestCase_043581_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043581_2 "clip_two.clip_neg_x_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043581, VkglTestCase_043581_1, VkglTestCase_043581_2);

#define VkglTestCase_043582_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043582_2 "clip_two.clip_neg_x_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043582, VkglTestCase_043582_1, VkglTestCase_043582_2);

#define VkglTestCase_043583_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043583_2 "clip_two.clip_neg_x_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043583, VkglTestCase_043583_1, VkglTestCase_043583_2);

#define VkglTestCase_043584_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043584_2 "clip_two.clip_neg_x_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043584, VkglTestCase_043584_1, VkglTestCase_043584_2);

#define VkglTestCase_043585_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043585_2 "ex.clip_two.clip_neg_y_neg_z_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043585, VkglTestCase_043585_1, VkglTestCase_043585_2);

#define VkglTestCase_043586_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043586_2 "clip_two.clip_neg_y_neg_z_and_neg_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043586, VkglTestCase_043586_1, VkglTestCase_043586_2);

#define VkglTestCase_043587_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043587_2 "clip_two.clip_neg_y_neg_z_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043587, VkglTestCase_043587_1, VkglTestCase_043587_2);

#define VkglTestCase_043588_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043588_2 "clip_two.clip_neg_y_neg_z_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043588, VkglTestCase_043588_1, VkglTestCase_043588_2);

#define VkglTestCase_043589_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043589_2 "clip_two.clip_neg_y_neg_z_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043589, VkglTestCase_043589_1, VkglTestCase_043589_2);

#define VkglTestCase_043590_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043590_2 "clip_two.clip_neg_y_neg_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043590, VkglTestCase_043590_1, VkglTestCase_043590_2);

#define VkglTestCase_043591_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043591_2 "clip_two.clip_neg_y_neg_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043591, VkglTestCase_043591_1, VkglTestCase_043591_2);

#define VkglTestCase_043592_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043592_2 "clip_two.clip_neg_y_neg_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043592, VkglTestCase_043592_1, VkglTestCase_043592_2);

#define VkglTestCase_043593_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043593_2 "clip_two.clip_neg_y_neg_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043593, VkglTestCase_043593_1, VkglTestCase_043593_2);

#define VkglTestCase_043594_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043594_2 "ex.clip_two.clip_pos_y_neg_z_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043594, VkglTestCase_043594_1, VkglTestCase_043594_2);

#define VkglTestCase_043595_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043595_2 "clip_two.clip_pos_y_neg_z_and_neg_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043595, VkglTestCase_043595_1, VkglTestCase_043595_2);

#define VkglTestCase_043596_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043596_2 "clip_two.clip_pos_y_neg_z_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043596, VkglTestCase_043596_1, VkglTestCase_043596_2);

#define VkglTestCase_043597_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043597_2 "clip_two.clip_pos_y_neg_z_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043597, VkglTestCase_043597_1, VkglTestCase_043597_2);

#define VkglTestCase_043598_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043598_2 "clip_two.clip_pos_y_neg_z_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043598, VkglTestCase_043598_1, VkglTestCase_043598_2);

#define VkglTestCase_043599_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043599_2 "clip_two.clip_pos_y_neg_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043599, VkglTestCase_043599_1, VkglTestCase_043599_2);

#define VkglTestCase_043600_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043600_2 "clip_two.clip_pos_y_neg_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043600, VkglTestCase_043600_1, VkglTestCase_043600_2);

#define VkglTestCase_043601_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043601_2 "clip_two.clip_pos_y_neg_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043601, VkglTestCase_043601_1, VkglTestCase_043601_2);

#define VkglTestCase_043602_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043602_2 "clip_two.clip_pos_y_neg_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043602, VkglTestCase_043602_1, VkglTestCase_043602_2);

#define VkglTestCase_043603_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043603_2 "clip_two.clip_pos_y_pos_z_and_neg_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043603, VkglTestCase_043603_1, VkglTestCase_043603_2);

#define VkglTestCase_043604_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043604_2 "clip_two.clip_pos_y_pos_z_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043604, VkglTestCase_043604_1, VkglTestCase_043604_2);

#define VkglTestCase_043605_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043605_2 "clip_two.clip_pos_y_pos_z_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043605, VkglTestCase_043605_1, VkglTestCase_043605_2);

#define VkglTestCase_043606_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043606_2 "clip_two.clip_pos_y_pos_z_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043606, VkglTestCase_043606_1, VkglTestCase_043606_2);

#define VkglTestCase_043607_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043607_2 "clip_two.clip_pos_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043607, VkglTestCase_043607_1, VkglTestCase_043607_2);

#define VkglTestCase_043608_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043608_2 "clip_two.clip_pos_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043608, VkglTestCase_043608_1, VkglTestCase_043608_2);

#define VkglTestCase_043609_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043609_2 "clip_two.clip_pos_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043609, VkglTestCase_043609_1, VkglTestCase_043609_2);

#define VkglTestCase_043610_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043610_2 "clip_two.clip_pos_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043610, VkglTestCase_043610_1, VkglTestCase_043610_2);

#define VkglTestCase_043611_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043611_2 "clip_two.clip_neg_y_pos_z_and_neg_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043611, VkglTestCase_043611_1, VkglTestCase_043611_2);

#define VkglTestCase_043612_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043612_2 "clip_two.clip_neg_y_pos_z_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043612, VkglTestCase_043612_1, VkglTestCase_043612_2);

#define VkglTestCase_043613_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043613_2 "clip_two.clip_neg_y_pos_z_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043613, VkglTestCase_043613_1, VkglTestCase_043613_2);

#define VkglTestCase_043614_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043614_2 "clip_two.clip_neg_y_pos_z_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043614, VkglTestCase_043614_1, VkglTestCase_043614_2);

#define VkglTestCase_043615_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043615_2 "clip_two.clip_neg_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043615, VkglTestCase_043615_1, VkglTestCase_043615_2);

#define VkglTestCase_043616_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043616_2 "clip_two.clip_neg_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043616, VkglTestCase_043616_1, VkglTestCase_043616_2);

#define VkglTestCase_043617_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043617_2 "clip_two.clip_neg_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043617, VkglTestCase_043617_1, VkglTestCase_043617_2);

#define VkglTestCase_043618_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043618_2 "clip_two.clip_neg_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043618, VkglTestCase_043618_1, VkglTestCase_043618_2);

#define VkglTestCase_043619_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043619_2 "p_two.clip_neg_x_neg_y_pos_z_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043619, VkglTestCase_043619_1, VkglTestCase_043619_2);

#define VkglTestCase_043620_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043620_2 "p_two.clip_neg_x_neg_y_pos_z_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043620, VkglTestCase_043620_1, VkglTestCase_043620_2);

#define VkglTestCase_043621_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043621_2 "p_two.clip_neg_x_neg_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043621, VkglTestCase_043621_1, VkglTestCase_043621_2);

#define VkglTestCase_043622_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043622_2 "p_two.clip_neg_x_neg_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043622, VkglTestCase_043622_1, VkglTestCase_043622_2);

#define VkglTestCase_043623_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043623_2 "p_two.clip_neg_x_neg_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043623, VkglTestCase_043623_1, VkglTestCase_043623_2);

#define VkglTestCase_043624_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043624_2 "p_two.clip_pos_x_neg_y_pos_z_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043624, VkglTestCase_043624_1, VkglTestCase_043624_2);

#define VkglTestCase_043625_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043625_2 "p_two.clip_pos_x_neg_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043625, VkglTestCase_043625_1, VkglTestCase_043625_2);

#define VkglTestCase_043626_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043626_2 "p_two.clip_pos_x_neg_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043626, VkglTestCase_043626_1, VkglTestCase_043626_2);

#define VkglTestCase_043627_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043627_2 "p_two.clip_pos_x_neg_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043627, VkglTestCase_043627_1, VkglTestCase_043627_2);

#define VkglTestCase_043628_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043628_2 "p_two.clip_pos_x_pos_y_pos_z_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043628, VkglTestCase_043628_1, VkglTestCase_043628_2);

#define VkglTestCase_043629_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043629_2 "p_two.clip_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043629, VkglTestCase_043629_1, VkglTestCase_043629_2);

#define VkglTestCase_043630_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043630_2 "p_two.clip_pos_x_pos_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043630, VkglTestCase_043630_1, VkglTestCase_043630_2);

#define VkglTestCase_043631_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043631_2 "p_two.clip_pos_x_pos_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043631, VkglTestCase_043631_1, VkglTestCase_043631_2);

#define VkglTestCase_043632_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043632_2 "p_two.clip_neg_x_pos_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043632, VkglTestCase_043632_1, VkglTestCase_043632_2);

#define VkglTestCase_043633_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043633_2 "p_two.clip_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043633, VkglTestCase_043633_1, VkglTestCase_043633_2);

#define VkglTestCase_043634_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043634_2 "p_two.clip_neg_x_pos_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043634, VkglTestCase_043634_1, VkglTestCase_043634_2);

#define VkglTestCase_043635_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043635_2 "p_two.clip_neg_x_neg_y_neg_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043635, VkglTestCase_043635_1, VkglTestCase_043635_2);

#define VkglTestCase_043636_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043636_2 "p_two.clip_neg_x_neg_y_neg_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043636, VkglTestCase_043636_1, VkglTestCase_043636_2);

#define VkglTestCase_043637_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043637_2 "p_two.clip_pos_x_neg_y_neg_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043637, VkglTestCase_043637_1, VkglTestCase_043637_2);

#define VkglTestCase_043638_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043638_2 "p_two.clip_pos_x_pos_y_neg_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043638, VkglTestCase_043638_1, VkglTestCase_043638_2);
