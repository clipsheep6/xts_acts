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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30036TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_035872_1 "dEQP-GLES3.functional.ubo.multi_nested"
#define VkglTestCase_035872_2 "_struct.per_block_buffer.shared_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035872, VkglTestCase_035872_1, VkglTestCase_035872_2);

#define VkglTestCase_035873_1 "dEQP-GLES3.functional.ubo.multi_nested_"
#define VkglTestCase_035873_2 "struct.per_block_buffer.shared_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035873, VkglTestCase_035873_1, VkglTestCase_035873_2);

#define VkglTestCase_035874_1 "dEQP-GLES3.functional.ubo.multi_neste"
#define VkglTestCase_035874_2 "d_struct.per_block_buffer.shared_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035874, VkglTestCase_035874_1, VkglTestCase_035874_2);

#define VkglTestCase_035875_1 "dEQP-GLES3.functional.ubo.multi_neste"
#define VkglTestCase_035875_2 "d_struct.per_block_buffer.shared_mixed"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035875, VkglTestCase_035875_1, VkglTestCase_035875_2);

#define VkglTestCase_035876_1 "dEQP-GLES3.functional.ubo.multi_nested_struct"
#define VkglTestCase_035876_2 ".per_block_buffer.shared_instance_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035876, VkglTestCase_035876_1, VkglTestCase_035876_2);

#define VkglTestCase_035877_1 "dEQP-GLES3.functional.ubo.multi_nested_struct."
#define VkglTestCase_035877_2 "per_block_buffer.shared_instance_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035877, VkglTestCase_035877_1, VkglTestCase_035877_2);

#define VkglTestCase_035878_1 "dEQP-GLES3.functional.ubo.multi_nested_struc"
#define VkglTestCase_035878_2 "t.per_block_buffer.shared_instance_array_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035878, VkglTestCase_035878_1, VkglTestCase_035878_2);

#define VkglTestCase_035879_1 "dEQP-GLES3.functional.ubo.multi_nested_struct"
#define VkglTestCase_035879_2 ".per_block_buffer.shared_instance_array_mixed"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035879, VkglTestCase_035879_1, VkglTestCase_035879_2);

#define VkglTestCase_035880_1 "dEQP-GLES3.functional.ubo.multi_nested"
#define VkglTestCase_035880_2 "_struct.per_block_buffer.packed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035880, VkglTestCase_035880_1, VkglTestCase_035880_2);

#define VkglTestCase_035881_1 "dEQP-GLES3.functional.ubo.multi_nested_"
#define VkglTestCase_035881_2 "struct.per_block_buffer.packed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035881, VkglTestCase_035881_1, VkglTestCase_035881_2);

#define VkglTestCase_035882_1 "dEQP-GLES3.functional.ubo.multi_neste"
#define VkglTestCase_035882_2 "d_struct.per_block_buffer.packed_mixed"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035882, VkglTestCase_035882_1, VkglTestCase_035882_2);

#define VkglTestCase_035883_1 "dEQP-GLES3.functional.ubo.multi_nested_struct"
#define VkglTestCase_035883_2 ".per_block_buffer.packed_instance_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035883, VkglTestCase_035883_1, VkglTestCase_035883_2);

#define VkglTestCase_035884_1 "dEQP-GLES3.functional.ubo.multi_nested_struct."
#define VkglTestCase_035884_2 "per_block_buffer.packed_instance_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035884, VkglTestCase_035884_1, VkglTestCase_035884_2);

#define VkglTestCase_035885_1 "dEQP-GLES3.functional.ubo.multi_nested_struct"
#define VkglTestCase_035885_2 ".per_block_buffer.packed_instance_array_mixed"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035885, VkglTestCase_035885_1, VkglTestCase_035885_2);

#define VkglTestCase_035886_1 "dEQP-GLES3.functional.ubo.multi_nested"
#define VkglTestCase_035886_2 "_struct.per_block_buffer.std140_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035886, VkglTestCase_035886_1, VkglTestCase_035886_2);

#define VkglTestCase_035887_1 "dEQP-GLES3.functional.ubo.multi_nested_"
#define VkglTestCase_035887_2 "struct.per_block_buffer.std140_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035887, VkglTestCase_035887_1, VkglTestCase_035887_2);

#define VkglTestCase_035888_1 "dEQP-GLES3.functional.ubo.multi_neste"
#define VkglTestCase_035888_2 "d_struct.per_block_buffer.std140_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035888, VkglTestCase_035888_1, VkglTestCase_035888_2);

#define VkglTestCase_035889_1 "dEQP-GLES3.functional.ubo.multi_neste"
#define VkglTestCase_035889_2 "d_struct.per_block_buffer.std140_mixed"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035889, VkglTestCase_035889_1, VkglTestCase_035889_2);

#define VkglTestCase_035890_1 "dEQP-GLES3.functional.ubo.multi_nested_struct"
#define VkglTestCase_035890_2 ".per_block_buffer.std140_instance_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035890, VkglTestCase_035890_1, VkglTestCase_035890_2);

#define VkglTestCase_035891_1 "dEQP-GLES3.functional.ubo.multi_nested_struct."
#define VkglTestCase_035891_2 "per_block_buffer.std140_instance_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035891, VkglTestCase_035891_1, VkglTestCase_035891_2);

#define VkglTestCase_035892_1 "dEQP-GLES3.functional.ubo.multi_nested_struc"
#define VkglTestCase_035892_2 "t.per_block_buffer.std140_instance_array_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035892, VkglTestCase_035892_1, VkglTestCase_035892_2);

#define VkglTestCase_035893_1 "dEQP-GLES3.functional.ubo.multi_nested_struct"
#define VkglTestCase_035893_2 ".per_block_buffer.std140_instance_array_mixed"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035893, VkglTestCase_035893_1, VkglTestCase_035893_2);
