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

#define VkglTestCase_021282_1 "dEQP-GLES31.functional.program_interface_query.uniform.reference"
#define VkglTestCase_021282_2 "d_by_shader.vertex_geo_fragment_only_fragment.default_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021282, VkglTestCase_021282_1, VkglTestCase_021282_2);

#define VkglTestCase_021283_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_b"
#define VkglTestCase_021283_2 "y_shader.vertex_geo_fragment_only_fragment.default_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021283, VkglTestCase_021283_1, VkglTestCase_021283_2);

#define VkglTestCase_021284_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by"
#define VkglTestCase_021284_2 "_shader.vertex_geo_fragment_only_fragment.default_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021284, VkglTestCase_021284_1, VkglTestCase_021284_2);

#define VkglTestCase_021285_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced"
#define VkglTestCase_021285_2 "_by_shader.vertex_geo_fragment_only_fragment.default_block.sampler"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021285, VkglTestCase_021285_1, VkglTestCase_021285_2);

#define VkglTestCase_021286_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by"
#define VkglTestCase_021286_2 "_shader.vertex_geo_fragment_only_fragment.default_block.sampler_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021286, VkglTestCase_021286_1, VkglTestCase_021286_2);

#define VkglTestCase_021287_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_"
#define VkglTestCase_021287_2 "shader.vertex_geo_fragment_only_fragment.default_block.sampler_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021287, VkglTestCase_021287_1, VkglTestCase_021287_2);

#define VkglTestCase_021288_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_b"
#define VkglTestCase_021288_2 "y_shader.vertex_geo_fragment_only_fragment.default_block.atomic_uint"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021288, VkglTestCase_021288_1, VkglTestCase_021288_2);

#define VkglTestCase_021289_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_s"
#define VkglTestCase_021289_2 "hader.vertex_geo_fragment_only_fragment.default_block.atomic_uint_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021289, VkglTestCase_021289_1, VkglTestCase_021289_2);
