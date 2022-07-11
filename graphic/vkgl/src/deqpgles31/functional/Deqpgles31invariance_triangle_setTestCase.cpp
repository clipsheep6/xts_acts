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

#define VkglTestCase_008159_1 "dEQP-GLES31.functional.tessellation.invar"
#define VkglTestCase_008159_2 "iance.triangle_set.triangles_equal_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008159, VkglTestCase_008159_1, VkglTestCase_008159_2);

#define VkglTestCase_008160_1 "dEQP-GLES31.functional.tessellation.invariance"
#define VkglTestCase_008160_2 ".triangle_set.triangles_fractional_odd_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008160, VkglTestCase_008160_1, VkglTestCase_008160_2);

#define VkglTestCase_008161_1 "dEQP-GLES31.functional.tessellation.invariance"
#define VkglTestCase_008161_2 ".triangle_set.triangles_fractional_even_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008161, VkglTestCase_008161_1, VkglTestCase_008161_2);

#define VkglTestCase_008162_1 "dEQP-GLES31.functional.tessellation.inv"
#define VkglTestCase_008162_2 "ariance.triangle_set.quads_equal_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008162, VkglTestCase_008162_1, VkglTestCase_008162_2);

#define VkglTestCase_008163_1 "dEQP-GLES31.functional.tessellation.invarian"
#define VkglTestCase_008163_2 "ce.triangle_set.quads_fractional_odd_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008163, VkglTestCase_008163_1, VkglTestCase_008163_2);

#define VkglTestCase_008164_1 "dEQP-GLES31.functional.tessellation.invarian"
#define VkglTestCase_008164_2 "ce.triangle_set.quads_fractional_even_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008164, VkglTestCase_008164_1, VkglTestCase_008164_2);
