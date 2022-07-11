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

#define VkglTestCase_023047_1 "dEQP-GLES31.functional.program_interface_query.transform_feedba"
#define VkglTestCase_023047_2 "ck_varying.name_length.vertex_tess_fragment.builtin_gl_position"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023047, VkglTestCase_023047_1, VkglTestCase_023047_2);

#define VkglTestCase_023048_1 "dEQP-GLES31.functional.program_interface_query.transform_feedback"
#define VkglTestCase_023048_2 "_varying.name_length.vertex_tess_fragment.default_block_basic_type"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023048, VkglTestCase_023048_1, VkglTestCase_023048_2);

#define VkglTestCase_023049_1 "dEQP-GLES31.functional.program_interface_query.transform_feedback_v"
#define VkglTestCase_023049_2 "arying.name_length.vertex_tess_fragment.default_block_struct_member"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023049, VkglTestCase_023049_1, VkglTestCase_023049_2);

#define VkglTestCase_023050_1 "dEQP-GLES31.functional.program_interface_query.transform_feedba"
#define VkglTestCase_023050_2 "ck_varying.name_length.vertex_tess_fragment.default_block_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023050, VkglTestCase_023050_1, VkglTestCase_023050_2);

#define VkglTestCase_023051_1 "dEQP-GLES31.functional.program_interface_query.transform_feedback_v"
#define VkglTestCase_023051_2 "arying.name_length.vertex_tess_fragment.default_block_array_element"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023051, VkglTestCase_023051_1, VkglTestCase_023051_2);
