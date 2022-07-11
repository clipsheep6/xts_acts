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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310012TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_011097_1 "dEQP-GLES31.functional.ubo.2_level_struct_arr"
#define VkglTestCase_011097_2 "ay.single_buffer.shared_instance_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011097, VkglTestCase_011097_1, VkglTestCase_011097_2);

#define VkglTestCase_011098_1 "dEQP-GLES31.functional.ubo.2_level_struct_arra"
#define VkglTestCase_011098_2 "y.single_buffer.shared_instance_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011098, VkglTestCase_011098_1, VkglTestCase_011098_2);

#define VkglTestCase_011099_1 "dEQP-GLES31.functional.ubo.2_level_struct_ar"
#define VkglTestCase_011099_2 "ray.single_buffer.shared_instance_array_both"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011099, VkglTestCase_011099_1, VkglTestCase_011099_2);

#define VkglTestCase_011100_1 "dEQP-GLES31.functional.ubo.2_level_struct_arr"
#define VkglTestCase_011100_2 "ay.single_buffer.packed_instance_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011100, VkglTestCase_011100_1, VkglTestCase_011100_2);

#define VkglTestCase_011101_1 "dEQP-GLES31.functional.ubo.2_level_struct_arra"
#define VkglTestCase_011101_2 "y.single_buffer.packed_instance_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011101, VkglTestCase_011101_1, VkglTestCase_011101_2);

#define VkglTestCase_011102_1 "dEQP-GLES31.functional.ubo.2_level_struct_arr"
#define VkglTestCase_011102_2 "ay.single_buffer.std140_instance_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011102, VkglTestCase_011102_1, VkglTestCase_011102_2);

#define VkglTestCase_011103_1 "dEQP-GLES31.functional.ubo.2_level_struct_arra"
#define VkglTestCase_011103_2 "y.single_buffer.std140_instance_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011103, VkglTestCase_011103_1, VkglTestCase_011103_2);

#define VkglTestCase_011104_1 "dEQP-GLES31.functional.ubo.2_level_struct_ar"
#define VkglTestCase_011104_2 "ray.single_buffer.std140_instance_array_both"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011104, VkglTestCase_011104_1, VkglTestCase_011104_2);
