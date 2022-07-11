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

#define VkglTestCase_021299_1 "dEQP-GLES31.functional.program_interface_query.uniform.referen"
#define VkglTestCase_021299_2 "ced_by_shader.vertex_geo_fragment_only_geo.default_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021299, VkglTestCase_021299_1, VkglTestCase_021299_2);

#define VkglTestCase_021300_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced"
#define VkglTestCase_021300_2 "_by_shader.vertex_geo_fragment_only_geo.default_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021300, VkglTestCase_021300_1, VkglTestCase_021300_2);

#define VkglTestCase_021301_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced"
#define VkglTestCase_021301_2 "_by_shader.vertex_geo_fragment_only_geo.default_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021301, VkglTestCase_021301_1, VkglTestCase_021301_2);

#define VkglTestCase_021302_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenc"
#define VkglTestCase_021302_2 "ed_by_shader.vertex_geo_fragment_only_geo.default_block.sampler"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021302, VkglTestCase_021302_1, VkglTestCase_021302_2);

#define VkglTestCase_021303_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_"
#define VkglTestCase_021303_2 "by_shader.vertex_geo_fragment_only_geo.default_block.sampler_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021303, VkglTestCase_021303_1, VkglTestCase_021303_2);

#define VkglTestCase_021304_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_"
#define VkglTestCase_021304_2 "by_shader.vertex_geo_fragment_only_geo.default_block.sampler_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021304, VkglTestCase_021304_1, VkglTestCase_021304_2);

#define VkglTestCase_021305_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced"
#define VkglTestCase_021305_2 "_by_shader.vertex_geo_fragment_only_geo.default_block.atomic_uint"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021305, VkglTestCase_021305_1, VkglTestCase_021305_2);

#define VkglTestCase_021306_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by"
#define VkglTestCase_021306_2 "_shader.vertex_geo_fragment_only_geo.default_block.atomic_uint_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021306, VkglTestCase_021306_1, VkglTestCase_021306_2);
