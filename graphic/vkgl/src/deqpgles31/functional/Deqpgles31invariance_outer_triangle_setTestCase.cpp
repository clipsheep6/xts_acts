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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310009TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_008171_1 "dEQP-GLES31.functional.tessellation.invarian"
#define VkglTestCase_008171_2 "ce.outer_triangle_set.triangles_equal_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008171, VkglTestCase_008171_1, VkglTestCase_008171_2);

#define VkglTestCase_008172_1 "dEQP-GLES31.functional.tessellation.invariance.ou"
#define VkglTestCase_008172_2 "ter_triangle_set.triangles_fractional_odd_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008172, VkglTestCase_008172_1, VkglTestCase_008172_2);

#define VkglTestCase_008173_1 "dEQP-GLES31.functional.tessellation.invariance.ou"
#define VkglTestCase_008173_2 "ter_triangle_set.triangles_fractional_even_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008173, VkglTestCase_008173_1, VkglTestCase_008173_2);

#define VkglTestCase_008174_1 "dEQP-GLES31.functional.tessellation.invari"
#define VkglTestCase_008174_2 "ance.outer_triangle_set.quads_equal_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008174, VkglTestCase_008174_1, VkglTestCase_008174_2);

#define VkglTestCase_008175_1 "dEQP-GLES31.functional.tessellation.invariance."
#define VkglTestCase_008175_2 "outer_triangle_set.quads_fractional_odd_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008175, VkglTestCase_008175_1, VkglTestCase_008175_2);

#define VkglTestCase_008176_1 "dEQP-GLES31.functional.tessellation.invariance."
#define VkglTestCase_008176_2 "outer_triangle_set.quads_fractional_even_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008176, VkglTestCase_008176_1, VkglTestCase_008176_2);
