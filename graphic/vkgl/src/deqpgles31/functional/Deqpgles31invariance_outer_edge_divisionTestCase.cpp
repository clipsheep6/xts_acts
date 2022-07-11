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

#define VkglTestCase_008093_1 "dEQP-GLES31.functional.tessellation.invarianc"
#define VkglTestCase_008093_2 "e.outer_edge_division.triangles_equal_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008093, VkglTestCase_008093_1, VkglTestCase_008093_2);

#define VkglTestCase_008094_1 "dEQP-GLES31.functional.tessellation.invariance.ou"
#define VkglTestCase_008094_2 "ter_edge_division.triangles_fractional_odd_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008094, VkglTestCase_008094_1, VkglTestCase_008094_2);

#define VkglTestCase_008095_1 "dEQP-GLES31.functional.tessellation.invariance.out"
#define VkglTestCase_008095_2 "er_edge_division.triangles_fractional_even_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008095, VkglTestCase_008095_1, VkglTestCase_008095_2);

#define VkglTestCase_008096_1 "dEQP-GLES31.functional.tessellation.invaria"
#define VkglTestCase_008096_2 "nce.outer_edge_division.quads_equal_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008096, VkglTestCase_008096_1, VkglTestCase_008096_2);

#define VkglTestCase_008097_1 "dEQP-GLES31.functional.tessellation.invariance."
#define VkglTestCase_008097_2 "outer_edge_division.quads_fractional_odd_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008097, VkglTestCase_008097_1, VkglTestCase_008097_2);

#define VkglTestCase_008098_1 "dEQP-GLES31.functional.tessellation.invariance.o"
#define VkglTestCase_008098_2 "uter_edge_division.quads_fractional_even_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008098, VkglTestCase_008098_1, VkglTestCase_008098_2);
