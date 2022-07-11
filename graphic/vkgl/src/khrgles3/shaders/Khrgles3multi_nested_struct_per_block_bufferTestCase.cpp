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
#include "../ActsKhrgles30003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002153_1 "KHR-GLES3.shaders.uniform_block.multi_ne"
#define VkglTestCase_002153_2 "sted_struct.per_block_buffer.shared_mixed"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002153, VkglTestCase_002153_1, VkglTestCase_002153_2);

#define VkglTestCase_002154_1 "KHR-GLES3.shaders.uniform_block.multi_ne"
#define VkglTestCase_002154_2 "sted_struct.per_block_buffer.shared_both"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002154, VkglTestCase_002154_1, VkglTestCase_002154_2);

#define VkglTestCase_002155_1 "KHR-GLES3.shaders.uniform_block.multi_nested_str"
#define VkglTestCase_002155_2 "uct.per_block_buffer.shared_instance_array_mixed"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002155, VkglTestCase_002155_1, VkglTestCase_002155_2);

#define VkglTestCase_002156_1 "KHR-GLES3.shaders.uniform_block.multi_nested_st"
#define VkglTestCase_002156_2 "ruct.per_block_buffer.shared_instance_array_both"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002156, VkglTestCase_002156_1, VkglTestCase_002156_2);

#define VkglTestCase_002157_1 "KHR-GLES3.shaders.uniform_block.multi_ne"
#define VkglTestCase_002157_2 "sted_struct.per_block_buffer.packed_mixed"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002157, VkglTestCase_002157_1, VkglTestCase_002157_2);

#define VkglTestCase_002158_1 "KHR-GLES3.shaders.uniform_block.multi_nested_str"
#define VkglTestCase_002158_2 "uct.per_block_buffer.packed_instance_array_mixed"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002158, VkglTestCase_002158_1, VkglTestCase_002158_2);

#define VkglTestCase_002159_1 "KHR-GLES3.shaders.uniform_block.multi_ne"
#define VkglTestCase_002159_2 "sted_struct.per_block_buffer.std140_mixed"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002159, VkglTestCase_002159_1, VkglTestCase_002159_2);

#define VkglTestCase_002160_1 "KHR-GLES3.shaders.uniform_block.multi_ne"
#define VkglTestCase_002160_2 "sted_struct.per_block_buffer.std140_both"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002160, VkglTestCase_002160_1, VkglTestCase_002160_2);

#define VkglTestCase_002161_1 "KHR-GLES3.shaders.uniform_block.multi_nested_str"
#define VkglTestCase_002161_2 "uct.per_block_buffer.std140_instance_array_mixed"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002161, VkglTestCase_002161_1, VkglTestCase_002161_2);

#define VkglTestCase_002162_1 "KHR-GLES3.shaders.uniform_block.multi_nested_st"
#define VkglTestCase_002162_2 "ruct.per_block_buffer.std140_instance_array_both"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002162, VkglTestCase_002162_1, VkglTestCase_002162_2);
