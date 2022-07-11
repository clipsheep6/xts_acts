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

#define VkglTestCase_020987_1 "dEQP-GLES31.functional.program_interface_query.uniform.r"
#define VkglTestCase_020987_2 "eferenced_by_shader.separable_vertex.default_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020987, VkglTestCase_020987_1, VkglTestCase_020987_2);

#define VkglTestCase_020988_1 "dEQP-GLES31.functional.program_interface_query.uniform.refe"
#define VkglTestCase_020988_2 "renced_by_shader.separable_vertex.default_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020988, VkglTestCase_020988_1, VkglTestCase_020988_2);

#define VkglTestCase_020989_1 "dEQP-GLES31.functional.program_interface_query.uniform.refe"
#define VkglTestCase_020989_2 "renced_by_shader.separable_vertex.default_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020989, VkglTestCase_020989_1, VkglTestCase_020989_2);

#define VkglTestCase_020990_1 "dEQP-GLES31.functional.program_interface_query.uniform.re"
#define VkglTestCase_020990_2 "ferenced_by_shader.separable_vertex.default_block.sampler"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020990, VkglTestCase_020990_1, VkglTestCase_020990_2);

#define VkglTestCase_020991_1 "dEQP-GLES31.functional.program_interface_query.uniform.refer"
#define VkglTestCase_020991_2 "enced_by_shader.separable_vertex.default_block.sampler_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020991, VkglTestCase_020991_1, VkglTestCase_020991_2);

#define VkglTestCase_020992_1 "dEQP-GLES31.functional.program_interface_query.uniform.refer"
#define VkglTestCase_020992_2 "enced_by_shader.separable_vertex.default_block.sampler_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020992, VkglTestCase_020992_1, VkglTestCase_020992_2);

#define VkglTestCase_020993_1 "dEQP-GLES31.functional.program_interface_query.uniform.refe"
#define VkglTestCase_020993_2 "renced_by_shader.separable_vertex.default_block.atomic_uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020993, VkglTestCase_020993_1, VkglTestCase_020993_2);

#define VkglTestCase_020994_1 "dEQP-GLES31.functional.program_interface_query.uniform.referen"
#define VkglTestCase_020994_2 "ced_by_shader.separable_vertex.default_block.atomic_uint_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020994, VkglTestCase_020994_1, VkglTestCase_020994_2);

#define VkglTestCase_020995_1 "dEQP-GLES31.functional.program_interface_query.uniform.referen"
#define VkglTestCase_020995_2 "ced_by_shader.separable_vertex.default_block.float_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020995, VkglTestCase_020995_1, VkglTestCase_020995_2);

#define VkglTestCase_020996_1 "dEQP-GLES31.functional.program_interface_query.uniform.referen"
#define VkglTestCase_020996_2 "ced_by_shader.separable_vertex.default_block.float_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020996, VkglTestCase_020996_1, VkglTestCase_020996_2);

#define VkglTestCase_020997_1 "dEQP-GLES31.functional.program_interface_query.uniform.referen"
#define VkglTestCase_020997_2 "ced_by_shader.separable_vertex.default_block.float_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020997, VkglTestCase_020997_1, VkglTestCase_020997_2);

#define VkglTestCase_020998_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenc"
#define VkglTestCase_020998_2 "ed_by_shader.separable_vertex.default_block.float_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020998, VkglTestCase_020998_1, VkglTestCase_020998_2);
