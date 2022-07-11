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

#define VkglTestCase_022987_1 "dEQP-GLES31.functional.program_interface_query.transform_feedback_"
#define VkglTestCase_022987_2 "varying.resource_list.vertex_tess_geo_fragment.builtin_gl_position"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022987, VkglTestCase_022987_1, VkglTestCase_022987_2);

#define VkglTestCase_022988_1 "dEQP-GLES31.functional.program_interface_query.transform_feedback_va"
#define VkglTestCase_022988_2 "rying.resource_list.vertex_tess_geo_fragment.default_block_basic_type"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022988, VkglTestCase_022988_1, VkglTestCase_022988_2);

#define VkglTestCase_022989_1 "dEQP-GLES31.functional.program_interface_query.transform_feedback_vary"
#define VkglTestCase_022989_2 "ing.resource_list.vertex_tess_geo_fragment.default_block_struct_member"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022989, VkglTestCase_022989_1, VkglTestCase_022989_2);

#define VkglTestCase_022990_1 "dEQP-GLES31.functional.program_interface_query.transform_feedback_"
#define VkglTestCase_022990_2 "varying.resource_list.vertex_tess_geo_fragment.default_block_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022990, VkglTestCase_022990_1, VkglTestCase_022990_2);

#define VkglTestCase_022991_1 "dEQP-GLES31.functional.program_interface_query.transform_feedback_vary"
#define VkglTestCase_022991_2 "ing.resource_list.vertex_tess_geo_fragment.default_block_array_element"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022991, VkglTestCase_022991_1, VkglTestCase_022991_2);
