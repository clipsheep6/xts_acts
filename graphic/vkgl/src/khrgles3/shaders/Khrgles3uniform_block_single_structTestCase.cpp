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
#include "../Khrgles3BaseFunc.h"
#include "../ActsKhrgles30002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001968_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001968_2 "ngle_struct.per_block_buffer_shared"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001968, VkglTestCase_001968_1, VkglTestCase_001968_2);

#define VkglTestCase_001969_1 "KHR-GLES3.shaders.uniform_block.single_str"
#define VkglTestCase_001969_2 "uct.per_block_buffer_shared_instance_array"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001969, VkglTestCase_001969_1, VkglTestCase_001969_2);

#define VkglTestCase_001970_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001970_2 "ngle_struct.per_block_buffer_packed"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001970, VkglTestCase_001970_1, VkglTestCase_001970_2);

#define VkglTestCase_001971_1 "KHR-GLES3.shaders.uniform_block.single_str"
#define VkglTestCase_001971_2 "uct.per_block_buffer_packed_instance_array"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001971, VkglTestCase_001971_1, VkglTestCase_001971_2);

#define VkglTestCase_001972_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001972_2 "ngle_struct.per_block_buffer_std140"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001972, VkglTestCase_001972_1, VkglTestCase_001972_2);

#define VkglTestCase_001973_1 "KHR-GLES3.shaders.uniform_block.single_str"
#define VkglTestCase_001973_2 "uct.per_block_buffer_std140_instance_array"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001973, VkglTestCase_001973_1, VkglTestCase_001973_2);

#define VkglTestCase_001974_1 "KHR-GLES3.shaders.uniform_block.single_s"
#define VkglTestCase_001974_2 "truct.single_buffer_shared_instance_array"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001974, VkglTestCase_001974_1, VkglTestCase_001974_2);

#define VkglTestCase_001975_1 "KHR-GLES3.shaders.uniform_block.single_s"
#define VkglTestCase_001975_2 "truct.single_buffer_packed_instance_array"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001975, VkglTestCase_001975_1, VkglTestCase_001975_2);

#define VkglTestCase_001976_1 "KHR-GLES3.shaders.uniform_block.single_s"
#define VkglTestCase_001976_2 "truct.single_buffer_std140_instance_array"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001976, VkglTestCase_001976_1, VkglTestCase_001976_2);
