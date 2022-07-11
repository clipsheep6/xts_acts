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

#define VkglTestCase_008007_1 "dEQP-GLES31.functional.tessellation"
#define VkglTestCase_008007_2 ".common_edge.triangles_equal_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008007, VkglTestCase_008007_1, VkglTestCase_008007_2);

#define VkglTestCase_008008_1 "dEQP-GLES31.functional.tessellation.comm"
#define VkglTestCase_008008_2 "on_edge.triangles_fractional_odd_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008008, VkglTestCase_008008_1, VkglTestCase_008008_2);

#define VkglTestCase_008009_1 "dEQP-GLES31.functional.tessellation.comm"
#define VkglTestCase_008009_2 "on_edge.triangles_fractional_even_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008009, VkglTestCase_008009_1, VkglTestCase_008009_2);

#define VkglTestCase_008010_1 "dEQP-GLES31.functional.tessellati"
#define VkglTestCase_008010_2 "on.common_edge.quads_equal_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008010, VkglTestCase_008010_1, VkglTestCase_008010_2);

#define VkglTestCase_008011_1 "dEQP-GLES31.functional.tessellation.co"
#define VkglTestCase_008011_2 "mmon_edge.quads_fractional_odd_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008011, VkglTestCase_008011_1, VkglTestCase_008011_2);

#define VkglTestCase_008012_1 "dEQP-GLES31.functional.tessellation.co"
#define VkglTestCase_008012_2 "mmon_edge.quads_fractional_even_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008012, VkglTestCase_008012_1, VkglTestCase_008012_2);

#define VkglTestCase_008013_1 "dEQP-GLES31.functional.tessellation.com"
#define VkglTestCase_008013_2 "mon_edge.triangles_equal_spacing_precise"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008013, VkglTestCase_008013_1, VkglTestCase_008013_2);

#define VkglTestCase_008014_1 "dEQP-GLES31.functional.tessellation.common_e"
#define VkglTestCase_008014_2 "dge.triangles_fractional_odd_spacing_precise"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008014, VkglTestCase_008014_1, VkglTestCase_008014_2);

#define VkglTestCase_008015_1 "dEQP-GLES31.functional.tessellation.common_e"
#define VkglTestCase_008015_2 "dge.triangles_fractional_even_spacing_precise"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008015, VkglTestCase_008015_1, VkglTestCase_008015_2);

#define VkglTestCase_008016_1 "dEQP-GLES31.functional.tessellation.c"
#define VkglTestCase_008016_2 "ommon_edge.quads_equal_spacing_precise"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008016, VkglTestCase_008016_1, VkglTestCase_008016_2);

#define VkglTestCase_008017_1 "dEQP-GLES31.functional.tessellation.common"
#define VkglTestCase_008017_2 "_edge.quads_fractional_odd_spacing_precise"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008017, VkglTestCase_008017_1, VkglTestCase_008017_2);

#define VkglTestCase_008018_1 "dEQP-GLES31.functional.tessellation.common"
#define VkglTestCase_008018_2 "_edge.quads_fractional_even_spacing_precise"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008018, VkglTestCase_008018_1, VkglTestCase_008018_2);
