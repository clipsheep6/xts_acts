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

#define VkglTestCase_000628_1 "KHR-GLES31.core.shader_bitfiel"
#define VkglTestCase_000628_2 "d_operation.umulExtended.uint_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000628, VkglTestCase_000628_1, VkglTestCase_000628_2);

#define VkglTestCase_000629_1 "KHR-GLES31.core.shader_bitfiel"
#define VkglTestCase_000629_2 "d_operation.umulExtended.uint_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000629, VkglTestCase_000629_1, VkglTestCase_000629_2);

#define VkglTestCase_000630_1 "KHR-GLES31.core.shader_bitfiel"
#define VkglTestCase_000630_2 "d_operation.umulExtended.uint_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000630, VkglTestCase_000630_1, VkglTestCase_000630_2);

#define VkglTestCase_000631_1 "KHR-GLES31.core.shader_bitfiel"
#define VkglTestCase_000631_2 "d_operation.umulExtended.uint_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000631, VkglTestCase_000631_1, VkglTestCase_000631_2);

#define VkglTestCase_000632_1 "KHR-GLES31.core.shader_bitfield"
#define VkglTestCase_000632_2 "_operation.umulExtended.uvec2_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000632, VkglTestCase_000632_1, VkglTestCase_000632_2);

#define VkglTestCase_000633_1 "KHR-GLES31.core.shader_bitfield"
#define VkglTestCase_000633_2 "_operation.umulExtended.uvec2_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000633, VkglTestCase_000633_1, VkglTestCase_000633_2);

#define VkglTestCase_000634_1 "KHR-GLES31.core.shader_bitfield"
#define VkglTestCase_000634_2 "_operation.umulExtended.uvec2_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000634, VkglTestCase_000634_1, VkglTestCase_000634_2);

#define VkglTestCase_000635_1 "KHR-GLES31.core.shader_bitfield"
#define VkglTestCase_000635_2 "_operation.umulExtended.uvec2_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000635, VkglTestCase_000635_1, VkglTestCase_000635_2);

#define VkglTestCase_000636_1 "KHR-GLES31.core.shader_bitfield"
#define VkglTestCase_000636_2 "_operation.umulExtended.uvec3_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000636, VkglTestCase_000636_1, VkglTestCase_000636_2);

#define VkglTestCase_000637_1 "KHR-GLES31.core.shader_bitfield"
#define VkglTestCase_000637_2 "_operation.umulExtended.uvec3_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000637, VkglTestCase_000637_1, VkglTestCase_000637_2);

#define VkglTestCase_000638_1 "KHR-GLES31.core.shader_bitfield"
#define VkglTestCase_000638_2 "_operation.umulExtended.uvec3_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000638, VkglTestCase_000638_1, VkglTestCase_000638_2);

#define VkglTestCase_000639_1 "KHR-GLES31.core.shader_bitfield"
#define VkglTestCase_000639_2 "_operation.umulExtended.uvec3_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000639, VkglTestCase_000639_1, VkglTestCase_000639_2);

#define VkglTestCase_000640_1 "KHR-GLES31.core.shader_bitfield"
#define VkglTestCase_000640_2 "_operation.umulExtended.uvec4_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000640, VkglTestCase_000640_1, VkglTestCase_000640_2);

#define VkglTestCase_000641_1 "KHR-GLES31.core.shader_bitfield"
#define VkglTestCase_000641_2 "_operation.umulExtended.uvec4_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000641, VkglTestCase_000641_1, VkglTestCase_000641_2);

#define VkglTestCase_000642_1 "KHR-GLES31.core.shader_bitfield"
#define VkglTestCase_000642_2 "_operation.umulExtended.uvec4_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000642, VkglTestCase_000642_1, VkglTestCase_000642_2);

#define VkglTestCase_000643_1 "KHR-GLES31.core.shader_bitfield"
#define VkglTestCase_000643_2 "_operation.umulExtended.uvec4_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000643, VkglTestCase_000643_1, VkglTestCase_000643_2);
