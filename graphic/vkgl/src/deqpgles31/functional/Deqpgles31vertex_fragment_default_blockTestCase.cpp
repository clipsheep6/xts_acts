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

#define VkglTestCase_021112_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_021112_2 "referenced_by_shader.vertex_fragment.default_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021112, VkglTestCase_021112_1, VkglTestCase_021112_2);

#define VkglTestCase_021113_1 "dEQP-GLES31.functional.program_interface_query.uniform.ref"
#define VkglTestCase_021113_2 "erenced_by_shader.vertex_fragment.default_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021113, VkglTestCase_021113_1, VkglTestCase_021113_2);

#define VkglTestCase_021114_1 "dEQP-GLES31.functional.program_interface_query.uniform.refe"
#define VkglTestCase_021114_2 "renced_by_shader.vertex_fragment.default_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021114, VkglTestCase_021114_1, VkglTestCase_021114_2);

#define VkglTestCase_021115_1 "dEQP-GLES31.functional.program_interface_query.uniform.r"
#define VkglTestCase_021115_2 "eferenced_by_shader.vertex_fragment.default_block.sampler"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021115, VkglTestCase_021115_1, VkglTestCase_021115_2);

#define VkglTestCase_021116_1 "dEQP-GLES31.functional.program_interface_query.uniform.refe"
#define VkglTestCase_021116_2 "renced_by_shader.vertex_fragment.default_block.sampler_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021116, VkglTestCase_021116_1, VkglTestCase_021116_2);

#define VkglTestCase_021117_1 "dEQP-GLES31.functional.program_interface_query.uniform.refer"
#define VkglTestCase_021117_2 "enced_by_shader.vertex_fragment.default_block.sampler_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021117, VkglTestCase_021117_1, VkglTestCase_021117_2);

#define VkglTestCase_021118_1 "dEQP-GLES31.functional.program_interface_query.uniform.ref"
#define VkglTestCase_021118_2 "erenced_by_shader.vertex_fragment.default_block.atomic_uint"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021118, VkglTestCase_021118_1, VkglTestCase_021118_2);

#define VkglTestCase_021119_1 "dEQP-GLES31.functional.program_interface_query.uniform.refere"
#define VkglTestCase_021119_2 "nced_by_shader.vertex_fragment.default_block.atomic_uint_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021119, VkglTestCase_021119_1, VkglTestCase_021119_2);
