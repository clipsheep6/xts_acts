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

#define VkglTestCase_001995_1 "KHR-GLES3.shaders.uniform_block.single_ne"
#define VkglTestCase_001995_2 "sted_struct_array.per_block_buffer_shared"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001995, VkglTestCase_001995_1, VkglTestCase_001995_2);

#define VkglTestCase_001996_1 "KHR-GLES3.shaders.uniform_block.single_nested_st"
#define VkglTestCase_001996_2 "ruct_array.per_block_buffer_shared_instance_array"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001996, VkglTestCase_001996_1, VkglTestCase_001996_2);

#define VkglTestCase_001997_1 "KHR-GLES3.shaders.uniform_block.single_ne"
#define VkglTestCase_001997_2 "sted_struct_array.per_block_buffer_packed"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001997, VkglTestCase_001997_1, VkglTestCase_001997_2);

#define VkglTestCase_001998_1 "KHR-GLES3.shaders.uniform_block.single_nested_st"
#define VkglTestCase_001998_2 "ruct_array.per_block_buffer_packed_instance_array"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001998, VkglTestCase_001998_1, VkglTestCase_001998_2);

#define VkglTestCase_001999_1 "KHR-GLES3.shaders.uniform_block.single_ne"
#define VkglTestCase_001999_2 "sted_struct_array.per_block_buffer_std140"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001999, VkglTestCase_001999_1, VkglTestCase_001999_2);

#define VkglTestCase_002000_1 "KHR-GLES3.shaders.uniform_block.single_nested_st"
#define VkglTestCase_002000_2 "ruct_array.per_block_buffer_std140_instance_array"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_002000, VkglTestCase_002000_1, VkglTestCase_002000_2);

#define VkglTestCase_002001_1 "KHR-GLES3.shaders.uniform_block.single_nested_s"
#define VkglTestCase_002001_2 "truct_array.single_buffer_shared_instance_array"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_002001, VkglTestCase_002001_1, VkglTestCase_002001_2);

#define VkglTestCase_002002_1 "KHR-GLES3.shaders.uniform_block.single_nested_s"
#define VkglTestCase_002002_2 "truct_array.single_buffer_packed_instance_array"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_002002, VkglTestCase_002002_1, VkglTestCase_002002_2);

#define VkglTestCase_002003_1 "KHR-GLES3.shaders.uniform_block.single_nested_s"
#define VkglTestCase_002003_2 "truct_array.single_buffer_std140_instance_array"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_002003, VkglTestCase_002003_1, VkglTestCase_002003_2);
