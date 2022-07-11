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
#include "../ActsDeqpgles310024TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_023022_1 "dEQP-GLES31.functional.program_interface_query.transform_feedbac"
#define VkglTestCase_023022_2 "k_varying.array_size.vertex_tess_geo_fragment.builtin_gl_position"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023022, VkglTestCase_023022_1, VkglTestCase_023022_2);

#define VkglTestCase_023023_1 "dEQP-GLES31.functional.program_interface_query.transform_feedback_v"
#define VkglTestCase_023023_2 "arying.array_size.vertex_tess_geo_fragment.default_block_basic_type"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023023, VkglTestCase_023023_1, VkglTestCase_023023_2);

#define VkglTestCase_023024_1 "dEQP-GLES31.functional.program_interface_query.transform_feedback_va"
#define VkglTestCase_023024_2 "rying.array_size.vertex_tess_geo_fragment.default_block_struct_member"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023024, VkglTestCase_023024_1, VkglTestCase_023024_2);

#define VkglTestCase_023025_1 "dEQP-GLES31.functional.program_interface_query.transform_feedbac"
#define VkglTestCase_023025_2 "k_varying.array_size.vertex_tess_geo_fragment.default_block_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023025, VkglTestCase_023025_1, VkglTestCase_023025_2);

#define VkglTestCase_023026_1 "dEQP-GLES31.functional.program_interface_query.transform_feedback_va"
#define VkglTestCase_023026_2 "rying.array_size.vertex_tess_geo_fragment.default_block_array_element"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023026, VkglTestCase_023026_1, VkglTestCase_023026_2);
