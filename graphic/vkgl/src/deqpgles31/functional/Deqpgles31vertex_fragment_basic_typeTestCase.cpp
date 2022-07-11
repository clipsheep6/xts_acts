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

#define VkglTestCase_022564_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022564_2 "ogram_output.type.vertex_fragment.basic_type.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022564, VkglTestCase_022564_1, VkglTestCase_022564_2);

#define VkglTestCase_022565_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022565_2 "rogram_output.type.vertex_fragment.basic_type.int"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022565, VkglTestCase_022565_1, VkglTestCase_022565_2);

#define VkglTestCase_022566_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022566_2 "ogram_output.type.vertex_fragment.basic_type.uint"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022566, VkglTestCase_022566_1, VkglTestCase_022566_2);

#define VkglTestCase_022567_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022567_2 "ogram_output.type.vertex_fragment.basic_type.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022567, VkglTestCase_022567_1, VkglTestCase_022567_2);

#define VkglTestCase_022568_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022568_2 "ogram_output.type.vertex_fragment.basic_type.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022568, VkglTestCase_022568_1, VkglTestCase_022568_2);

#define VkglTestCase_022569_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022569_2 "ogram_output.type.vertex_fragment.basic_type.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022569, VkglTestCase_022569_1, VkglTestCase_022569_2);

#define VkglTestCase_022570_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022570_2 "ogram_output.type.vertex_fragment.basic_type.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022570, VkglTestCase_022570_1, VkglTestCase_022570_2);

#define VkglTestCase_022571_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022571_2 "ogram_output.type.vertex_fragment.basic_type.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022571, VkglTestCase_022571_1, VkglTestCase_022571_2);

#define VkglTestCase_022572_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022572_2 "ogram_output.type.vertex_fragment.basic_type.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022572, VkglTestCase_022572_1, VkglTestCase_022572_2);

#define VkglTestCase_022573_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022573_2 "ogram_output.type.vertex_fragment.basic_type.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022573, VkglTestCase_022573_1, VkglTestCase_022573_2);

#define VkglTestCase_022574_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022574_2 "ogram_output.type.vertex_fragment.basic_type.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022574, VkglTestCase_022574_1, VkglTestCase_022574_2);

#define VkglTestCase_022575_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022575_2 "ogram_output.type.vertex_fragment.basic_type.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022575, VkglTestCase_022575_1, VkglTestCase_022575_2);

#define VkglTestCase_023078_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023078_2 "m_feedback_varying.type.vertex_fragment.basic_type.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023078, VkglTestCase_023078_1, VkglTestCase_023078_2);

#define VkglTestCase_023079_1 "dEQP-GLES31.functional.program_interface_query.transfo"
#define VkglTestCase_023079_2 "rm_feedback_varying.type.vertex_fragment.basic_type.int"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023079, VkglTestCase_023079_1, VkglTestCase_023079_2);

#define VkglTestCase_023080_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023080_2 "m_feedback_varying.type.vertex_fragment.basic_type.uint"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023080, VkglTestCase_023080_1, VkglTestCase_023080_2);

#define VkglTestCase_023081_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023081_2 "m_feedback_varying.type.vertex_fragment.basic_type.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023081, VkglTestCase_023081_1, VkglTestCase_023081_2);

#define VkglTestCase_023082_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023082_2 "m_feedback_varying.type.vertex_fragment.basic_type.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023082, VkglTestCase_023082_1, VkglTestCase_023082_2);

#define VkglTestCase_023083_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023083_2 "m_feedback_varying.type.vertex_fragment.basic_type.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023083, VkglTestCase_023083_1, VkglTestCase_023083_2);

#define VkglTestCase_023084_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023084_2 "m_feedback_varying.type.vertex_fragment.basic_type.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023084, VkglTestCase_023084_1, VkglTestCase_023084_2);

#define VkglTestCase_023085_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023085_2 "m_feedback_varying.type.vertex_fragment.basic_type.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023085, VkglTestCase_023085_1, VkglTestCase_023085_2);

#define VkglTestCase_023086_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023086_2 "m_feedback_varying.type.vertex_fragment.basic_type.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023086, VkglTestCase_023086_1, VkglTestCase_023086_2);

#define VkglTestCase_023087_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023087_2 "m_feedback_varying.type.vertex_fragment.basic_type.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023087, VkglTestCase_023087_1, VkglTestCase_023087_2);

#define VkglTestCase_023088_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023088_2 "m_feedback_varying.type.vertex_fragment.basic_type.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023088, VkglTestCase_023088_1, VkglTestCase_023088_2);

#define VkglTestCase_023089_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023089_2 "m_feedback_varying.type.vertex_fragment.basic_type.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023089, VkglTestCase_023089_1, VkglTestCase_023089_2);

#define VkglTestCase_023090_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023090_2 "m_feedback_varying.type.vertex_fragment.basic_type.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023090, VkglTestCase_023090_1, VkglTestCase_023090_2);

#define VkglTestCase_023091_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023091_2 "_feedback_varying.type.vertex_fragment.basic_type.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023091, VkglTestCase_023091_1, VkglTestCase_023091_2);

#define VkglTestCase_023092_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023092_2 "_feedback_varying.type.vertex_fragment.basic_type.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023092, VkglTestCase_023092_1, VkglTestCase_023092_2);

#define VkglTestCase_023093_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023093_2 "_feedback_varying.type.vertex_fragment.basic_type.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023093, VkglTestCase_023093_1, VkglTestCase_023093_2);

#define VkglTestCase_023094_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023094_2 "m_feedback_varying.type.vertex_fragment.basic_type.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023094, VkglTestCase_023094_1, VkglTestCase_023094_2);

#define VkglTestCase_023095_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023095_2 "_feedback_varying.type.vertex_fragment.basic_type.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023095, VkglTestCase_023095_1, VkglTestCase_023095_2);

#define VkglTestCase_023096_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023096_2 "_feedback_varying.type.vertex_fragment.basic_type.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023096, VkglTestCase_023096_1, VkglTestCase_023096_2);

#define VkglTestCase_023097_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023097_2 "_feedback_varying.type.vertex_fragment.basic_type.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023097, VkglTestCase_023097_1, VkglTestCase_023097_2);

#define VkglTestCase_023098_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023098_2 "m_feedback_varying.type.vertex_fragment.basic_type.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023098, VkglTestCase_023098_1, VkglTestCase_023098_2);
