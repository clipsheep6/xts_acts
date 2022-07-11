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
#include "../ActsDeqpgles310020TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_019329_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019329_2 "coverage.log.compute.program_not_active"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019329, VkglTestCase_019329_1, VkglTestCase_019329_2);

#define VkglTestCase_019330_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019330_2 "verage.log.compute.invalid_program_query"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019330, VkglTestCase_019330_1, VkglTestCase_019330_2);

#define VkglTestCase_019331_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_019331_2 ".log.compute.invalid_dispatch_compute_indirect"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019331, VkglTestCase_019331_1, VkglTestCase_019331_2);

#define VkglTestCase_019332_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_019332_2 ".log.compute.invalid_maximum_work_group_counts"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019332, VkglTestCase_019332_1, VkglTestCase_019332_2);

#define VkglTestCase_019333_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019333_2 "e.log.compute.invalid_maximum_work_group_sizes"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019333, VkglTestCase_019333_1, VkglTestCase_019333_2);

#define VkglTestCase_019334_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019334_2 "rage.log.compute.invalid_layout_qualifiers"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019334, VkglTestCase_019334_1, VkglTestCase_019334_2);

#define VkglTestCase_019335_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019335_2 "e.log.compute.invalid_write_built_in_constants"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019335, VkglTestCase_019335_1, VkglTestCase_019335_2);

#define VkglTestCase_019336_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019336_2 "rage.log.compute.exceed_uniform_block_limit"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019336, VkglTestCase_019336_1, VkglTestCase_019336_2);

#define VkglTestCase_019337_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_019337_2 ".log.compute.exceed_shader_storage_block_limit"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019337, VkglTestCase_019337_1, VkglTestCase_019337_2);

#define VkglTestCase_019338_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019338_2 "e.log.compute.exceed_texture_image_units_limit"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019338, VkglTestCase_019338_1, VkglTestCase_019338_2);

#define VkglTestCase_019339_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_019339_2 "age.log.compute.exceed_image_uniforms_limit"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019339, VkglTestCase_019339_1, VkglTestCase_019339_2);

#define VkglTestCase_019340_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019340_2 "e.log.compute.exceed_shared_memory_size_limit"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019340, VkglTestCase_019340_1, VkglTestCase_019340_2);

#define VkglTestCase_019341_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019341_2 "e.log.compute.exceed_uniform_components_limit"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019341, VkglTestCase_019341_1, VkglTestCase_019341_2);

#define VkglTestCase_019342_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_019342_2 ".log.compute.exceed_atomic_counter_buffer_limit"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019342, VkglTestCase_019342_1, VkglTestCase_019342_2);

#define VkglTestCase_019343_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_019343_2 "age.log.compute.exceed_atomic_counters_limit"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019343, VkglTestCase_019343_1, VkglTestCase_019343_2);
