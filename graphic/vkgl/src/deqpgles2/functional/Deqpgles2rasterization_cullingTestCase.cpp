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

#define VkglTestCase_013890_1 "dEQP-GLES2.functional.rasteri"
#define VkglTestCase_013890_2 "zation.culling.front_triangles"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013890, VkglTestCase_013890_1, VkglTestCase_013890_2);

#define VkglTestCase_013891_1 "dEQP-GLES2.functional.rasterizati"
#define VkglTestCase_013891_2 "on.culling.front_triangles_reverse"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013891, VkglTestCase_013891_1, VkglTestCase_013891_2);

#define VkglTestCase_013892_1 "dEQP-GLES2.functional.rasterizat"
#define VkglTestCase_013892_2 "ion.culling.front_triangle_strip"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013892, VkglTestCase_013892_1, VkglTestCase_013892_2);

#define VkglTestCase_013893_1 "dEQP-GLES2.functional.rasterization."
#define VkglTestCase_013893_2 "culling.front_triangle_strip_reverse"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013893, VkglTestCase_013893_1, VkglTestCase_013893_2);

#define VkglTestCase_013894_1 "dEQP-GLES2.functional.rasteriza"
#define VkglTestCase_013894_2 "tion.culling.front_triangle_fan"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013894, VkglTestCase_013894_1, VkglTestCase_013894_2);

#define VkglTestCase_013895_1 "dEQP-GLES2.functional.rasterization"
#define VkglTestCase_013895_2 ".culling.front_triangle_fan_reverse"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013895, VkglTestCase_013895_1, VkglTestCase_013895_2);

#define VkglTestCase_013896_1 "dEQP-GLES2.functional.rasteri"
#define VkglTestCase_013896_2 "zation.culling.back_triangles"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013896, VkglTestCase_013896_1, VkglTestCase_013896_2);

#define VkglTestCase_013897_1 "dEQP-GLES2.functional.rasterizati"
#define VkglTestCase_013897_2 "on.culling.back_triangles_reverse"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013897, VkglTestCase_013897_1, VkglTestCase_013897_2);

#define VkglTestCase_013898_1 "dEQP-GLES2.functional.rasteriza"
#define VkglTestCase_013898_2 "tion.culling.back_triangle_strip"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013898, VkglTestCase_013898_1, VkglTestCase_013898_2);

#define VkglTestCase_013899_1 "dEQP-GLES2.functional.rasterization"
#define VkglTestCase_013899_2 ".culling.back_triangle_strip_reverse"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013899, VkglTestCase_013899_1, VkglTestCase_013899_2);

#define VkglTestCase_013900_1 "dEQP-GLES2.functional.rasteriz"
#define VkglTestCase_013900_2 "ation.culling.back_triangle_fan"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013900, VkglTestCase_013900_1, VkglTestCase_013900_2);

#define VkglTestCase_013901_1 "dEQP-GLES2.functional.rasterizatio"
#define VkglTestCase_013901_2 "n.culling.back_triangle_fan_reverse"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013901, VkglTestCase_013901_1, VkglTestCase_013901_2);

#define VkglTestCase_013902_1 "dEQP-GLES2.functional.rasteri"
#define VkglTestCase_013902_2 "zation.culling.both_triangles"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013902, VkglTestCase_013902_1, VkglTestCase_013902_2);

#define VkglTestCase_013903_1 "dEQP-GLES2.functional.rasterizati"
#define VkglTestCase_013903_2 "on.culling.both_triangles_reverse"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013903, VkglTestCase_013903_1, VkglTestCase_013903_2);

#define VkglTestCase_013904_1 "dEQP-GLES2.functional.rasteriza"
#define VkglTestCase_013904_2 "tion.culling.both_triangle_strip"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013904, VkglTestCase_013904_1, VkglTestCase_013904_2);

#define VkglTestCase_013905_1 "dEQP-GLES2.functional.rasterization"
#define VkglTestCase_013905_2 ".culling.both_triangle_strip_reverse"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013905, VkglTestCase_013905_1, VkglTestCase_013905_2);

#define VkglTestCase_013906_1 "dEQP-GLES2.functional.rasteriz"
#define VkglTestCase_013906_2 "ation.culling.both_triangle_fan"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013906, VkglTestCase_013906_1, VkglTestCase_013906_2);

#define VkglTestCase_013907_1 "dEQP-GLES2.functional.rasterizatio"
#define VkglTestCase_013907_2 "n.culling.both_triangle_fan_reverse"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013907, VkglTestCase_013907_1, VkglTestCase_013907_2);
