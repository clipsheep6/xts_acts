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

#define VkglTestCase_035220_1 "dEQP-GLES3.functional.ubo.single_struc"
#define VkglTestCase_035220_2 "t_array.per_block_buffer.shared_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035220, VkglTestCase_035220_1, VkglTestCase_035220_2);

#define VkglTestCase_035221_1 "dEQP-GLES3.functional.ubo.single_struct"
#define VkglTestCase_035221_2 "_array.per_block_buffer.shared_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035221, VkglTestCase_035221_1, VkglTestCase_035221_2);

#define VkglTestCase_035222_1 "dEQP-GLES3.functional.ubo.single_stru"
#define VkglTestCase_035222_2 "ct_array.per_block_buffer.shared_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035222, VkglTestCase_035222_1, VkglTestCase_035222_2);

#define VkglTestCase_035223_1 "dEQP-GLES3.functional.ubo.single_struct_array"
#define VkglTestCase_035223_2 ".per_block_buffer.shared_instance_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035223, VkglTestCase_035223_1, VkglTestCase_035223_2);

#define VkglTestCase_035224_1 "dEQP-GLES3.functional.ubo.single_struct_array."
#define VkglTestCase_035224_2 "per_block_buffer.shared_instance_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035224, VkglTestCase_035224_1, VkglTestCase_035224_2);

#define VkglTestCase_035225_1 "dEQP-GLES3.functional.ubo.single_struct_arra"
#define VkglTestCase_035225_2 "y.per_block_buffer.shared_instance_array_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035225, VkglTestCase_035225_1, VkglTestCase_035225_2);

#define VkglTestCase_035226_1 "dEQP-GLES3.functional.ubo.single_struc"
#define VkglTestCase_035226_2 "t_array.per_block_buffer.packed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035226, VkglTestCase_035226_1, VkglTestCase_035226_2);

#define VkglTestCase_035227_1 "dEQP-GLES3.functional.ubo.single_struct"
#define VkglTestCase_035227_2 "_array.per_block_buffer.packed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035227, VkglTestCase_035227_1, VkglTestCase_035227_2);

#define VkglTestCase_035228_1 "dEQP-GLES3.functional.ubo.single_struct_array"
#define VkglTestCase_035228_2 ".per_block_buffer.packed_instance_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035228, VkglTestCase_035228_1, VkglTestCase_035228_2);

#define VkglTestCase_035229_1 "dEQP-GLES3.functional.ubo.single_struct_array."
#define VkglTestCase_035229_2 "per_block_buffer.packed_instance_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035229, VkglTestCase_035229_1, VkglTestCase_035229_2);

#define VkglTestCase_035230_1 "dEQP-GLES3.functional.ubo.single_struc"
#define VkglTestCase_035230_2 "t_array.per_block_buffer.std140_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035230, VkglTestCase_035230_1, VkglTestCase_035230_2);

#define VkglTestCase_035231_1 "dEQP-GLES3.functional.ubo.single_struct"
#define VkglTestCase_035231_2 "_array.per_block_buffer.std140_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035231, VkglTestCase_035231_1, VkglTestCase_035231_2);

#define VkglTestCase_035232_1 "dEQP-GLES3.functional.ubo.single_stru"
#define VkglTestCase_035232_2 "ct_array.per_block_buffer.std140_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035232, VkglTestCase_035232_1, VkglTestCase_035232_2);

#define VkglTestCase_035233_1 "dEQP-GLES3.functional.ubo.single_struct_array"
#define VkglTestCase_035233_2 ".per_block_buffer.std140_instance_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035233, VkglTestCase_035233_1, VkglTestCase_035233_2);

#define VkglTestCase_035234_1 "dEQP-GLES3.functional.ubo.single_struct_array."
#define VkglTestCase_035234_2 "per_block_buffer.std140_instance_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035234, VkglTestCase_035234_1, VkglTestCase_035234_2);

#define VkglTestCase_035235_1 "dEQP-GLES3.functional.ubo.single_struct_arra"
#define VkglTestCase_035235_2 "y.per_block_buffer.std140_instance_array_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035235, VkglTestCase_035235_1, VkglTestCase_035235_2);
