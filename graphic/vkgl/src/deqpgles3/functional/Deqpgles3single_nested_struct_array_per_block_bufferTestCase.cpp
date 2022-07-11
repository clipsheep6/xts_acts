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

#define VkglTestCase_035460_1 "dEQP-GLES3.functional.ubo.single_nested_s"
#define VkglTestCase_035460_2 "truct_array.per_block_buffer.shared_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035460, VkglTestCase_035460_1, VkglTestCase_035460_2);

#define VkglTestCase_035461_1 "dEQP-GLES3.functional.ubo.single_nested_st"
#define VkglTestCase_035461_2 "ruct_array.per_block_buffer.shared_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035461, VkglTestCase_035461_1, VkglTestCase_035461_2);

#define VkglTestCase_035462_1 "dEQP-GLES3.functional.ubo.single_nested_"
#define VkglTestCase_035462_2 "struct_array.per_block_buffer.shared_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035462, VkglTestCase_035462_1, VkglTestCase_035462_2);

#define VkglTestCase_035463_1 "dEQP-GLES3.functional.ubo.single_nested_struct_ar"
#define VkglTestCase_035463_2 "ray.per_block_buffer.shared_instance_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035463, VkglTestCase_035463_1, VkglTestCase_035463_2);

#define VkglTestCase_035464_1 "dEQP-GLES3.functional.ubo.single_nested_struct_arr"
#define VkglTestCase_035464_2 "ay.per_block_buffer.shared_instance_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035464, VkglTestCase_035464_1, VkglTestCase_035464_2);

#define VkglTestCase_035465_1 "dEQP-GLES3.functional.ubo.single_nested_struct_a"
#define VkglTestCase_035465_2 "rray.per_block_buffer.shared_instance_array_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035465, VkglTestCase_035465_1, VkglTestCase_035465_2);

#define VkglTestCase_035466_1 "dEQP-GLES3.functional.ubo.single_nested_s"
#define VkglTestCase_035466_2 "truct_array.per_block_buffer.packed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035466, VkglTestCase_035466_1, VkglTestCase_035466_2);

#define VkglTestCase_035467_1 "dEQP-GLES3.functional.ubo.single_nested_st"
#define VkglTestCase_035467_2 "ruct_array.per_block_buffer.packed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035467, VkglTestCase_035467_1, VkglTestCase_035467_2);

#define VkglTestCase_035468_1 "dEQP-GLES3.functional.ubo.single_nested_struct_ar"
#define VkglTestCase_035468_2 "ray.per_block_buffer.packed_instance_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035468, VkglTestCase_035468_1, VkglTestCase_035468_2);

#define VkglTestCase_035469_1 "dEQP-GLES3.functional.ubo.single_nested_struct_arr"
#define VkglTestCase_035469_2 "ay.per_block_buffer.packed_instance_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035469, VkglTestCase_035469_1, VkglTestCase_035469_2);

#define VkglTestCase_035470_1 "dEQP-GLES3.functional.ubo.single_nested_s"
#define VkglTestCase_035470_2 "truct_array.per_block_buffer.std140_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035470, VkglTestCase_035470_1, VkglTestCase_035470_2);

#define VkglTestCase_035471_1 "dEQP-GLES3.functional.ubo.single_nested_st"
#define VkglTestCase_035471_2 "ruct_array.per_block_buffer.std140_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035471, VkglTestCase_035471_1, VkglTestCase_035471_2);

#define VkglTestCase_035472_1 "dEQP-GLES3.functional.ubo.single_nested_"
#define VkglTestCase_035472_2 "struct_array.per_block_buffer.std140_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035472, VkglTestCase_035472_1, VkglTestCase_035472_2);

#define VkglTestCase_035473_1 "dEQP-GLES3.functional.ubo.single_nested_struct_ar"
#define VkglTestCase_035473_2 "ray.per_block_buffer.std140_instance_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035473, VkglTestCase_035473_1, VkglTestCase_035473_2);

#define VkglTestCase_035474_1 "dEQP-GLES3.functional.ubo.single_nested_struct_arr"
#define VkglTestCase_035474_2 "ay.per_block_buffer.std140_instance_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035474, VkglTestCase_035474_1, VkglTestCase_035474_2);

#define VkglTestCase_035475_1 "dEQP-GLES3.functional.ubo.single_nested_struct_a"
#define VkglTestCase_035475_2 "rray.per_block_buffer.std140_instance_array_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035475, VkglTestCase_035475_1, VkglTestCase_035475_2);
