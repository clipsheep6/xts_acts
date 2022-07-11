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

#define VkglTestCase_021146_1 "dEQP-GLES31.functional.program_interface_query.uniform.referen"
#define VkglTestCase_021146_2 "ced_by_shader.vertex_fragment_only_fragment.default_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021146, VkglTestCase_021146_1, VkglTestCase_021146_2);

#define VkglTestCase_021147_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced"
#define VkglTestCase_021147_2 "_by_shader.vertex_fragment_only_fragment.default_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021147, VkglTestCase_021147_1, VkglTestCase_021147_2);

#define VkglTestCase_021148_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_"
#define VkglTestCase_021148_2 "by_shader.vertex_fragment_only_fragment.default_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021148, VkglTestCase_021148_1, VkglTestCase_021148_2);

#define VkglTestCase_021149_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenc"
#define VkglTestCase_021149_2 "ed_by_shader.vertex_fragment_only_fragment.default_block.sampler"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021149, VkglTestCase_021149_1, VkglTestCase_021149_2);

#define VkglTestCase_021150_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_"
#define VkglTestCase_021150_2 "by_shader.vertex_fragment_only_fragment.default_block.sampler_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021150, VkglTestCase_021150_1, VkglTestCase_021150_2);

#define VkglTestCase_021151_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_b"
#define VkglTestCase_021151_2 "y_shader.vertex_fragment_only_fragment.default_block.sampler_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021151, VkglTestCase_021151_1, VkglTestCase_021151_2);

#define VkglTestCase_021152_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced"
#define VkglTestCase_021152_2 "_by_shader.vertex_fragment_only_fragment.default_block.atomic_uint"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021152, VkglTestCase_021152_1, VkglTestCase_021152_2);

#define VkglTestCase_021153_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by"
#define VkglTestCase_021153_2 "_shader.vertex_fragment_only_fragment.default_block.atomic_uint_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021153, VkglTestCase_021153_1, VkglTestCase_021153_2);
