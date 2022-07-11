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

#define VkglTestCase_035476_1 "dEQP-GLES3.functional.ubo.single_nested_struct_"
#define VkglTestCase_035476_2 "array.single_buffer.shared_instance_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035476, VkglTestCase_035476_1, VkglTestCase_035476_2);

#define VkglTestCase_035477_1 "dEQP-GLES3.functional.ubo.single_nested_struct_a"
#define VkglTestCase_035477_2 "rray.single_buffer.shared_instance_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035477, VkglTestCase_035477_1, VkglTestCase_035477_2);

#define VkglTestCase_035478_1 "dEQP-GLES3.functional.ubo.single_nested_struct"
#define VkglTestCase_035478_2 "_array.single_buffer.shared_instance_array_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035478, VkglTestCase_035478_1, VkglTestCase_035478_2);

#define VkglTestCase_035479_1 "dEQP-GLES3.functional.ubo.single_nested_struct_"
#define VkglTestCase_035479_2 "array.single_buffer.packed_instance_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035479, VkglTestCase_035479_1, VkglTestCase_035479_2);

#define VkglTestCase_035480_1 "dEQP-GLES3.functional.ubo.single_nested_struct_a"
#define VkglTestCase_035480_2 "rray.single_buffer.packed_instance_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035480, VkglTestCase_035480_1, VkglTestCase_035480_2);

#define VkglTestCase_035481_1 "dEQP-GLES3.functional.ubo.single_nested_struct_"
#define VkglTestCase_035481_2 "array.single_buffer.std140_instance_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035481, VkglTestCase_035481_1, VkglTestCase_035481_2);

#define VkglTestCase_035482_1 "dEQP-GLES3.functional.ubo.single_nested_struct_a"
#define VkglTestCase_035482_2 "rray.single_buffer.std140_instance_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035482, VkglTestCase_035482_1, VkglTestCase_035482_2);

#define VkglTestCase_035483_1 "dEQP-GLES3.functional.ubo.single_nested_struct"
#define VkglTestCase_035483_2 "_array.single_buffer.std140_instance_array_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035483, VkglTestCase_035483_1, VkglTestCase_035483_2);
