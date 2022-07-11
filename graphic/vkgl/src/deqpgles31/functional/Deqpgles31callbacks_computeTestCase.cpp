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
#include "../ActsDeqpgles310019TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_018831_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018831_2 "erage.callbacks.compute.program_not_active"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018831, VkglTestCase_018831_1, VkglTestCase_018831_2);

#define VkglTestCase_018832_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_018832_2 "age.callbacks.compute.invalid_program_query"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018832, VkglTestCase_018832_1, VkglTestCase_018832_2);

#define VkglTestCase_018833_1 "dEQP-GLES31.functional.debug.negative_coverage.ca"
#define VkglTestCase_018833_2 "llbacks.compute.invalid_dispatch_compute_indirect"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018833, VkglTestCase_018833_1, VkglTestCase_018833_2);

#define VkglTestCase_018834_1 "dEQP-GLES31.functional.debug.negative_coverage.ca"
#define VkglTestCase_018834_2 "llbacks.compute.invalid_maximum_work_group_counts"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018834, VkglTestCase_018834_1, VkglTestCase_018834_2);

#define VkglTestCase_018835_1 "dEQP-GLES31.functional.debug.negative_coverage.c"
#define VkglTestCase_018835_2 "allbacks.compute.invalid_maximum_work_group_sizes"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018835, VkglTestCase_018835_1, VkglTestCase_018835_2);

#define VkglTestCase_018836_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_018836_2 "e.callbacks.compute.invalid_layout_qualifiers"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018836, VkglTestCase_018836_1, VkglTestCase_018836_2);

#define VkglTestCase_018837_1 "dEQP-GLES31.functional.debug.negative_coverage.c"
#define VkglTestCase_018837_2 "allbacks.compute.invalid_write_built_in_constants"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018837, VkglTestCase_018837_1, VkglTestCase_018837_2);

#define VkglTestCase_018838_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_018838_2 "e.callbacks.compute.exceed_uniform_block_limit"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018838, VkglTestCase_018838_1, VkglTestCase_018838_2);

#define VkglTestCase_018839_1 "dEQP-GLES31.functional.debug.negative_coverage.ca"
#define VkglTestCase_018839_2 "llbacks.compute.exceed_shader_storage_block_limit"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018839, VkglTestCase_018839_1, VkglTestCase_018839_2);

#define VkglTestCase_018840_1 "dEQP-GLES31.functional.debug.negative_coverage.c"
#define VkglTestCase_018840_2 "allbacks.compute.exceed_texture_image_units_limit"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018840, VkglTestCase_018840_1, VkglTestCase_018840_2);

#define VkglTestCase_018841_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_018841_2 ".callbacks.compute.exceed_image_uniforms_limit"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018841, VkglTestCase_018841_1, VkglTestCase_018841_2);

#define VkglTestCase_018842_1 "dEQP-GLES31.functional.debug.negative_coverage.c"
#define VkglTestCase_018842_2 "allbacks.compute.exceed_shared_memory_size_limit"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018842, VkglTestCase_018842_1, VkglTestCase_018842_2);

#define VkglTestCase_018843_1 "dEQP-GLES31.functional.debug.negative_coverage.c"
#define VkglTestCase_018843_2 "allbacks.compute.exceed_uniform_components_limit"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018843, VkglTestCase_018843_1, VkglTestCase_018843_2);

#define VkglTestCase_018844_1 "dEQP-GLES31.functional.debug.negative_coverage.ca"
#define VkglTestCase_018844_2 "llbacks.compute.exceed_atomic_counter_buffer_limit"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018844, VkglTestCase_018844_1, VkglTestCase_018844_2);

#define VkglTestCase_018845_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_018845_2 ".callbacks.compute.exceed_atomic_counters_limit"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018845, VkglTestCase_018845_1, VkglTestCase_018845_2);
