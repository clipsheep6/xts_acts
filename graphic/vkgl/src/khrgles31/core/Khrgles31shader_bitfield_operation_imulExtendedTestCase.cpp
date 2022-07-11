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
#include "../Khrgles31BaseFunc.h"
#include "../ActsKhrgles310001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000644_1 "KHR-GLES31.core.shader_bitfiel"
#define VkglTestCase_000644_2 "d_operation.imulExtended.int_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000644, VkglTestCase_000644_1, VkglTestCase_000644_2);

#define VkglTestCase_000645_1 "KHR-GLES31.core.shader_bitfiel"
#define VkglTestCase_000645_2 "d_operation.imulExtended.int_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000645, VkglTestCase_000645_1, VkglTestCase_000645_2);

#define VkglTestCase_000646_1 "KHR-GLES31.core.shader_bitfiel"
#define VkglTestCase_000646_2 "d_operation.imulExtended.int_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000646, VkglTestCase_000646_1, VkglTestCase_000646_2);

#define VkglTestCase_000647_1 "KHR-GLES31.core.shader_bitfiel"
#define VkglTestCase_000647_2 "d_operation.imulExtended.int_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000647, VkglTestCase_000647_1, VkglTestCase_000647_2);

#define VkglTestCase_000648_1 "KHR-GLES31.core.shader_bitfield"
#define VkglTestCase_000648_2 "_operation.imulExtended.ivec2_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000648, VkglTestCase_000648_1, VkglTestCase_000648_2);

#define VkglTestCase_000649_1 "KHR-GLES31.core.shader_bitfield"
#define VkglTestCase_000649_2 "_operation.imulExtended.ivec2_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000649, VkglTestCase_000649_1, VkglTestCase_000649_2);

#define VkglTestCase_000650_1 "KHR-GLES31.core.shader_bitfield"
#define VkglTestCase_000650_2 "_operation.imulExtended.ivec2_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000650, VkglTestCase_000650_1, VkglTestCase_000650_2);

#define VkglTestCase_000651_1 "KHR-GLES31.core.shader_bitfield"
#define VkglTestCase_000651_2 "_operation.imulExtended.ivec2_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000651, VkglTestCase_000651_1, VkglTestCase_000651_2);

#define VkglTestCase_000652_1 "KHR-GLES31.core.shader_bitfield"
#define VkglTestCase_000652_2 "_operation.imulExtended.ivec3_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000652, VkglTestCase_000652_1, VkglTestCase_000652_2);

#define VkglTestCase_000653_1 "KHR-GLES31.core.shader_bitfield"
#define VkglTestCase_000653_2 "_operation.imulExtended.ivec3_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000653, VkglTestCase_000653_1, VkglTestCase_000653_2);

#define VkglTestCase_000654_1 "KHR-GLES31.core.shader_bitfield"
#define VkglTestCase_000654_2 "_operation.imulExtended.ivec3_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000654, VkglTestCase_000654_1, VkglTestCase_000654_2);

#define VkglTestCase_000655_1 "KHR-GLES31.core.shader_bitfield"
#define VkglTestCase_000655_2 "_operation.imulExtended.ivec3_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000655, VkglTestCase_000655_1, VkglTestCase_000655_2);

#define VkglTestCase_000656_1 "KHR-GLES31.core.shader_bitfield"
#define VkglTestCase_000656_2 "_operation.imulExtended.ivec4_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000656, VkglTestCase_000656_1, VkglTestCase_000656_2);

#define VkglTestCase_000657_1 "KHR-GLES31.core.shader_bitfield"
#define VkglTestCase_000657_2 "_operation.imulExtended.ivec4_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000657, VkglTestCase_000657_1, VkglTestCase_000657_2);

#define VkglTestCase_000658_1 "KHR-GLES31.core.shader_bitfield"
#define VkglTestCase_000658_2 "_operation.imulExtended.ivec4_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000658, VkglTestCase_000658_1, VkglTestCase_000658_2);

#define VkglTestCase_000659_1 "KHR-GLES31.core.shader_bitfield"
#define VkglTestCase_000659_2 "_operation.imulExtended.ivec4_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000659, VkglTestCase_000659_1, VkglTestCase_000659_2);
