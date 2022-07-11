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
#include "../ActsDeqpgles310023TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_022982_1 "dEQP-GLES31.functional.program_interface_query.transform_feedba"
#define VkglTestCase_022982_2 "ck_varying.resource_list.vertex_geo_fragment.builtin_gl_position"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022982, VkglTestCase_022982_1, VkglTestCase_022982_2);

#define VkglTestCase_022983_1 "dEQP-GLES31.functional.program_interface_query.transform_feedback_"
#define VkglTestCase_022983_2 "varying.resource_list.vertex_geo_fragment.default_block_basic_type"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022983, VkglTestCase_022983_1, VkglTestCase_022983_2);

#define VkglTestCase_022984_1 "dEQP-GLES31.functional.program_interface_query.transform_feedback_v"
#define VkglTestCase_022984_2 "arying.resource_list.vertex_geo_fragment.default_block_struct_member"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022984, VkglTestCase_022984_1, VkglTestCase_022984_2);

#define VkglTestCase_022985_1 "dEQP-GLES31.functional.program_interface_query.transform_feedba"
#define VkglTestCase_022985_2 "ck_varying.resource_list.vertex_geo_fragment.default_block_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022985, VkglTestCase_022985_1, VkglTestCase_022985_2);

#define VkglTestCase_022986_1 "dEQP-GLES31.functional.program_interface_query.transform_feedback_v"
#define VkglTestCase_022986_2 "arying.resource_list.vertex_geo_fragment.default_block_array_element"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022986, VkglTestCase_022986_1, VkglTestCase_022986_2);
