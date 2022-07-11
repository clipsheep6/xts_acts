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

#define VkglTestCase_021350_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_b"
#define VkglTestCase_021350_2 "y_shader.vertex_tess_geo_fragment_only_fragment.default_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021350, VkglTestCase_021350_1, VkglTestCase_021350_2);

#define VkglTestCase_021351_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_s"
#define VkglTestCase_021351_2 "hader.vertex_tess_geo_fragment_only_fragment.default_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021351, VkglTestCase_021351_1, VkglTestCase_021351_2);

#define VkglTestCase_021352_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_s"
#define VkglTestCase_021352_2 "hader.vertex_tess_geo_fragment_only_fragment.default_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021352, VkglTestCase_021352_1, VkglTestCase_021352_2);

#define VkglTestCase_021353_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by"
#define VkglTestCase_021353_2 "_shader.vertex_tess_geo_fragment_only_fragment.default_block.sampler"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021353, VkglTestCase_021353_1, VkglTestCase_021353_2);

#define VkglTestCase_021354_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_sh"
#define VkglTestCase_021354_2 "ader.vertex_tess_geo_fragment_only_fragment.default_block.sampler_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021354, VkglTestCase_021354_1, VkglTestCase_021354_2);

#define VkglTestCase_021355_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_sh"
#define VkglTestCase_021355_2 "ader.vertex_tess_geo_fragment_only_fragment.default_block.sampler_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021355, VkglTestCase_021355_1, VkglTestCase_021355_2);

#define VkglTestCase_021356_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_s"
#define VkglTestCase_021356_2 "hader.vertex_tess_geo_fragment_only_fragment.default_block.atomic_uint"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021356, VkglTestCase_021356_1, VkglTestCase_021356_2);

#define VkglTestCase_021357_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_shad"
#define VkglTestCase_021357_2 "er.vertex_tess_geo_fragment_only_fragment.default_block.atomic_uint_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021357, VkglTestCase_021357_1, VkglTestCase_021357_2);
