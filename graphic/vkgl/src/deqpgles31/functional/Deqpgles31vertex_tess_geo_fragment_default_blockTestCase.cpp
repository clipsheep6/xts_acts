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

#define VkglTestCase_021316_1 "dEQP-GLES31.functional.program_interface_query.uniform.refer"
#define VkglTestCase_021316_2 "enced_by_shader.vertex_tess_geo_fragment.default_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021316, VkglTestCase_021316_1, VkglTestCase_021316_2);

#define VkglTestCase_021317_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenc"
#define VkglTestCase_021317_2 "ed_by_shader.vertex_tess_geo_fragment.default_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021317, VkglTestCase_021317_1, VkglTestCase_021317_2);

#define VkglTestCase_021318_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenc"
#define VkglTestCase_021318_2 "ed_by_shader.vertex_tess_geo_fragment.default_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021318, VkglTestCase_021318_1, VkglTestCase_021318_2);

#define VkglTestCase_021319_1 "dEQP-GLES31.functional.program_interface_query.uniform.refere"
#define VkglTestCase_021319_2 "nced_by_shader.vertex_tess_geo_fragment.default_block.sampler"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021319, VkglTestCase_021319_1, VkglTestCase_021319_2);

#define VkglTestCase_021320_1 "dEQP-GLES31.functional.program_interface_query.uniform.reference"
#define VkglTestCase_021320_2 "d_by_shader.vertex_tess_geo_fragment.default_block.sampler_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021320, VkglTestCase_021320_1, VkglTestCase_021320_2);

#define VkglTestCase_021321_1 "dEQP-GLES31.functional.program_interface_query.uniform.reference"
#define VkglTestCase_021321_2 "d_by_shader.vertex_tess_geo_fragment.default_block.sampler_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021321, VkglTestCase_021321_1, VkglTestCase_021321_2);

#define VkglTestCase_021322_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenc"
#define VkglTestCase_021322_2 "ed_by_shader.vertex_tess_geo_fragment.default_block.atomic_uint"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021322, VkglTestCase_021322_1, VkglTestCase_021322_2);

#define VkglTestCase_021323_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_"
#define VkglTestCase_021323_2 "by_shader.vertex_tess_geo_fragment.default_block.atomic_uint_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021323, VkglTestCase_021323_1, VkglTestCase_021323_2);
