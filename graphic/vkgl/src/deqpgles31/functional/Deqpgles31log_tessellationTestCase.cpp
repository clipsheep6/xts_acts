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

#define VkglTestCase_019317_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019317_2 "ge.log.tessellation.single_tessellation_stage"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019317, VkglTestCase_019317_1, VkglTestCase_019317_2);

#define VkglTestCase_019318_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_019318_2 "age.log.tessellation.invalid_primitive_mode"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019318, VkglTestCase_019318_1, VkglTestCase_019318_2);

#define VkglTestCase_019319_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_019319_2 "age.log.tessellation.tessellation_not_active"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019319, VkglTestCase_019319_1, VkglTestCase_019319_2);

#define VkglTestCase_019320_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019320_2 "rage.log.tessellation.invalid_program_state"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019320, VkglTestCase_019320_1, VkglTestCase_019320_2);

#define VkglTestCase_019321_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019321_2 "coverage.log.tessellation.get_programiv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019321, VkglTestCase_019321_1, VkglTestCase_019321_2);

#define VkglTestCase_019322_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_019322_2 "age.log.tessellation.invalid_program_queries"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019322, VkglTestCase_019322_1, VkglTestCase_019322_2);

#define VkglTestCase_019323_1 "dEQP-GLES31.functional.debug.negative_coverage.log.t"
#define VkglTestCase_019323_2 "essellation.tessellation_control_invalid_vertex_count"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019323, VkglTestCase_019323_1, VkglTestCase_019323_2);
