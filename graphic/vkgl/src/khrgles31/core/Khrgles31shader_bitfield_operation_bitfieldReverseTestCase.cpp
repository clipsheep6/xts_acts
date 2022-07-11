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

#define VkglTestCase_000456_1 "KHR-GLES31.core.shader_bitfield_o"
#define VkglTestCase_000456_2 "peration.bitfieldReverse.uint_zero"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000456, VkglTestCase_000456_1, VkglTestCase_000456_2);

#define VkglTestCase_000457_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000457_2 "operation.bitfieldReverse.uint_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000457, VkglTestCase_000457_1, VkglTestCase_000457_2);

#define VkglTestCase_000458_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000458_2 "operation.bitfieldReverse.uint_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000458, VkglTestCase_000458_1, VkglTestCase_000458_2);

#define VkglTestCase_000459_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000459_2 "operation.bitfieldReverse.uint_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000459, VkglTestCase_000459_1, VkglTestCase_000459_2);

#define VkglTestCase_000460_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000460_2 "operation.bitfieldReverse.uint_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000460, VkglTestCase_000460_1, VkglTestCase_000460_2);

#define VkglTestCase_000461_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000461_2 "operation.bitfieldReverse.uvec2_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000461, VkglTestCase_000461_1, VkglTestCase_000461_2);

#define VkglTestCase_000462_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000462_2 "operation.bitfieldReverse.uvec2_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000462, VkglTestCase_000462_1, VkglTestCase_000462_2);

#define VkglTestCase_000463_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000463_2 "operation.bitfieldReverse.uvec2_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000463, VkglTestCase_000463_1, VkglTestCase_000463_2);

#define VkglTestCase_000464_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000464_2 "operation.bitfieldReverse.uvec2_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000464, VkglTestCase_000464_1, VkglTestCase_000464_2);

#define VkglTestCase_000465_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000465_2 "operation.bitfieldReverse.uvec3_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000465, VkglTestCase_000465_1, VkglTestCase_000465_2);

#define VkglTestCase_000466_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000466_2 "operation.bitfieldReverse.uvec3_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000466, VkglTestCase_000466_1, VkglTestCase_000466_2);

#define VkglTestCase_000467_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000467_2 "operation.bitfieldReverse.uvec3_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000467, VkglTestCase_000467_1, VkglTestCase_000467_2);

#define VkglTestCase_000468_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000468_2 "operation.bitfieldReverse.uvec3_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000468, VkglTestCase_000468_1, VkglTestCase_000468_2);

#define VkglTestCase_000469_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000469_2 "operation.bitfieldReverse.uvec4_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000469, VkglTestCase_000469_1, VkglTestCase_000469_2);

#define VkglTestCase_000470_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000470_2 "operation.bitfieldReverse.uvec4_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000470, VkglTestCase_000470_1, VkglTestCase_000470_2);

#define VkglTestCase_000471_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000471_2 "operation.bitfieldReverse.uvec4_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000471, VkglTestCase_000471_1, VkglTestCase_000471_2);

#define VkglTestCase_000472_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000472_2 "operation.bitfieldReverse.uvec4_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000472, VkglTestCase_000472_1, VkglTestCase_000472_2);

#define VkglTestCase_000473_1 "KHR-GLES31.core.shader_bitfield_o"
#define VkglTestCase_000473_2 "peration.bitfieldReverse.int_zero"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000473, VkglTestCase_000473_1, VkglTestCase_000473_2);

#define VkglTestCase_000474_1 "KHR-GLES31.core.shader_bitfield_ope"
#define VkglTestCase_000474_2 "ration.bitfieldReverse.int_minus_one"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000474, VkglTestCase_000474_1, VkglTestCase_000474_2);

#define VkglTestCase_000475_1 "KHR-GLES31.core.shader_bitfield"
#define VkglTestCase_000475_2 "_operation.bitfieldReverse.int_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000475, VkglTestCase_000475_1, VkglTestCase_000475_2);

#define VkglTestCase_000476_1 "KHR-GLES31.core.shader_bitfield"
#define VkglTestCase_000476_2 "_operation.bitfieldReverse.int_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000476, VkglTestCase_000476_1, VkglTestCase_000476_2);

#define VkglTestCase_000477_1 "KHR-GLES31.core.shader_bitfield"
#define VkglTestCase_000477_2 "_operation.bitfieldReverse.int_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000477, VkglTestCase_000477_1, VkglTestCase_000477_2);

#define VkglTestCase_000478_1 "KHR-GLES31.core.shader_bitfield"
#define VkglTestCase_000478_2 "_operation.bitfieldReverse.int_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000478, VkglTestCase_000478_1, VkglTestCase_000478_2);

#define VkglTestCase_000479_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000479_2 "operation.bitfieldReverse.ivec2_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000479, VkglTestCase_000479_1, VkglTestCase_000479_2);

#define VkglTestCase_000480_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000480_2 "operation.bitfieldReverse.ivec2_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000480, VkglTestCase_000480_1, VkglTestCase_000480_2);

#define VkglTestCase_000481_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000481_2 "operation.bitfieldReverse.ivec2_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000481, VkglTestCase_000481_1, VkglTestCase_000481_2);

#define VkglTestCase_000482_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000482_2 "operation.bitfieldReverse.ivec2_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000482, VkglTestCase_000482_1, VkglTestCase_000482_2);

#define VkglTestCase_000483_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000483_2 "operation.bitfieldReverse.ivec3_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000483, VkglTestCase_000483_1, VkglTestCase_000483_2);

#define VkglTestCase_000484_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000484_2 "operation.bitfieldReverse.ivec3_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000484, VkglTestCase_000484_1, VkglTestCase_000484_2);

#define VkglTestCase_000485_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000485_2 "operation.bitfieldReverse.ivec3_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000485, VkglTestCase_000485_1, VkglTestCase_000485_2);

#define VkglTestCase_000486_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000486_2 "operation.bitfieldReverse.ivec3_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000486, VkglTestCase_000486_1, VkglTestCase_000486_2);

#define VkglTestCase_000487_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000487_2 "operation.bitfieldReverse.ivec4_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000487, VkglTestCase_000487_1, VkglTestCase_000487_2);

#define VkglTestCase_000488_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000488_2 "operation.bitfieldReverse.ivec4_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000488, VkglTestCase_000488_1, VkglTestCase_000488_2);

#define VkglTestCase_000489_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000489_2 "operation.bitfieldReverse.ivec4_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000489, VkglTestCase_000489_1, VkglTestCase_000489_2);

#define VkglTestCase_000490_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000490_2 "operation.bitfieldReverse.ivec4_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000490, VkglTestCase_000490_1, VkglTestCase_000490_2);
