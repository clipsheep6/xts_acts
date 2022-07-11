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

#define VkglTestCase_022576_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_022576_2 "program_output.type.vertex_fragment.array.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022576, VkglTestCase_022576_1, VkglTestCase_022576_2);

#define VkglTestCase_022577_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_022577_2 ".program_output.type.vertex_fragment.array.int"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022577, VkglTestCase_022577_1, VkglTestCase_022577_2);

#define VkglTestCase_022578_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_022578_2 ".program_output.type.vertex_fragment.array.uint"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022578, VkglTestCase_022578_1, VkglTestCase_022578_2);

#define VkglTestCase_022579_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_022579_2 ".program_output.type.vertex_fragment.array.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022579, VkglTestCase_022579_1, VkglTestCase_022579_2);

#define VkglTestCase_022580_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_022580_2 ".program_output.type.vertex_fragment.array.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022580, VkglTestCase_022580_1, VkglTestCase_022580_2);

#define VkglTestCase_022581_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_022581_2 ".program_output.type.vertex_fragment.array.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022581, VkglTestCase_022581_1, VkglTestCase_022581_2);

#define VkglTestCase_022582_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_022582_2 "program_output.type.vertex_fragment.array.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022582, VkglTestCase_022582_1, VkglTestCase_022582_2);

#define VkglTestCase_022583_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_022583_2 "program_output.type.vertex_fragment.array.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022583, VkglTestCase_022583_1, VkglTestCase_022583_2);

#define VkglTestCase_022584_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_022584_2 "program_output.type.vertex_fragment.array.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022584, VkglTestCase_022584_1, VkglTestCase_022584_2);

#define VkglTestCase_022585_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_022585_2 "program_output.type.vertex_fragment.array.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022585, VkglTestCase_022585_1, VkglTestCase_022585_2);

#define VkglTestCase_022586_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_022586_2 "program_output.type.vertex_fragment.array.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022586, VkglTestCase_022586_1, VkglTestCase_022586_2);

#define VkglTestCase_022587_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_022587_2 "program_output.type.vertex_fragment.array.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022587, VkglTestCase_022587_1, VkglTestCase_022587_2);

#define VkglTestCase_023099_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023099_2 "orm_feedback_varying.type.vertex_fragment.array.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023099, VkglTestCase_023099_1, VkglTestCase_023099_2);

#define VkglTestCase_023100_1 "dEQP-GLES31.functional.program_interface_query.trans"
#define VkglTestCase_023100_2 "form_feedback_varying.type.vertex_fragment.array.int"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023100, VkglTestCase_023100_1, VkglTestCase_023100_2);

#define VkglTestCase_023101_1 "dEQP-GLES31.functional.program_interface_query.trans"
#define VkglTestCase_023101_2 "form_feedback_varying.type.vertex_fragment.array.uint"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023101, VkglTestCase_023101_1, VkglTestCase_023101_2);

#define VkglTestCase_023102_1 "dEQP-GLES31.functional.program_interface_query.trans"
#define VkglTestCase_023102_2 "form_feedback_varying.type.vertex_fragment.array.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023102, VkglTestCase_023102_1, VkglTestCase_023102_2);

#define VkglTestCase_023103_1 "dEQP-GLES31.functional.program_interface_query.trans"
#define VkglTestCase_023103_2 "form_feedback_varying.type.vertex_fragment.array.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023103, VkglTestCase_023103_1, VkglTestCase_023103_2);

#define VkglTestCase_023104_1 "dEQP-GLES31.functional.program_interface_query.trans"
#define VkglTestCase_023104_2 "form_feedback_varying.type.vertex_fragment.array.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023104, VkglTestCase_023104_1, VkglTestCase_023104_2);

#define VkglTestCase_023105_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023105_2 "orm_feedback_varying.type.vertex_fragment.array.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023105, VkglTestCase_023105_1, VkglTestCase_023105_2);

#define VkglTestCase_023106_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023106_2 "orm_feedback_varying.type.vertex_fragment.array.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023106, VkglTestCase_023106_1, VkglTestCase_023106_2);

#define VkglTestCase_023107_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023107_2 "orm_feedback_varying.type.vertex_fragment.array.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023107, VkglTestCase_023107_1, VkglTestCase_023107_2);

#define VkglTestCase_023108_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023108_2 "orm_feedback_varying.type.vertex_fragment.array.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023108, VkglTestCase_023108_1, VkglTestCase_023108_2);

#define VkglTestCase_023109_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023109_2 "orm_feedback_varying.type.vertex_fragment.array.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023109, VkglTestCase_023109_1, VkglTestCase_023109_2);

#define VkglTestCase_023110_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023110_2 "orm_feedback_varying.type.vertex_fragment.array.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023110, VkglTestCase_023110_1, VkglTestCase_023110_2);

#define VkglTestCase_023111_1 "dEQP-GLES31.functional.program_interface_query.trans"
#define VkglTestCase_023111_2 "form_feedback_varying.type.vertex_fragment.array.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023111, VkglTestCase_023111_1, VkglTestCase_023111_2);

#define VkglTestCase_023112_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023112_2 "orm_feedback_varying.type.vertex_fragment.array.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023112, VkglTestCase_023112_1, VkglTestCase_023112_2);

#define VkglTestCase_023113_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023113_2 "orm_feedback_varying.type.vertex_fragment.array.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023113, VkglTestCase_023113_1, VkglTestCase_023113_2);

#define VkglTestCase_023114_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023114_2 "orm_feedback_varying.type.vertex_fragment.array.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023114, VkglTestCase_023114_1, VkglTestCase_023114_2);

#define VkglTestCase_023115_1 "dEQP-GLES31.functional.program_interface_query.trans"
#define VkglTestCase_023115_2 "form_feedback_varying.type.vertex_fragment.array.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023115, VkglTestCase_023115_1, VkglTestCase_023115_2);

#define VkglTestCase_023116_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023116_2 "orm_feedback_varying.type.vertex_fragment.array.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023116, VkglTestCase_023116_1, VkglTestCase_023116_2);

#define VkglTestCase_023117_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023117_2 "orm_feedback_varying.type.vertex_fragment.array.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023117, VkglTestCase_023117_1, VkglTestCase_023117_2);

#define VkglTestCase_023118_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023118_2 "orm_feedback_varying.type.vertex_fragment.array.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023118, VkglTestCase_023118_1, VkglTestCase_023118_2);

#define VkglTestCase_023119_1 "dEQP-GLES31.functional.program_interface_query.trans"
#define VkglTestCase_023119_2 "form_feedback_varying.type.vertex_fragment.array.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023119, VkglTestCase_023119_1, VkglTestCase_023119_2);
