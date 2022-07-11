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

#define VkglTestCase_002163_1 "KHR-GLES3.shaders.uniform_block.multi_n"
#define VkglTestCase_002163_2 "ested_struct.single_buffer.shared_mixed"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002163, VkglTestCase_002163_1, VkglTestCase_002163_2);

#define VkglTestCase_002164_1 "KHR-GLES3.shaders.uniform_block.multi_"
#define VkglTestCase_002164_2 "nested_struct.single_buffer.shared_both"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002164, VkglTestCase_002164_1, VkglTestCase_002164_2);

#define VkglTestCase_002165_1 "KHR-GLES3.shaders.uniform_block.multi_nested_s"
#define VkglTestCase_002165_2 "truct.single_buffer.shared_instance_array_mixed"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002165, VkglTestCase_002165_1, VkglTestCase_002165_2);

#define VkglTestCase_002166_1 "KHR-GLES3.shaders.uniform_block.multi_nested_s"
#define VkglTestCase_002166_2 "truct.single_buffer.shared_instance_array_both"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002166, VkglTestCase_002166_1, VkglTestCase_002166_2);

#define VkglTestCase_002167_1 "KHR-GLES3.shaders.uniform_block.multi_n"
#define VkglTestCase_002167_2 "ested_struct.single_buffer.packed_mixed"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002167, VkglTestCase_002167_1, VkglTestCase_002167_2);

#define VkglTestCase_002168_1 "KHR-GLES3.shaders.uniform_block.multi_nested_s"
#define VkglTestCase_002168_2 "truct.single_buffer.packed_instance_array_mixed"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002168, VkglTestCase_002168_1, VkglTestCase_002168_2);

#define VkglTestCase_002169_1 "KHR-GLES3.shaders.uniform_block.multi_n"
#define VkglTestCase_002169_2 "ested_struct.single_buffer.std140_mixed"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002169, VkglTestCase_002169_1, VkglTestCase_002169_2);

#define VkglTestCase_002170_1 "KHR-GLES3.shaders.uniform_block.multi_"
#define VkglTestCase_002170_2 "nested_struct.single_buffer.std140_both"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002170, VkglTestCase_002170_1, VkglTestCase_002170_2);

#define VkglTestCase_002171_1 "KHR-GLES3.shaders.uniform_block.multi_nested_s"
#define VkglTestCase_002171_2 "truct.single_buffer.std140_instance_array_mixed"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002171, VkglTestCase_002171_1, VkglTestCase_002171_2);

#define VkglTestCase_002172_1 "KHR-GLES3.shaders.uniform_block.multi_nested_s"
#define VkglTestCase_002172_2 "truct.single_buffer.std140_instance_array_both"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002172, VkglTestCase_002172_1, VkglTestCase_002172_2);
