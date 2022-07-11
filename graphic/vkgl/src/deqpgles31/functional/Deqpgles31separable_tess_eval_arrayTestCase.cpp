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

#define VkglTestCase_022738_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022738_2 "ogram_output.type.separable_tess_eval.array.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022738, VkglTestCase_022738_1, VkglTestCase_022738_2);

#define VkglTestCase_022739_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022739_2 "rogram_output.type.separable_tess_eval.array.int"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022739, VkglTestCase_022739_1, VkglTestCase_022739_2);

#define VkglTestCase_022740_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022740_2 "rogram_output.type.separable_tess_eval.array.uint"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022740, VkglTestCase_022740_1, VkglTestCase_022740_2);

#define VkglTestCase_022741_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022741_2 "rogram_output.type.separable_tess_eval.array.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022741, VkglTestCase_022741_1, VkglTestCase_022741_2);

#define VkglTestCase_022742_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022742_2 "ogram_output.type.separable_tess_eval.array.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022742, VkglTestCase_022742_1, VkglTestCase_022742_2);

#define VkglTestCase_022743_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022743_2 "ogram_output.type.separable_tess_eval.array.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022743, VkglTestCase_022743_1, VkglTestCase_022743_2);

#define VkglTestCase_022744_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022744_2 "ogram_output.type.separable_tess_eval.array.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022744, VkglTestCase_022744_1, VkglTestCase_022744_2);

#define VkglTestCase_023342_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023342_2 "m_feedback_varying.type.separable_tess_eval.array.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023342, VkglTestCase_023342_1, VkglTestCase_023342_2);

#define VkglTestCase_023343_1 "dEQP-GLES31.functional.program_interface_query.transfo"
#define VkglTestCase_023343_2 "rm_feedback_varying.type.separable_tess_eval.array.int"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023343, VkglTestCase_023343_1, VkglTestCase_023343_2);

#define VkglTestCase_023344_1 "dEQP-GLES31.functional.program_interface_query.transfo"
#define VkglTestCase_023344_2 "rm_feedback_varying.type.separable_tess_eval.array.uint"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023344, VkglTestCase_023344_1, VkglTestCase_023344_2);

#define VkglTestCase_023345_1 "dEQP-GLES31.functional.program_interface_query.transfo"
#define VkglTestCase_023345_2 "rm_feedback_varying.type.separable_tess_eval.array.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023345, VkglTestCase_023345_1, VkglTestCase_023345_2);

#define VkglTestCase_023346_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023346_2 "m_feedback_varying.type.separable_tess_eval.array.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023346, VkglTestCase_023346_1, VkglTestCase_023346_2);

#define VkglTestCase_023347_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023347_2 "m_feedback_varying.type.separable_tess_eval.array.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023347, VkglTestCase_023347_1, VkglTestCase_023347_2);

#define VkglTestCase_023348_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023348_2 "m_feedback_varying.type.separable_tess_eval.array.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023348, VkglTestCase_023348_1, VkglTestCase_023348_2);
