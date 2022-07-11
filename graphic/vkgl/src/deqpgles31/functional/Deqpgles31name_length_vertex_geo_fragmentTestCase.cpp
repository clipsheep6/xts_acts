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

#define VkglTestCase_023052_1 "dEQP-GLES31.functional.program_interface_query.transform_feedb"
#define VkglTestCase_023052_2 "ack_varying.name_length.vertex_geo_fragment.builtin_gl_position"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023052, VkglTestCase_023052_1, VkglTestCase_023052_2);

#define VkglTestCase_023053_1 "dEQP-GLES31.functional.program_interface_query.transform_feedback"
#define VkglTestCase_023053_2 "_varying.name_length.vertex_geo_fragment.default_block_basic_type"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023053, VkglTestCase_023053_1, VkglTestCase_023053_2);

#define VkglTestCase_023054_1 "dEQP-GLES31.functional.program_interface_query.transform_feedback_"
#define VkglTestCase_023054_2 "varying.name_length.vertex_geo_fragment.default_block_struct_member"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023054, VkglTestCase_023054_1, VkglTestCase_023054_2);

#define VkglTestCase_023055_1 "dEQP-GLES31.functional.program_interface_query.transform_feedb"
#define VkglTestCase_023055_2 "ack_varying.name_length.vertex_geo_fragment.default_block_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023055, VkglTestCase_023055_1, VkglTestCase_023055_2);

#define VkglTestCase_023056_1 "dEQP-GLES31.functional.program_interface_query.transform_feedback_"
#define VkglTestCase_023056_2 "varying.name_length.vertex_geo_fragment.default_block_array_element"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023056, VkglTestCase_023056_1, VkglTestCase_023056_2);
