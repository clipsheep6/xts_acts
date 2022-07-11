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

#define VkglTestCase_019813_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_019813_2 "get_error.tessellation.single_tessellation_stage"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019813, VkglTestCase_019813_1, VkglTestCase_019813_2);

#define VkglTestCase_019814_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_019814_2 ".get_error.tessellation.invalid_primitive_mode"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019814, VkglTestCase_019814_1, VkglTestCase_019814_2);

#define VkglTestCase_019815_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_019815_2 ".get_error.tessellation.tessellation_not_active"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019815, VkglTestCase_019815_1, VkglTestCase_019815_2);

#define VkglTestCase_019816_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019816_2 "e.get_error.tessellation.invalid_program_state"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019816, VkglTestCase_019816_1, VkglTestCase_019816_2);

#define VkglTestCase_019817_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019817_2 "erage.get_error.tessellation.get_programiv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019817, VkglTestCase_019817_1, VkglTestCase_019817_2);

#define VkglTestCase_019818_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_019818_2 ".get_error.tessellation.invalid_program_queries"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019818, VkglTestCase_019818_1, VkglTestCase_019818_2);

#define VkglTestCase_019819_1 "dEQP-GLES31.functional.debug.negative_coverage.get_erro"
#define VkglTestCase_019819_2 "r.tessellation.tessellation_control_invalid_vertex_count"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019819, VkglTestCase_019819_1, VkglTestCase_019819_2);
