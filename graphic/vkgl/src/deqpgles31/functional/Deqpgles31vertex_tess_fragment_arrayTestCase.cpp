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

#define VkglTestCase_023170_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023170_2 "m_feedback_varying.type.vertex_tess_fragment.array.float"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023170, VkglTestCase_023170_1, VkglTestCase_023170_2);

#define VkglTestCase_023171_1 "dEQP-GLES31.functional.program_interface_query.transfo"
#define VkglTestCase_023171_2 "rm_feedback_varying.type.vertex_tess_fragment.array.int"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023171, VkglTestCase_023171_1, VkglTestCase_023171_2);

#define VkglTestCase_023172_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023172_2 "m_feedback_varying.type.vertex_tess_fragment.array.uint"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023172, VkglTestCase_023172_1, VkglTestCase_023172_2);

#define VkglTestCase_023173_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023173_2 "m_feedback_varying.type.vertex_tess_fragment.array.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023173, VkglTestCase_023173_1, VkglTestCase_023173_2);

#define VkglTestCase_023174_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023174_2 "m_feedback_varying.type.vertex_tess_fragment.array.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023174, VkglTestCase_023174_1, VkglTestCase_023174_2);

#define VkglTestCase_023175_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023175_2 "m_feedback_varying.type.vertex_tess_fragment.array.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023175, VkglTestCase_023175_1, VkglTestCase_023175_2);

#define VkglTestCase_023176_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023176_2 "_feedback_varying.type.vertex_tess_fragment.array.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023176, VkglTestCase_023176_1, VkglTestCase_023176_2);
