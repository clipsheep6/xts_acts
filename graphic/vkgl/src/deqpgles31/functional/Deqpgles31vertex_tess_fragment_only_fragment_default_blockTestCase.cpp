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

#define VkglTestCase_021197_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced"
#define VkglTestCase_021197_2 "_by_shader.vertex_tess_fragment_only_fragment.default_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021197, VkglTestCase_021197_1, VkglTestCase_021197_2);

#define VkglTestCase_021198_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by"
#define VkglTestCase_021198_2 "_shader.vertex_tess_fragment_only_fragment.default_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021198, VkglTestCase_021198_1, VkglTestCase_021198_2);

#define VkglTestCase_021199_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by"
#define VkglTestCase_021199_2 "_shader.vertex_tess_fragment_only_fragment.default_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021199, VkglTestCase_021199_1, VkglTestCase_021199_2);

#define VkglTestCase_021200_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_"
#define VkglTestCase_021200_2 "by_shader.vertex_tess_fragment_only_fragment.default_block.sampler"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021200, VkglTestCase_021200_1, VkglTestCase_021200_2);

#define VkglTestCase_021201_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_"
#define VkglTestCase_021201_2 "shader.vertex_tess_fragment_only_fragment.default_block.sampler_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021201, VkglTestCase_021201_1, VkglTestCase_021201_2);

#define VkglTestCase_021202_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_"
#define VkglTestCase_021202_2 "shader.vertex_tess_fragment_only_fragment.default_block.sampler_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021202, VkglTestCase_021202_1, VkglTestCase_021202_2);

#define VkglTestCase_021203_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by"
#define VkglTestCase_021203_2 "_shader.vertex_tess_fragment_only_fragment.default_block.atomic_uint"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021203, VkglTestCase_021203_1, VkglTestCase_021203_2);

#define VkglTestCase_021204_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_sh"
#define VkglTestCase_021204_2 "ader.vertex_tess_fragment_only_fragment.default_block.atomic_uint_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021204, VkglTestCase_021204_1, VkglTestCase_021204_2);
