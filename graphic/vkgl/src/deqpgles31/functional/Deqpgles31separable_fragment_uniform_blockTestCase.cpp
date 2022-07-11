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

#define VkglTestCase_021024_1 "dEQP-GLES31.functional.program_interface_query.uniform.re"
#define VkglTestCase_021024_2 "ferenced_by_shader.separable_fragment.uniform_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021024, VkglTestCase_021024_1, VkglTestCase_021024_2);

#define VkglTestCase_021025_1 "dEQP-GLES31.functional.program_interface_query.uniform.refer"
#define VkglTestCase_021025_2 "enced_by_shader.separable_fragment.uniform_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021025, VkglTestCase_021025_1, VkglTestCase_021025_2);

#define VkglTestCase_021026_1 "dEQP-GLES31.functional.program_interface_query.uniform.refer"
#define VkglTestCase_021026_2 "enced_by_shader.separable_fragment.uniform_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021026, VkglTestCase_021026_1, VkglTestCase_021026_2);

#define VkglTestCase_021027_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenc"
#define VkglTestCase_021027_2 "ed_by_shader.separable_fragment.uniform_block.float_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021027, VkglTestCase_021027_1, VkglTestCase_021027_2);

#define VkglTestCase_021028_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenc"
#define VkglTestCase_021028_2 "ed_by_shader.separable_fragment.uniform_block.float_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021028, VkglTestCase_021028_1, VkglTestCase_021028_2);

#define VkglTestCase_021029_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenc"
#define VkglTestCase_021029_2 "ed_by_shader.separable_fragment.uniform_block.float_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021029, VkglTestCase_021029_1, VkglTestCase_021029_2);

#define VkglTestCase_021030_1 "dEQP-GLES31.functional.program_interface_query.uniform.reference"
#define VkglTestCase_021030_2 "d_by_shader.separable_fragment.uniform_block.float_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021030, VkglTestCase_021030_1, VkglTestCase_021030_2);
