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

#define VkglTestCase_018826_1 "dEQP-GLES31.functional.debug.negative_coverage.call"
#define VkglTestCase_018826_2 "backs.oes_sample_variables.write_to_read_only_types"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018826, VkglTestCase_018826_1, VkglTestCase_018826_2);

#define VkglTestCase_018827_1 "dEQP-GLES31.functional.debug.negative_coverage.callbacks.oes"
#define VkglTestCase_018827_2 "_sample_variables.access_built_in_types_inside_other_shaders"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018827, VkglTestCase_018827_1, VkglTestCase_018827_2);

#define VkglTestCase_018828_1 "dEQP-GLES31.functional.debug.negative_coverage.callbac"
#define VkglTestCase_018828_2 "ks.oes_sample_variables.index_outside_sample_mask_range"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018828, VkglTestCase_018828_1, VkglTestCase_018828_2);

#define VkglTestCase_018829_1 "dEQP-GLES31.functional.debug.negative_coverage.callbacks.o"
#define VkglTestCase_018829_2 "es_sample_variables.access_built_in_types_without_extension"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018829, VkglTestCase_018829_1, VkglTestCase_018829_2);

#define VkglTestCase_018830_1 "dEQP-GLES31.functional.debug.negative_coverage.call"
#define VkglTestCase_018830_2 "backs.oes_sample_variables.redeclare_built_in_types"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018830, VkglTestCase_018830_1, VkglTestCase_018830_2);
