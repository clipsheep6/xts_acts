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

#define VkglTestCase_022745_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022745_2 "ogram_output.type.separable_tess_eval.struct.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022745, VkglTestCase_022745_1, VkglTestCase_022745_2);

#define VkglTestCase_022746_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022746_2 "rogram_output.type.separable_tess_eval.struct.int"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022746, VkglTestCase_022746_1, VkglTestCase_022746_2);

#define VkglTestCase_022747_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022747_2 "ogram_output.type.separable_tess_eval.struct.uint"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022747, VkglTestCase_022747_1, VkglTestCase_022747_2);

#define VkglTestCase_022748_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022748_2 "ogram_output.type.separable_tess_eval.struct.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022748, VkglTestCase_022748_1, VkglTestCase_022748_2);

#define VkglTestCase_022749_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022749_2 "ogram_output.type.separable_tess_eval.struct.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022749, VkglTestCase_022749_1, VkglTestCase_022749_2);

#define VkglTestCase_022750_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022750_2 "ogram_output.type.separable_tess_eval.struct.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022750, VkglTestCase_022750_1, VkglTestCase_022750_2);

#define VkglTestCase_022751_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022751_2 "gram_output.type.separable_tess_eval.struct.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022751, VkglTestCase_022751_1, VkglTestCase_022751_2);

#define VkglTestCase_023356_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023356_2 "m_feedback_varying.type.separable_tess_eval.struct.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023356, VkglTestCase_023356_1, VkglTestCase_023356_2);

#define VkglTestCase_023357_1 "dEQP-GLES31.functional.program_interface_query.transfo"
#define VkglTestCase_023357_2 "rm_feedback_varying.type.separable_tess_eval.struct.int"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023357, VkglTestCase_023357_1, VkglTestCase_023357_2);

#define VkglTestCase_023358_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023358_2 "m_feedback_varying.type.separable_tess_eval.struct.uint"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023358, VkglTestCase_023358_1, VkglTestCase_023358_2);

#define VkglTestCase_023359_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023359_2 "m_feedback_varying.type.separable_tess_eval.struct.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023359, VkglTestCase_023359_1, VkglTestCase_023359_2);

#define VkglTestCase_023360_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023360_2 "m_feedback_varying.type.separable_tess_eval.struct.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023360, VkglTestCase_023360_1, VkglTestCase_023360_2);

#define VkglTestCase_023361_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023361_2 "m_feedback_varying.type.separable_tess_eval.struct.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023361, VkglTestCase_023361_1, VkglTestCase_023361_2);

#define VkglTestCase_023362_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023362_2 "_feedback_varying.type.separable_tess_eval.struct.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023362, VkglTestCase_023362_1, VkglTestCase_023362_2);
