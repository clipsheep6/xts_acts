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

#define VkglTestCase_019825_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019825_2 "erage.get_error.compute.program_not_active"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019825, VkglTestCase_019825_1, VkglTestCase_019825_2);

#define VkglTestCase_019826_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_019826_2 "age.get_error.compute.invalid_program_query"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019826, VkglTestCase_019826_1, VkglTestCase_019826_2);

#define VkglTestCase_019827_1 "dEQP-GLES31.functional.debug.negative_coverage.ge"
#define VkglTestCase_019827_2 "t_error.compute.invalid_dispatch_compute_indirect"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019827, VkglTestCase_019827_1, VkglTestCase_019827_2);

#define VkglTestCase_019828_1 "dEQP-GLES31.functional.debug.negative_coverage.ge"
#define VkglTestCase_019828_2 "t_error.compute.invalid_maximum_work_group_counts"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019828, VkglTestCase_019828_1, VkglTestCase_019828_2);

#define VkglTestCase_019829_1 "dEQP-GLES31.functional.debug.negative_coverage.g"
#define VkglTestCase_019829_2 "et_error.compute.invalid_maximum_work_group_sizes"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019829, VkglTestCase_019829_1, VkglTestCase_019829_2);

#define VkglTestCase_019830_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019830_2 "e.get_error.compute.invalid_layout_qualifiers"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019830, VkglTestCase_019830_1, VkglTestCase_019830_2);

#define VkglTestCase_019831_1 "dEQP-GLES31.functional.debug.negative_coverage.g"
#define VkglTestCase_019831_2 "et_error.compute.invalid_write_built_in_constants"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019831, VkglTestCase_019831_1, VkglTestCase_019831_2);

#define VkglTestCase_019832_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019832_2 "e.get_error.compute.exceed_uniform_block_limit"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019832, VkglTestCase_019832_1, VkglTestCase_019832_2);

#define VkglTestCase_019833_1 "dEQP-GLES31.functional.debug.negative_coverage.ge"
#define VkglTestCase_019833_2 "t_error.compute.exceed_shader_storage_block_limit"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019833, VkglTestCase_019833_1, VkglTestCase_019833_2);

#define VkglTestCase_019834_1 "dEQP-GLES31.functional.debug.negative_coverage.g"
#define VkglTestCase_019834_2 "et_error.compute.exceed_texture_image_units_limit"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019834, VkglTestCase_019834_1, VkglTestCase_019834_2);

#define VkglTestCase_019835_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_019835_2 ".get_error.compute.exceed_image_uniforms_limit"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019835, VkglTestCase_019835_1, VkglTestCase_019835_2);

#define VkglTestCase_019836_1 "dEQP-GLES31.functional.debug.negative_coverage.g"
#define VkglTestCase_019836_2 "et_error.compute.exceed_shared_memory_size_limit"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019836, VkglTestCase_019836_1, VkglTestCase_019836_2);

#define VkglTestCase_019837_1 "dEQP-GLES31.functional.debug.negative_coverage.g"
#define VkglTestCase_019837_2 "et_error.compute.exceed_uniform_components_limit"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019837, VkglTestCase_019837_1, VkglTestCase_019837_2);

#define VkglTestCase_019838_1 "dEQP-GLES31.functional.debug.negative_coverage.ge"
#define VkglTestCase_019838_2 "t_error.compute.exceed_atomic_counter_buffer_limit"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019838, VkglTestCase_019838_1, VkglTestCase_019838_2);

#define VkglTestCase_019839_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_019839_2 ".get_error.compute.exceed_atomic_counters_limit"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019839, VkglTestCase_019839_1, VkglTestCase_019839_2);
