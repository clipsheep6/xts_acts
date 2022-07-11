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

#define VkglTestCase_002133_1 "KHR-GLES3.shaders.uniform_block.multi_b"
#define VkglTestCase_002133_2 "asic_types.per_block_buffer.shared_mixed"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002133, VkglTestCase_002133_1, VkglTestCase_002133_2);

#define VkglTestCase_002134_1 "KHR-GLES3.shaders.uniform_block.multi_b"
#define VkglTestCase_002134_2 "asic_types.per_block_buffer.shared_both"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002134, VkglTestCase_002134_1, VkglTestCase_002134_2);

#define VkglTestCase_002135_1 "KHR-GLES3.shaders.uniform_block.multi_basic_typ"
#define VkglTestCase_002135_2 "es.per_block_buffer.shared_instance_array_mixed"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002135, VkglTestCase_002135_1, VkglTestCase_002135_2);

#define VkglTestCase_002136_1 "KHR-GLES3.shaders.uniform_block.multi_basic_ty"
#define VkglTestCase_002136_2 "pes.per_block_buffer.shared_instance_array_both"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002136, VkglTestCase_002136_1, VkglTestCase_002136_2);

#define VkglTestCase_002137_1 "KHR-GLES3.shaders.uniform_block.multi_b"
#define VkglTestCase_002137_2 "asic_types.per_block_buffer.packed_mixed"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002137, VkglTestCase_002137_1, VkglTestCase_002137_2);

#define VkglTestCase_002138_1 "KHR-GLES3.shaders.uniform_block.multi_basic_typ"
#define VkglTestCase_002138_2 "es.per_block_buffer.packed_instance_array_mixed"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002138, VkglTestCase_002138_1, VkglTestCase_002138_2);

#define VkglTestCase_002139_1 "KHR-GLES3.shaders.uniform_block.multi_b"
#define VkglTestCase_002139_2 "asic_types.per_block_buffer.std140_mixed"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002139, VkglTestCase_002139_1, VkglTestCase_002139_2);

#define VkglTestCase_002140_1 "KHR-GLES3.shaders.uniform_block.multi_b"
#define VkglTestCase_002140_2 "asic_types.per_block_buffer.std140_both"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002140, VkglTestCase_002140_1, VkglTestCase_002140_2);

#define VkglTestCase_002141_1 "KHR-GLES3.shaders.uniform_block.multi_basic_typ"
#define VkglTestCase_002141_2 "es.per_block_buffer.std140_instance_array_mixed"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002141, VkglTestCase_002141_1, VkglTestCase_002141_2);

#define VkglTestCase_002142_1 "KHR-GLES3.shaders.uniform_block.multi_basic_ty"
#define VkglTestCase_002142_2 "pes.per_block_buffer.std140_instance_array_both"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002142, VkglTestCase_002142_1, VkglTestCase_002142_2);
