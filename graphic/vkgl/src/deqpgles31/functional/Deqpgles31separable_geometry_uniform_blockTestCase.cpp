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
#include "../ActsDeqpgles310022TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_021099_1 "dEQP-GLES31.functional.program_interface_query.uniform.re"
#define VkglTestCase_021099_2 "ferenced_by_shader.separable_geometry.uniform_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021099, VkglTestCase_021099_1, VkglTestCase_021099_2);

#define VkglTestCase_021100_1 "dEQP-GLES31.functional.program_interface_query.uniform.refer"
#define VkglTestCase_021100_2 "enced_by_shader.separable_geometry.uniform_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021100, VkglTestCase_021100_1, VkglTestCase_021100_2);

#define VkglTestCase_021101_1 "dEQP-GLES31.functional.program_interface_query.uniform.refer"
#define VkglTestCase_021101_2 "enced_by_shader.separable_geometry.uniform_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021101, VkglTestCase_021101_1, VkglTestCase_021101_2);

#define VkglTestCase_021102_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenc"
#define VkglTestCase_021102_2 "ed_by_shader.separable_geometry.uniform_block.float_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021102, VkglTestCase_021102_1, VkglTestCase_021102_2);

#define VkglTestCase_021103_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenc"
#define VkglTestCase_021103_2 "ed_by_shader.separable_geometry.uniform_block.float_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021103, VkglTestCase_021103_1, VkglTestCase_021103_2);

#define VkglTestCase_021104_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenc"
#define VkglTestCase_021104_2 "ed_by_shader.separable_geometry.uniform_block.float_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021104, VkglTestCase_021104_1, VkglTestCase_021104_2);

#define VkglTestCase_021105_1 "dEQP-GLES31.functional.program_interface_query.uniform.reference"
#define VkglTestCase_021105_2 "d_by_shader.separable_geometry.uniform_block.float_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021105, VkglTestCase_021105_1, VkglTestCase_021105_2);
