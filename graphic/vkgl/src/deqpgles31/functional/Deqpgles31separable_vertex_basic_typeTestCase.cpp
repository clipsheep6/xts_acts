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

#define VkglTestCase_022588_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022588_2 "gram_output.type.separable_vertex.basic_type.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022588, VkglTestCase_022588_1, VkglTestCase_022588_2);

#define VkglTestCase_022589_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022589_2 "ogram_output.type.separable_vertex.basic_type.int"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022589, VkglTestCase_022589_1, VkglTestCase_022589_2);

#define VkglTestCase_022590_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022590_2 "ogram_output.type.separable_vertex.basic_type.uint"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022590, VkglTestCase_022590_1, VkglTestCase_022590_2);

#define VkglTestCase_022591_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022591_2 "ogram_output.type.separable_vertex.basic_type.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022591, VkglTestCase_022591_1, VkglTestCase_022591_2);

#define VkglTestCase_022592_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022592_2 "ogram_output.type.separable_vertex.basic_type.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022592, VkglTestCase_022592_1, VkglTestCase_022592_2);

#define VkglTestCase_022593_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022593_2 "ogram_output.type.separable_vertex.basic_type.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022593, VkglTestCase_022593_1, VkglTestCase_022593_2);

#define VkglTestCase_022594_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022594_2 "gram_output.type.separable_vertex.basic_type.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022594, VkglTestCase_022594_1, VkglTestCase_022594_2);

#define VkglTestCase_022595_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022595_2 "gram_output.type.separable_vertex.basic_type.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022595, VkglTestCase_022595_1, VkglTestCase_022595_2);

#define VkglTestCase_022596_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022596_2 "gram_output.type.separable_vertex.basic_type.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022596, VkglTestCase_022596_1, VkglTestCase_022596_2);

#define VkglTestCase_022597_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022597_2 "gram_output.type.separable_vertex.basic_type.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022597, VkglTestCase_022597_1, VkglTestCase_022597_2);

#define VkglTestCase_022598_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022598_2 "gram_output.type.separable_vertex.basic_type.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022598, VkglTestCase_022598_1, VkglTestCase_022598_2);

#define VkglTestCase_022599_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022599_2 "gram_output.type.separable_vertex.basic_type.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022599, VkglTestCase_022599_1, VkglTestCase_022599_2);

#define VkglTestCase_022600_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022600_2 "ogram_output.type.separable_vertex.basic_type.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022600, VkglTestCase_022600_1, VkglTestCase_022600_2);

#define VkglTestCase_022601_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022601_2 "gram_output.type.separable_vertex.basic_type.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022601, VkglTestCase_022601_1, VkglTestCase_022601_2);

#define VkglTestCase_022602_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022602_2 "gram_output.type.separable_vertex.basic_type.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022602, VkglTestCase_022602_1, VkglTestCase_022602_2);

#define VkglTestCase_022603_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022603_2 "gram_output.type.separable_vertex.basic_type.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022603, VkglTestCase_022603_1, VkglTestCase_022603_2);

#define VkglTestCase_022604_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022604_2 "ogram_output.type.separable_vertex.basic_type.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022604, VkglTestCase_022604_1, VkglTestCase_022604_2);

#define VkglTestCase_022605_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022605_2 "gram_output.type.separable_vertex.basic_type.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022605, VkglTestCase_022605_1, VkglTestCase_022605_2);

#define VkglTestCase_022606_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022606_2 "gram_output.type.separable_vertex.basic_type.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022606, VkglTestCase_022606_1, VkglTestCase_022606_2);

#define VkglTestCase_022607_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022607_2 "gram_output.type.separable_vertex.basic_type.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022607, VkglTestCase_022607_1, VkglTestCase_022607_2);

#define VkglTestCase_022608_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022608_2 "ogram_output.type.separable_vertex.basic_type.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022608, VkglTestCase_022608_1, VkglTestCase_022608_2);

