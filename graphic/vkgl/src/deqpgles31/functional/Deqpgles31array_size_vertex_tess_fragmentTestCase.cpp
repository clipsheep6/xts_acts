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

#define VkglTestCase_023012_1 "dEQP-GLES31.functional.program_interface_query.transform_feedb"
#define VkglTestCase_023012_2 "ack_varying.array_size.vertex_tess_fragment.builtin_gl_position"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023012, VkglTestCase_023012_1, VkglTestCase_023012_2);

#define VkglTestCase_023013_1 "dEQP-GLES31.functional.program_interface_query.transform_feedback"
#define VkglTestCase_023013_2 "_varying.array_size.vertex_tess_fragment.default_block_basic_type"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023013, VkglTestCase_023013_1, VkglTestCase_023013_2);

#define VkglTestCase_023014_1 "dEQP-GLES31.functional.program_interface_query.transform_feedback_"
#define VkglTestCase_023014_2 "varying.array_size.vertex_tess_fragment.default_block_struct_member"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023014, VkglTestCase_023014_1, VkglTestCase_023014_2);

#define VkglTestCase_023015_1 "dEQP-GLES31.functional.program_interface_query.transform_feedb"
#define VkglTestCase_023015_2 "ack_varying.array_size.vertex_tess_fragment.default_block_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023015, VkglTestCase_023015_1, VkglTestCase_023015_2);

#define VkglTestCase_023016_1 "dEQP-GLES31.functional.program_interface_query.transform_feedback_"
#define VkglTestCase_023016_2 "varying.array_size.vertex_tess_fragment.default_block_array_element"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023016, VkglTestCase_023016_1, VkglTestCase_023016_2);
