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

#define VkglTestCase_023177_1 "dEQP-GLES31.functional.program_interface_query.transform_f"
#define VkglTestCase_023177_2 "eedback_varying.type.vertex_tess_fragment.whole_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023177, VkglTestCase_023177_1, VkglTestCase_023177_2);

#define VkglTestCase_023178_1 "dEQP-GLES31.functional.program_interface_query.transform_"
#define VkglTestCase_023178_2 "feedback_varying.type.vertex_tess_fragment.whole_array.int"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023178, VkglTestCase_023178_1, VkglTestCase_023178_2);

#define VkglTestCase_023179_1 "dEQP-GLES31.functional.program_interface_query.transform_f"
#define VkglTestCase_023179_2 "eedback_varying.type.vertex_tess_fragment.whole_array.uint"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023179, VkglTestCase_023179_1, VkglTestCase_023179_2);

#define VkglTestCase_023180_1 "dEQP-GLES31.functional.program_interface_query.transform_f"
#define VkglTestCase_023180_2 "eedback_varying.type.vertex_tess_fragment.whole_array.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023180, VkglTestCase_023180_1, VkglTestCase_023180_2);

#define VkglTestCase_023181_1 "dEQP-GLES31.functional.program_interface_query.transform_f"
#define VkglTestCase_023181_2 "eedback_varying.type.vertex_tess_fragment.whole_array.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023181, VkglTestCase_023181_1, VkglTestCase_023181_2);

#define VkglTestCase_023182_1 "dEQP-GLES31.functional.program_interface_query.transform_f"
#define VkglTestCase_023182_2 "eedback_varying.type.vertex_tess_fragment.whole_array.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023182, VkglTestCase_023182_1, VkglTestCase_023182_2);

#define VkglTestCase_023183_1 "dEQP-GLES31.functional.program_interface_query.transform_fe"
#define VkglTestCase_023183_2 "edback_varying.type.vertex_tess_fragment.whole_array.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023183, VkglTestCase_023183_1, VkglTestCase_023183_2);
