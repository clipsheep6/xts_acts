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

#define VkglTestCase_019820_1 "dEQP-GLES31.functional.debug.negative_coverage.get_"
#define VkglTestCase_019820_2 "error.oes_sample_variables.write_to_read_only_types"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019820, VkglTestCase_019820_1, VkglTestCase_019820_2);

#define VkglTestCase_019821_1 "dEQP-GLES31.functional.debug.negative_coverage.get_error.oes"
#define VkglTestCase_019821_2 "_sample_variables.access_built_in_types_inside_other_shaders"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019821, VkglTestCase_019821_1, VkglTestCase_019821_2);

#define VkglTestCase_019822_1 "dEQP-GLES31.functional.debug.negative_coverage.get_err"
#define VkglTestCase_019822_2 "or.oes_sample_variables.index_outside_sample_mask_range"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019822, VkglTestCase_019822_1, VkglTestCase_019822_2);

#define VkglTestCase_019823_1 "dEQP-GLES31.functional.debug.negative_coverage.get_error.o"
#define VkglTestCase_019823_2 "es_sample_variables.access_built_in_types_without_extension"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019823, VkglTestCase_019823_1, VkglTestCase_019823_2);

#define VkglTestCase_019824_1 "dEQP-GLES31.functional.debug.negative_coverage.get_"
#define VkglTestCase_019824_2 "error.oes_sample_variables.redeclare_built_in_types"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019824, VkglTestCase_019824_1, VkglTestCase_019824_2);
