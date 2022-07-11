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

#define VkglTestCase_021012_1 "dEQP-GLES31.functional.program_interface_query.uniform.re"
#define VkglTestCase_021012_2 "ferenced_by_shader.separable_fragment.default_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021012, VkglTestCase_021012_1, VkglTestCase_021012_2);

#define VkglTestCase_021013_1 "dEQP-GLES31.functional.program_interface_query.uniform.refer"
#define VkglTestCase_021013_2 "enced_by_shader.separable_fragment.default_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021013, VkglTestCase_021013_1, VkglTestCase_021013_2);

#define VkglTestCase_021014_1 "dEQP-GLES31.functional.program_interface_query.uniform.refer"
#define VkglTestCase_021014_2 "enced_by_shader.separable_fragment.default_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021014, VkglTestCase_021014_1, VkglTestCase_021014_2);

#define VkglTestCase_021015_1 "dEQP-GLES31.functional.program_interface_query.uniform.ref"
#define VkglTestCase_021015_2 "erenced_by_shader.separable_fragment.default_block.sampler"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021015, VkglTestCase_021015_1, VkglTestCase_021015_2);

#define VkglTestCase_021016_1 "dEQP-GLES31.functional.program_interface_query.uniform.refere"
#define VkglTestCase_021016_2 "nced_by_shader.separable_fragment.default_block.sampler_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021016, VkglTestCase_021016_1, VkglTestCase_021016_2);

#define VkglTestCase_021017_1 "dEQP-GLES31.functional.program_interface_query.uniform.refere"
#define VkglTestCase_021017_2 "nced_by_shader.separable_fragment.default_block.sampler_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021017, VkglTestCase_021017_1, VkglTestCase_021017_2);

#define VkglTestCase_021018_1 "dEQP-GLES31.functional.program_interface_query.uniform.refer"
#define VkglTestCase_021018_2 "enced_by_shader.separable_fragment.default_block.atomic_uint"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021018, VkglTestCase_021018_1, VkglTestCase_021018_2);

#define VkglTestCase_021019_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenc"
#define VkglTestCase_021019_2 "ed_by_shader.separable_fragment.default_block.atomic_uint_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021019, VkglTestCase_021019_1, VkglTestCase_021019_2);

#define VkglTestCase_021020_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenc"
#define VkglTestCase_021020_2 "ed_by_shader.separable_fragment.default_block.float_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021020, VkglTestCase_021020_1, VkglTestCase_021020_2);

#define VkglTestCase_021021_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenc"
#define VkglTestCase_021021_2 "ed_by_shader.separable_fragment.default_block.float_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021021, VkglTestCase_021021_1, VkglTestCase_021021_2);

#define VkglTestCase_021022_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenc"
#define VkglTestCase_021022_2 "ed_by_shader.separable_fragment.default_block.float_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021022, VkglTestCase_021022_1, VkglTestCase_021022_2);

#define VkglTestCase_021023_1 "dEQP-GLES31.functional.program_interface_query.uniform.reference"
#define VkglTestCase_021023_2 "d_by_shader.separable_fragment.default_block.float_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021023, VkglTestCase_021023_1, VkglTestCase_021023_2);
