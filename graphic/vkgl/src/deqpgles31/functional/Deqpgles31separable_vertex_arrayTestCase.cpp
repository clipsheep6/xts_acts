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

#define VkglTestCase_022609_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_022609_2 "program_output.type.separable_vertex.array.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022609, VkglTestCase_022609_1, VkglTestCase_022609_2);

#define VkglTestCase_022610_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_022610_2 ".program_output.type.separable_vertex.array.int"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022610, VkglTestCase_022610_1, VkglTestCase_022610_2);

#define VkglTestCase_022611_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_022611_2 "program_output.type.separable_vertex.array.uint"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022611, VkglTestCase_022611_1, VkglTestCase_022611_2);

#define VkglTestCase_022612_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_022612_2 "program_output.type.separable_vertex.array.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022612, VkglTestCase_022612_1, VkglTestCase_022612_2);

#define VkglTestCase_022613_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_022613_2 "program_output.type.separable_vertex.array.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022613, VkglTestCase_022613_1, VkglTestCase_022613_2);

#define VkglTestCase_022614_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_022614_2 "program_output.type.separable_vertex.array.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022614, VkglTestCase_022614_1, VkglTestCase_022614_2);

#define VkglTestCase_022615_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_022615_2 "program_output.type.separable_vertex.array.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022615, VkglTestCase_022615_1, VkglTestCase_022615_2);

#define VkglTestCase_022616_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_022616_2 "program_output.type.separable_vertex.array.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022616, VkglTestCase_022616_1, VkglTestCase_022616_2);

#define VkglTestCase_022617_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_022617_2 "program_output.type.separable_vertex.array.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022617, VkglTestCase_022617_1, VkglTestCase_022617_2);

#define VkglTestCase_022618_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_022618_2 "program_output.type.separable_vertex.array.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022618, VkglTestCase_022618_1, VkglTestCase_022618_2);

#define VkglTestCase_022619_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_022619_2 "program_output.type.separable_vertex.array.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022619, VkglTestCase_022619_1, VkglTestCase_022619_2);

#define VkglTestCase_022620_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_022620_2 "program_output.type.separable_vertex.array.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022620, VkglTestCase_022620_1, VkglTestCase_022620_2);

#define VkglTestCase_022621_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_022621_2 "program_output.type.separable_vertex.array.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022621, VkglTestCase_022621_1, VkglTestCase_022621_2);

#define VkglTestCase_022622_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022622_2 "rogram_output.type.separable_vertex.array.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022622, VkglTestCase_022622_1, VkglTestCase_022622_2);

#define VkglTestCase_022623_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022623_2 "rogram_output.type.separable_vertex.array.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022623, VkglTestCase_022623_1, VkglTestCase_022623_2);

#define VkglTestCase_022624_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022624_2 "rogram_output.type.separable_vertex.array.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022624, VkglTestCase_022624_1, VkglTestCase_022624_2);

#define VkglTestCase_022625_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_022625_2 "program_output.type.separable_vertex.array.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022625, VkglTestCase_022625_1, VkglTestCase_022625_2);

#define VkglTestCase_022626_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022626_2 "rogram_output.type.separable_vertex.array.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022626, VkglTestCase_022626_1, VkglTestCase_022626_2);

#define VkglTestCase_022627_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022627_2 "rogram_output.type.separable_vertex.array.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022627, VkglTestCase_022627_1, VkglTestCase_022627_2);

#define VkglTestCase_022628_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022628_2 "rogram_output.type.separable_vertex.array.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022628, VkglTestCase_022628_1, VkglTestCase_022628_2);

#define VkglTestCase_022629_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_022629_2 "program_output.type.separable_vertex.array.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022629, VkglTestCase_022629_1, VkglTestCase_022629_2);

#define VkglTestCase_023271_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023271_2 "orm_feedback_varying.type.separable_vertex.array.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023271, VkglTestCase_023271_1, VkglTestCase_023271_2);

#define VkglTestCase_023272_1 "dEQP-GLES31.functional.program_interface_query.trans"
#define VkglTestCase_023272_2 "form_feedback_varying.type.separable_vertex.array.int"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023272, VkglTestCase_023272_1, VkglTestCase_023272_2);

