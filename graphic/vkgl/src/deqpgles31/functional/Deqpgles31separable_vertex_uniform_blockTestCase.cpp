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
#include "../ActsDeqpgles310021TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_020999_1 "dEQP-GLES31.functional.program_interface_query.uniform.r"
#define VkglTestCase_020999_2 "eferenced_by_shader.separable_vertex.uniform_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020999, VkglTestCase_020999_1, VkglTestCase_020999_2);

#define VkglTestCase_021000_1 "dEQP-GLES31.functional.program_interface_query.uniform.refe"
#define VkglTestCase_021000_2 "renced_by_shader.separable_vertex.uniform_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021000, VkglTestCase_021000_1, VkglTestCase_021000_2);

#define VkglTestCase_021001_1 "dEQP-GLES31.functional.program_interface_query.uniform.refe"
#define VkglTestCase_021001_2 "renced_by_shader.separable_vertex.uniform_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021001, VkglTestCase_021001_1, VkglTestCase_021001_2);

#define VkglTestCase_021002_1 "dEQP-GLES31.functional.program_interface_query.uniform.referen"
#define VkglTestCase_021002_2 "ced_by_shader.separable_vertex.uniform_block.float_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021002, VkglTestCase_021002_1, VkglTestCase_021002_2);

#define VkglTestCase_021003_1 "dEQP-GLES31.functional.program_interface_query.uniform.referen"
#define VkglTestCase_021003_2 "ced_by_shader.separable_vertex.uniform_block.float_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021003, VkglTestCase_021003_1, VkglTestCase_021003_2);

#define VkglTestCase_021004_1 "dEQP-GLES31.functional.program_interface_query.uniform.referen"
#define VkglTestCase_021004_2 "ced_by_shader.separable_vertex.uniform_block.float_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021004, VkglTestCase_021004_1, VkglTestCase_021004_2);

#define VkglTestCase_021005_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenc"
#define VkglTestCase_021005_2 "ed_by_shader.separable_vertex.uniform_block.float_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021005, VkglTestCase_021005_1, VkglTestCase_021005_2);
