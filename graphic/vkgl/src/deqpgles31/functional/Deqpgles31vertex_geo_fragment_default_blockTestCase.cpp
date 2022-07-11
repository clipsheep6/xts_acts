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

#define VkglTestCase_021248_1 "dEQP-GLES31.functional.program_interface_query.uniform.re"
#define VkglTestCase_021248_2 "ferenced_by_shader.vertex_geo_fragment.default_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021248, VkglTestCase_021248_1, VkglTestCase_021248_2);

#define VkglTestCase_021249_1 "dEQP-GLES31.functional.program_interface_query.uniform.refer"
#define VkglTestCase_021249_2 "enced_by_shader.vertex_geo_fragment.default_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021249, VkglTestCase_021249_1, VkglTestCase_021249_2);

#define VkglTestCase_021250_1 "dEQP-GLES31.functional.program_interface_query.uniform.refere"
#define VkglTestCase_021250_2 "nced_by_shader.vertex_geo_fragment.default_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021250, VkglTestCase_021250_1, VkglTestCase_021250_2);

#define VkglTestCase_021251_1 "dEQP-GLES31.functional.program_interface_query.uniform.ref"
#define VkglTestCase_021251_2 "erenced_by_shader.vertex_geo_fragment.default_block.sampler"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021251, VkglTestCase_021251_1, VkglTestCase_021251_2);

#define VkglTestCase_021252_1 "dEQP-GLES31.functional.program_interface_query.uniform.refere"
#define VkglTestCase_021252_2 "nced_by_shader.vertex_geo_fragment.default_block.sampler_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021252, VkglTestCase_021252_1, VkglTestCase_021252_2);

#define VkglTestCase_021253_1 "dEQP-GLES31.functional.program_interface_query.uniform.referen"
#define VkglTestCase_021253_2 "ced_by_shader.vertex_geo_fragment.default_block.sampler_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021253, VkglTestCase_021253_1, VkglTestCase_021253_2);

#define VkglTestCase_021254_1 "dEQP-GLES31.functional.program_interface_query.uniform.refer"
#define VkglTestCase_021254_2 "enced_by_shader.vertex_geo_fragment.default_block.atomic_uint"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021254, VkglTestCase_021254_1, VkglTestCase_021254_2);

#define VkglTestCase_021255_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenc"
#define VkglTestCase_021255_2 "ed_by_shader.vertex_geo_fragment.default_block.atomic_uint_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021255, VkglTestCase_021255_1, VkglTestCase_021255_2);
