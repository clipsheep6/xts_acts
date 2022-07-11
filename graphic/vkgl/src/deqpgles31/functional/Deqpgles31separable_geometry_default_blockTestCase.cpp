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

#define VkglTestCase_021087_1 "dEQP-GLES31.functional.program_interface_query.uniform.re"
#define VkglTestCase_021087_2 "ferenced_by_shader.separable_geometry.default_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021087, VkglTestCase_021087_1, VkglTestCase_021087_2);

#define VkglTestCase_021088_1 "dEQP-GLES31.functional.program_interface_query.uniform.refer"
#define VkglTestCase_021088_2 "enced_by_shader.separable_geometry.default_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021088, VkglTestCase_021088_1, VkglTestCase_021088_2);

#define VkglTestCase_021089_1 "dEQP-GLES31.functional.program_interface_query.uniform.refer"
#define VkglTestCase_021089_2 "enced_by_shader.separable_geometry.default_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021089, VkglTestCase_021089_1, VkglTestCase_021089_2);

#define VkglTestCase_021090_1 "dEQP-GLES31.functional.program_interface_query.uniform.ref"
#define VkglTestCase_021090_2 "erenced_by_shader.separable_geometry.default_block.sampler"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021090, VkglTestCase_021090_1, VkglTestCase_021090_2);

#define VkglTestCase_021091_1 "dEQP-GLES31.functional.program_interface_query.uniform.refere"
#define VkglTestCase_021091_2 "nced_by_shader.separable_geometry.default_block.sampler_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021091, VkglTestCase_021091_1, VkglTestCase_021091_2);

#define VkglTestCase_021092_1 "dEQP-GLES31.functional.program_interface_query.uniform.refere"
#define VkglTestCase_021092_2 "nced_by_shader.separable_geometry.default_block.sampler_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021092, VkglTestCase_021092_1, VkglTestCase_021092_2);

#define VkglTestCase_021093_1 "dEQP-GLES31.functional.program_interface_query.uniform.refer"
#define VkglTestCase_021093_2 "enced_by_shader.separable_geometry.default_block.atomic_uint"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021093, VkglTestCase_021093_1, VkglTestCase_021093_2);

#define VkglTestCase_021094_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenc"
#define VkglTestCase_021094_2 "ed_by_shader.separable_geometry.default_block.atomic_uint_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021094, VkglTestCase_021094_1, VkglTestCase_021094_2);

#define VkglTestCase_021095_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenc"
#define VkglTestCase_021095_2 "ed_by_shader.separable_geometry.default_block.float_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021095, VkglTestCase_021095_1, VkglTestCase_021095_2);

#define VkglTestCase_021096_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenc"
#define VkglTestCase_021096_2 "ed_by_shader.separable_geometry.default_block.float_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021096, VkglTestCase_021096_1, VkglTestCase_021096_2);

#define VkglTestCase_021097_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenc"
#define VkglTestCase_021097_2 "ed_by_shader.separable_geometry.default_block.float_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021097, VkglTestCase_021097_1, VkglTestCase_021097_2);

#define VkglTestCase_021098_1 "dEQP-GLES31.functional.program_interface_query.uniform.reference"
#define VkglTestCase_021098_2 "d_by_shader.separable_geometry.default_block.float_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021098, VkglTestCase_021098_1, VkglTestCase_021098_2);
