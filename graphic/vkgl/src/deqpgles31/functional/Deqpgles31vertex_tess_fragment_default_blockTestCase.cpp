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

#define VkglTestCase_021163_1 "dEQP-GLES31.functional.program_interface_query.uniform.ref"
#define VkglTestCase_021163_2 "erenced_by_shader.vertex_tess_fragment.default_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021163, VkglTestCase_021163_1, VkglTestCase_021163_2);

#define VkglTestCase_021164_1 "dEQP-GLES31.functional.program_interface_query.uniform.refere"
#define VkglTestCase_021164_2 "nced_by_shader.vertex_tess_fragment.default_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021164, VkglTestCase_021164_1, VkglTestCase_021164_2);

#define VkglTestCase_021165_1 "dEQP-GLES31.functional.program_interface_query.uniform.refere"
#define VkglTestCase_021165_2 "nced_by_shader.vertex_tess_fragment.default_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021165, VkglTestCase_021165_1, VkglTestCase_021165_2);

#define VkglTestCase_021166_1 "dEQP-GLES31.functional.program_interface_query.uniform.refe"
#define VkglTestCase_021166_2 "renced_by_shader.vertex_tess_fragment.default_block.sampler"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021166, VkglTestCase_021166_1, VkglTestCase_021166_2);

#define VkglTestCase_021167_1 "dEQP-GLES31.functional.program_interface_query.uniform.referen"
#define VkglTestCase_021167_2 "ced_by_shader.vertex_tess_fragment.default_block.sampler_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021167, VkglTestCase_021167_1, VkglTestCase_021167_2);

#define VkglTestCase_021168_1 "dEQP-GLES31.functional.program_interface_query.uniform.referen"
#define VkglTestCase_021168_2 "ced_by_shader.vertex_tess_fragment.default_block.sampler_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021168, VkglTestCase_021168_1, VkglTestCase_021168_2);

#define VkglTestCase_021169_1 "dEQP-GLES31.functional.program_interface_query.uniform.refere"
#define VkglTestCase_021169_2 "nced_by_shader.vertex_tess_fragment.default_block.atomic_uint"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021169, VkglTestCase_021169_1, VkglTestCase_021169_2);

#define VkglTestCase_021170_1 "dEQP-GLES31.functional.program_interface_query.uniform.reference"
#define VkglTestCase_021170_2 "d_by_shader.vertex_tess_fragment.default_block.atomic_uint_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021170, VkglTestCase_021170_1, VkglTestCase_021170_2);
