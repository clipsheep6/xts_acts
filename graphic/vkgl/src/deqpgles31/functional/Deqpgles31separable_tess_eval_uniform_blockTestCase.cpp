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

#define VkglTestCase_021074_1 "dEQP-GLES31.functional.program_interface_query.uniform.re"
#define VkglTestCase_021074_2 "ferenced_by_shader.separable_tess_eval.uniform_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021074, VkglTestCase_021074_1, VkglTestCase_021074_2);

#define VkglTestCase_021075_1 "dEQP-GLES31.functional.program_interface_query.uniform.refer"
#define VkglTestCase_021075_2 "enced_by_shader.separable_tess_eval.uniform_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021075, VkglTestCase_021075_1, VkglTestCase_021075_2);

#define VkglTestCase_021076_1 "dEQP-GLES31.functional.program_interface_query.uniform.refere"
#define VkglTestCase_021076_2 "nced_by_shader.separable_tess_eval.uniform_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021076, VkglTestCase_021076_1, VkglTestCase_021076_2);

#define VkglTestCase_021077_1 "dEQP-GLES31.functional.program_interface_query.uniform.reference"
#define VkglTestCase_021077_2 "d_by_shader.separable_tess_eval.uniform_block.float_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021077, VkglTestCase_021077_1, VkglTestCase_021077_2);

#define VkglTestCase_021078_1 "dEQP-GLES31.functional.program_interface_query.uniform.reference"
#define VkglTestCase_021078_2 "d_by_shader.separable_tess_eval.uniform_block.float_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021078, VkglTestCase_021078_1, VkglTestCase_021078_2);

#define VkglTestCase_021079_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenc"
#define VkglTestCase_021079_2 "ed_by_shader.separable_tess_eval.uniform_block.float_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021079, VkglTestCase_021079_1, VkglTestCase_021079_2);

#define VkglTestCase_021080_1 "dEQP-GLES31.functional.program_interface_query.uniform.reference"
#define VkglTestCase_021080_2 "d_by_shader.separable_tess_eval.uniform_block.float_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021080, VkglTestCase_021080_1, VkglTestCase_021080_2);
