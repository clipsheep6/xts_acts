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

#define VkglTestCase_018819_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_018819_2 "callbacks.tessellation.single_tessellation_stage"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018819, VkglTestCase_018819_1, VkglTestCase_018819_2);

#define VkglTestCase_018820_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_018820_2 ".callbacks.tessellation.invalid_primitive_mode"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018820, VkglTestCase_018820_1, VkglTestCase_018820_2);

#define VkglTestCase_018821_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_018821_2 ".callbacks.tessellation.tessellation_not_active"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018821, VkglTestCase_018821_1, VkglTestCase_018821_2);

#define VkglTestCase_018822_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_018822_2 "e.callbacks.tessellation.invalid_program_state"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018822, VkglTestCase_018822_1, VkglTestCase_018822_2);

#define VkglTestCase_018823_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018823_2 "erage.callbacks.tessellation.get_programiv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018823, VkglTestCase_018823_1, VkglTestCase_018823_2);

#define VkglTestCase_018824_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_018824_2 ".callbacks.tessellation.invalid_program_queries"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018824, VkglTestCase_018824_1, VkglTestCase_018824_2);

#define VkglTestCase_018825_1 "dEQP-GLES31.functional.debug.negative_coverage.callback"
#define VkglTestCase_018825_2 "s.tessellation.tessellation_control_invalid_vertex_count"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018825, VkglTestCase_018825_1, VkglTestCase_018825_2);
