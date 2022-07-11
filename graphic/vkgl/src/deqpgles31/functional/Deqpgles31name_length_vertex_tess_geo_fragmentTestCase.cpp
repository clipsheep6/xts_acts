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

#define VkglTestCase_023057_1 "dEQP-GLES31.functional.program_interface_query.transform_feedback"
#define VkglTestCase_023057_2 "_varying.name_length.vertex_tess_geo_fragment.builtin_gl_position"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023057, VkglTestCase_023057_1, VkglTestCase_023057_2);

#define VkglTestCase_023058_1 "dEQP-GLES31.functional.program_interface_query.transform_feedback_v"
#define VkglTestCase_023058_2 "arying.name_length.vertex_tess_geo_fragment.default_block_basic_type"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023058, VkglTestCase_023058_1, VkglTestCase_023058_2);

#define VkglTestCase_023059_1 "dEQP-GLES31.functional.program_interface_query.transform_feedback_var"
#define VkglTestCase_023059_2 "ying.name_length.vertex_tess_geo_fragment.default_block_struct_member"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023059, VkglTestCase_023059_1, VkglTestCase_023059_2);

#define VkglTestCase_023060_1 "dEQP-GLES31.functional.program_interface_query.transform_feedback"
#define VkglTestCase_023060_2 "_varying.name_length.vertex_tess_geo_fragment.default_block_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023060, VkglTestCase_023060_1, VkglTestCase_023060_2);

#define VkglTestCase_023061_1 "dEQP-GLES31.functional.program_interface_query.transform_feedback_var"
#define VkglTestCase_023061_2 "ying.name_length.vertex_tess_geo_fragment.default_block_array_element"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023061, VkglTestCase_023061_1, VkglTestCase_023061_2);
