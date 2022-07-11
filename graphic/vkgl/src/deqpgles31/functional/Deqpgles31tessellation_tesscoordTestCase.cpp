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
#include "../ActsDeqpgles310008TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_007963_1 "dEQP-GLES31.functional.tessellatio"
#define VkglTestCase_007963_2 "n.tesscoord.triangles_equal_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007963, VkglTestCase_007963_1, VkglTestCase_007963_2);

#define VkglTestCase_007964_1 "dEQP-GLES31.functional.tessellation.tes"
#define VkglTestCase_007964_2 "scoord.triangles_fractional_odd_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007964, VkglTestCase_007964_1, VkglTestCase_007964_2);

#define VkglTestCase_007965_1 "dEQP-GLES31.functional.tessellation.tes"
#define VkglTestCase_007965_2 "scoord.triangles_fractional_even_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007965, VkglTestCase_007965_1, VkglTestCase_007965_2);

#define VkglTestCase_007966_1 "dEQP-GLES31.functional.tessellat"
#define VkglTestCase_007966_2 "ion.tesscoord.quads_equal_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007966, VkglTestCase_007966_1, VkglTestCase_007966_2);

#define VkglTestCase_007967_1 "dEQP-GLES31.functional.tessellation.t"
#define VkglTestCase_007967_2 "esscoord.quads_fractional_odd_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007967, VkglTestCase_007967_1, VkglTestCase_007967_2);

#define VkglTestCase_007968_1 "dEQP-GLES31.functional.tessellation.t"
#define VkglTestCase_007968_2 "esscoord.quads_fractional_even_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007968, VkglTestCase_007968_1, VkglTestCase_007968_2);

#define VkglTestCase_007969_1 "dEQP-GLES31.functional.tessellatio"
#define VkglTestCase_007969_2 "n.tesscoord.isolines_equal_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007969, VkglTestCase_007969_1, VkglTestCase_007969_2);

#define VkglTestCase_007970_1 "dEQP-GLES31.functional.tessellation.te"
#define VkglTestCase_007970_2 "sscoord.isolines_fractional_odd_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007970, VkglTestCase_007970_1, VkglTestCase_007970_2);

#define VkglTestCase_007971_1 "dEQP-GLES31.functional.tessellation.tes"
#define VkglTestCase_007971_2 "scoord.isolines_fractional_even_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007971, VkglTestCase_007971_1, VkglTestCase_007971_2);