#define VkglTestCase_023250_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023250_2 "_feedback_varying.type.separable_vertex.basic_type.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023250, VkglTestCase_023250_1, VkglTestCase_023250_2);

#define VkglTestCase_023251_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023251_2 "m_feedback_varying.type.separable_vertex.basic_type.int"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023251, VkglTestCase_023251_1, VkglTestCase_023251_2);

#define VkglTestCase_023252_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023252_2 "m_feedback_varying.type.separable_vertex.basic_type.uint"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023252, VkglTestCase_023252_1, VkglTestCase_023252_2);

#define VkglTestCase_023253_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023253_2 "m_feedback_varying.type.separable_vertex.basic_type.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023253, VkglTestCase_023253_1, VkglTestCase_023253_2);

#define VkglTestCase_023254_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023254_2 "m_feedback_varying.type.separable_vertex.basic_type.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023254, VkglTestCase_023254_1, VkglTestCase_023254_2);

#define VkglTestCase_023255_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023255_2 "m_feedback_varying.type.separable_vertex.basic_type.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023255, VkglTestCase_023255_1, VkglTestCase_023255_2);

#define VkglTestCase_023256_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023256_2 "_feedback_varying.type.separable_vertex.basic_type.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023256, VkglTestCase_023256_1, VkglTestCase_023256_2);

#define VkglTestCase_023257_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023257_2 "_feedback_varying.type.separable_vertex.basic_type.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023257, VkglTestCase_023257_1, VkglTestCase_023257_2);

#define VkglTestCase_023258_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023258_2 "_feedback_varying.type.separable_vertex.basic_type.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023258, VkglTestCase_023258_1, VkglTestCase_023258_2);

#define VkglTestCase_023259_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023259_2 "_feedback_varying.type.separable_vertex.basic_type.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023259, VkglTestCase_023259_1, VkglTestCase_023259_2);

#define VkglTestCase_023260_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023260_2 "_feedback_varying.type.separable_vertex.basic_type.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023260, VkglTestCase_023260_1, VkglTestCase_023260_2);

#define VkglTestCase_023261_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023261_2 "_feedback_varying.type.separable_vertex.basic_type.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023261, VkglTestCase_023261_1, VkglTestCase_023261_2);

#define VkglTestCase_023262_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023262_2 "m_feedback_varying.type.separable_vertex.basic_type.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023262, VkglTestCase_023262_1, VkglTestCase_023262_2);

#define VkglTestCase_023263_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023263_2 "_feedback_varying.type.separable_vertex.basic_type.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023263, VkglTestCase_023263_1, VkglTestCase_023263_2);

#define VkglTestCase_023264_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023264_2 "_feedback_varying.type.separable_vertex.basic_type.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023264, VkglTestCase_023264_1, VkglTestCase_023264_2);

#define VkglTestCase_023265_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023265_2 "_feedback_varying.type.separable_vertex.basic_type.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023265, VkglTestCase_023265_1, VkglTestCase_023265_2);

#define VkglTestCase_023266_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023266_2 "m_feedback_varying.type.separable_vertex.basic_type.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023266, VkglTestCase_023266_1, VkglTestCase_023266_2);

#define VkglTestCase_023267_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023267_2 "_feedback_varying.type.separable_vertex.basic_type.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023267, VkglTestCase_023267_1, VkglTestCase_023267_2);

#define VkglTestCase_023268_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023268_2 "_feedback_varying.type.separable_vertex.basic_type.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023268, VkglTestCase_023268_1, VkglTestCase_023268_2);

#define VkglTestCase_023269_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023269_2 "_feedback_varying.type.separable_vertex.basic_type.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023269, VkglTestCase_023269_1, VkglTestCase_023269_2);

#define VkglTestCase_023270_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023270_2 "m_feedback_varying.type.separable_vertex.basic_type.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023270, VkglTestCase_023270_1, VkglTestCase_023270_2);
