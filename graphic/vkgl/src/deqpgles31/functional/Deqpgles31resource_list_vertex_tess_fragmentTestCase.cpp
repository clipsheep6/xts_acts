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

#define VkglTestCase_022977_1 "dEQP-GLES31.functional.program_interface_query.transform_feedbac"
#define VkglTestCase_022977_2 "k_varying.resource_list.vertex_tess_fragment.builtin_gl_position"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022977, VkglTestCase_022977_1, VkglTestCase_022977_2);

#define VkglTestCase_022978_1 "dEQP-GLES31.functional.program_interface_query.transform_feedback_"
#define VkglTestCase_022978_2 "varying.resource_list.vertex_tess_fragment.default_block_basic_type"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022978, VkglTestCase_022978_1, VkglTestCase_022978_2);

#define VkglTestCase_022979_1 "dEQP-GLES31.functional.program_interface_query.transform_feedback_va"
#define VkglTestCase_022979_2 "rying.resource_list.vertex_tess_fragment.default_block_struct_member"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022979, VkglTestCase_022979_1, VkglTestCase_022979_2);

#define VkglTestCase_022980_1 "dEQP-GLES31.functional.program_interface_query.transform_feedbac"
#define VkglTestCase_022980_2 "k_varying.resource_list.vertex_tess_fragment.default_block_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022980, VkglTestCase_022980_1, VkglTestCase_022980_2);

#define VkglTestCase_022981_1 "dEQP-GLES31.functional.program_interface_query.transform_feedback_va"
#define VkglTestCase_022981_2 "rying.resource_list.vertex_tess_fragment.default_block_array_element"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022981, VkglTestCase_022981_1, VkglTestCase_022981_2);