#define VkglTestCase_023273_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023273_2 "orm_feedback_varying.type.separable_vertex.array.uint"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023273, VkglTestCase_023273_1, VkglTestCase_023273_2);

#define VkglTestCase_023274_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023274_2 "orm_feedback_varying.type.separable_vertex.array.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023274, VkglTestCase_023274_1, VkglTestCase_023274_2);

#define VkglTestCase_023275_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023275_2 "orm_feedback_varying.type.separable_vertex.array.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023275, VkglTestCase_023275_1, VkglTestCase_023275_2);

#define VkglTestCase_023276_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023276_2 "orm_feedback_varying.type.separable_vertex.array.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023276, VkglTestCase_023276_1, VkglTestCase_023276_2);

#define VkglTestCase_023277_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023277_2 "orm_feedback_varying.type.separable_vertex.array.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023277, VkglTestCase_023277_1, VkglTestCase_023277_2);

#define VkglTestCase_023278_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023278_2 "orm_feedback_varying.type.separable_vertex.array.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023278, VkglTestCase_023278_1, VkglTestCase_023278_2);

#define VkglTestCase_023279_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023279_2 "orm_feedback_varying.type.separable_vertex.array.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023279, VkglTestCase_023279_1, VkglTestCase_023279_2);

#define VkglTestCase_023280_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023280_2 "orm_feedback_varying.type.separable_vertex.array.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023280, VkglTestCase_023280_1, VkglTestCase_023280_2);

#define VkglTestCase_023281_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023281_2 "orm_feedback_varying.type.separable_vertex.array.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023281, VkglTestCase_023281_1, VkglTestCase_023281_2);

#define VkglTestCase_023282_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023282_2 "orm_feedback_varying.type.separable_vertex.array.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023282, VkglTestCase_023282_1, VkglTestCase_023282_2);

#define VkglTestCase_023283_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023283_2 "orm_feedback_varying.type.separable_vertex.array.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023283, VkglTestCase_023283_1, VkglTestCase_023283_2);

#define VkglTestCase_023284_1 "dEQP-GLES31.functional.program_interface_query.transfo"
#define VkglTestCase_023284_2 "rm_feedback_varying.type.separable_vertex.array.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023284, VkglTestCase_023284_1, VkglTestCase_023284_2);

#define VkglTestCase_023285_1 "dEQP-GLES31.functional.program_interface_query.transfo"
#define VkglTestCase_023285_2 "rm_feedback_varying.type.separable_vertex.array.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023285, VkglTestCase_023285_1, VkglTestCase_023285_2);

#define VkglTestCase_023286_1 "dEQP-GLES31.functional.program_interface_query.transfo"
#define VkglTestCase_023286_2 "rm_feedback_varying.type.separable_vertex.array.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023286, VkglTestCase_023286_1, VkglTestCase_023286_2);

#define VkglTestCase_023287_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023287_2 "orm_feedback_varying.type.separable_vertex.array.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023287, VkglTestCase_023287_1, VkglTestCase_023287_2);

#define VkglTestCase_023288_1 "dEQP-GLES31.functional.program_interface_query.transfo"
#define VkglTestCase_023288_2 "rm_feedback_varying.type.separable_vertex.array.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023288, VkglTestCase_023288_1, VkglTestCase_023288_2);

#define VkglTestCase_023289_1 "dEQP-GLES31.functional.program_interface_query.transfo"
#define VkglTestCase_023289_2 "rm_feedback_varying.type.separable_vertex.array.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023289, VkglTestCase_023289_1, VkglTestCase_023289_2);

#define VkglTestCase_023290_1 "dEQP-GLES31.functional.program_interface_query.transfo"
#define VkglTestCase_023290_2 "rm_feedback_varying.type.separable_vertex.array.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023290, VkglTestCase_023290_1, VkglTestCase_023290_2);

#define VkglTestCase_023291_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023291_2 "orm_feedback_varying.type.separable_vertex.array.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023291, VkglTestCase_023291_1, VkglTestCase_023291_2);
