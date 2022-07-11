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

#define VkglTestCase_001977_1 "KHR-GLES3.shaders.uniform_block.singl"
#define VkglTestCase_001977_2 "e_struct_array.per_block_buffer_shared"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001977, VkglTestCase_001977_1, VkglTestCase_001977_2);

#define VkglTestCase_001978_1 "KHR-GLES3.shaders.uniform_block.single_struct"
#define VkglTestCase_001978_2 "_array.per_block_buffer_shared_instance_array"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001978, VkglTestCase_001978_1, VkglTestCase_001978_2);

#define VkglTestCase_001979_1 "KHR-GLES3.shaders.uniform_block.singl"
#define VkglTestCase_001979_2 "e_struct_array.per_block_buffer_packed"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001979, VkglTestCase_001979_1, VkglTestCase_001979_2);

#define VkglTestCase_001980_1 "KHR-GLES3.shaders.uniform_block.single_struct"
#define VkglTestCase_001980_2 "_array.per_block_buffer_packed_instance_array"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001980, VkglTestCase_001980_1, VkglTestCase_001980_2);

#define VkglTestCase_001981_1 "KHR-GLES3.shaders.uniform_block.singl"
#define VkglTestCase_001981_2 "e_struct_array.per_block_buffer_std140"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001981, VkglTestCase_001981_1, VkglTestCase_001981_2);

#define VkglTestCase_001982_1 "KHR-GLES3.shaders.uniform_block.single_struct"
#define VkglTestCase_001982_2 "_array.per_block_buffer_std140_instance_array"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001982, VkglTestCase_001982_1, VkglTestCase_001982_2);

#define VkglTestCase_001983_1 "KHR-GLES3.shaders.uniform_block.single_stru"
#define VkglTestCase_001983_2 "ct_array.single_buffer_shared_instance_array"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001983, VkglTestCase_001983_1, VkglTestCase_001983_2);

#define VkglTestCase_001984_1 "KHR-GLES3.shaders.uniform_block.single_stru"
#define VkglTestCase_001984_2 "ct_array.single_buffer_packed_instance_array"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001984, VkglTestCase_001984_1, VkglTestCase_001984_2);

#define VkglTestCase_001985_1 "KHR-GLES3.shaders.uniform_block.single_stru"
#define VkglTestCase_001985_2 "ct_array.single_buffer_std140_instance_array"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001985, VkglTestCase_001985_1, VkglTestCase_001985_2);
