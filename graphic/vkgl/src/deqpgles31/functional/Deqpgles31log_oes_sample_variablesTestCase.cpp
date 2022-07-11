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

#define VkglTestCase_019324_1 "dEQP-GLES31.functional.debug.negative_coverage.l"
#define VkglTestCase_019324_2 "og.oes_sample_variables.write_to_read_only_types"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019324, VkglTestCase_019324_1, VkglTestCase_019324_2);

#define VkglTestCase_019325_1 "dEQP-GLES31.functional.debug.negative_coverage.log.oes_sa"
#define VkglTestCase_019325_2 "mple_variables.access_built_in_types_inside_other_shaders"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019325, VkglTestCase_019325_1, VkglTestCase_019325_2);

#define VkglTestCase_019326_1 "dEQP-GLES31.functional.debug.negative_coverage.log."
#define VkglTestCase_019326_2 "oes_sample_variables.index_outside_sample_mask_range"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019326, VkglTestCase_019326_1, VkglTestCase_019326_2);

#define VkglTestCase_019327_1 "dEQP-GLES31.functional.debug.negative_coverage.log.oes_"
#define VkglTestCase_019327_2 "sample_variables.access_built_in_types_without_extension"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019327, VkglTestCase_019327_1, VkglTestCase_019327_2);

#define VkglTestCase_019328_1 "dEQP-GLES31.functional.debug.negative_coverage.l"
#define VkglTestCase_019328_2 "og.oes_sample_variables.redeclare_built_in_types"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019328, VkglTestCase_019328_1, VkglTestCase_019328_2);
