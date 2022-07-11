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
#include "../ActsDeqpgles30040TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_039771_1 "dEQP-GLES3.functional.rasteri"
#define VkglTestCase_039771_2 "zation.culling.front_triangles"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039771, VkglTestCase_039771_1, VkglTestCase_039771_2);

#define VkglTestCase_039772_1 "dEQP-GLES3.functional.rasterizati"
#define VkglTestCase_039772_2 "on.culling.front_triangles_reverse"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039772, VkglTestCase_039772_1, VkglTestCase_039772_2);

#define VkglTestCase_039773_1 "dEQP-GLES3.functional.rasterizat"
#define VkglTestCase_039773_2 "ion.culling.front_triangle_strip"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039773, VkglTestCase_039773_1, VkglTestCase_039773_2);

#define VkglTestCase_039774_1 "dEQP-GLES3.functional.rasterization."
#define VkglTestCase_039774_2 "culling.front_triangle_strip_reverse"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039774, VkglTestCase_039774_1, VkglTestCase_039774_2);

#define VkglTestCase_039775_1 "dEQP-GLES3.functional.rasteriza"
#define VkglTestCase_039775_2 "tion.culling.front_triangle_fan"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039775, VkglTestCase_039775_1, VkglTestCase_039775_2);

#define VkglTestCase_039776_1 "dEQP-GLES3.functional.rasterization"
#define VkglTestCase_039776_2 ".culling.front_triangle_fan_reverse"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039776, VkglTestCase_039776_1, VkglTestCase_039776_2);

#define VkglTestCase_039777_1 "dEQP-GLES3.functional.rasteri"
#define VkglTestCase_039777_2 "zation.culling.back_triangles"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039777, VkglTestCase_039777_1, VkglTestCase_039777_2);

#define VkglTestCase_039778_1 "dEQP-GLES3.functional.rasterizati"
#define VkglTestCase_039778_2 "on.culling.back_triangles_reverse"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039778, VkglTestCase_039778_1, VkglTestCase_039778_2);

#define VkglTestCase_039779_1 "dEQP-GLES3.functional.rasteriza"
#define VkglTestCase_039779_2 "tion.culling.back_triangle_strip"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039779, VkglTestCase_039779_1, VkglTestCase_039779_2);

#define VkglTestCase_039780_1 "dEQP-GLES3.functional.rasterization"
#define VkglTestCase_039780_2 ".culling.back_triangle_strip_reverse"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039780, VkglTestCase_039780_1, VkglTestCase_039780_2);

#define VkglTestCase_039781_1 "dEQP-GLES3.functional.rasteriz"
#define VkglTestCase_039781_2 "ation.culling.back_triangle_fan"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039781, VkglTestCase_039781_1, VkglTestCase_039781_2);

#define VkglTestCase_039782_1 "dEQP-GLES3.functional.rasterizatio"
#define VkglTestCase_039782_2 "n.culling.back_triangle_fan_reverse"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039782, VkglTestCase_039782_1, VkglTestCase_039782_2);

#define VkglTestCase_039783_1 "dEQP-GLES3.functional.rasteri"
#define VkglTestCase_039783_2 "zation.culling.both_triangles"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039783, VkglTestCase_039783_1, VkglTestCase_039783_2);

#define VkglTestCase_039784_1 "dEQP-GLES3.functional.rasterizati"
#define VkglTestCase_039784_2 "on.culling.both_triangles_reverse"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039784, VkglTestCase_039784_1, VkglTestCase_039784_2);

#define VkglTestCase_039785_1 "dEQP-GLES3.functional.rasteriza"
#define VkglTestCase_039785_2 "tion.culling.both_triangle_strip"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039785, VkglTestCase_039785_1, VkglTestCase_039785_2);

#define VkglTestCase_039786_1 "dEQP-GLES3.functional.rasterization"
#define VkglTestCase_039786_2 ".culling.both_triangle_strip_reverse"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039786, VkglTestCase_039786_1, VkglTestCase_039786_2);

#define VkglTestCase_039787_1 "dEQP-GLES3.functional.rasteriz"
#define VkglTestCase_039787_2 "ation.culling.both_triangle_fan"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039787, VkglTestCase_039787_1, VkglTestCase_039787_2);

#define VkglTestCase_039788_1 "dEQP-GLES3.functional.rasterizatio"
#define VkglTestCase_039788_2 "n.culling.both_triangle_fan_reverse"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039788, VkglTestCase_039788_1, VkglTestCase_039788_2);
