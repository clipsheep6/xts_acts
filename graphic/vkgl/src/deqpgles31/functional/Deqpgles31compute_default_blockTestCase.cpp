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

#define VkglTestCase_020962_1 "dEQP-GLES31.functional.program_interface_query.unif"
#define VkglTestCase_020962_2 "orm.referenced_by_shader.compute.default_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020962, VkglTestCase_020962_1, VkglTestCase_020962_2);

#define VkglTestCase_020963_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020963_2 ".referenced_by_shader.compute.default_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020963, VkglTestCase_020963_1, VkglTestCase_020963_2);

#define VkglTestCase_020964_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020964_2 "referenced_by_shader.compute.default_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020964, VkglTestCase_020964_1, VkglTestCase_020964_2);

#define VkglTestCase_020965_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020965_2 "rm.referenced_by_shader.compute.default_block.sampler"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020965, VkglTestCase_020965_1, VkglTestCase_020965_2);

#define VkglTestCase_020966_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020966_2 "referenced_by_shader.compute.default_block.sampler_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020966, VkglTestCase_020966_1, VkglTestCase_020966_2);

#define VkglTestCase_020967_1 "dEQP-GLES31.functional.program_interface_query.uniform.r"
#define VkglTestCase_020967_2 "eferenced_by_shader.compute.default_block.sampler_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020967, VkglTestCase_020967_1, VkglTestCase_020967_2);

#define VkglTestCase_020968_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020968_2 ".referenced_by_shader.compute.default_block.atomic_uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020968, VkglTestCase_020968_1, VkglTestCase_020968_2);

#define VkglTestCase_020969_1 "dEQP-GLES31.functional.program_interface_query.uniform.re"
#define VkglTestCase_020969_2 "ferenced_by_shader.compute.default_block.atomic_uint_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020969, VkglTestCase_020969_1, VkglTestCase_020969_2);

#define VkglTestCase_020970_1 "dEQP-GLES31.functional.program_interface_query.uniform.ref"
#define VkglTestCase_020970_2 "erenced_by_shader.compute.default_block.float_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020970, VkglTestCase_020970_1, VkglTestCase_020970_2);

#define VkglTestCase_020971_1 "dEQP-GLES31.functional.program_interface_query.uniform.ref"
#define VkglTestCase_020971_2 "erenced_by_shader.compute.default_block.float_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020971, VkglTestCase_020971_1, VkglTestCase_020971_2);

#define VkglTestCase_020972_1 "dEQP-GLES31.functional.program_interface_query.uniform.re"
#define VkglTestCase_020972_2 "ferenced_by_shader.compute.default_block.float_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020972, VkglTestCase_020972_1, VkglTestCase_020972_2);

#define VkglTestCase_020973_1 "dEQP-GLES31.functional.program_interface_query.uniform.ref"
#define VkglTestCase_020973_2 "erenced_by_shader.compute.default_block.float_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020973, VkglTestCase_020973_1, VkglTestCase_020973_2);
