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

#define VkglTestCase_022773_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022773_2 "rogram_output.type.separable_geometry.array.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022773, VkglTestCase_022773_1, VkglTestCase_022773_2);

#define VkglTestCase_022774_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_022774_2 "program_output.type.separable_geometry.array.int"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022774, VkglTestCase_022774_1, VkglTestCase_022774_2);

#define VkglTestCase_022775_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022775_2 "rogram_output.type.separable_geometry.array.uint"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022775, VkglTestCase_022775_1, VkglTestCase_022775_2);

#define VkglTestCase_022776_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022776_2 "rogram_output.type.separable_geometry.array.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022776, VkglTestCase_022776_1, VkglTestCase_022776_2);

#define VkglTestCase_022777_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022777_2 "rogram_output.type.separable_geometry.array.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022777, VkglTestCase_022777_1, VkglTestCase_022777_2);

#define VkglTestCase_022778_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022778_2 "rogram_output.type.separable_geometry.array.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022778, VkglTestCase_022778_1, VkglTestCase_022778_2);

#define VkglTestCase_022779_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022779_2 "ogram_output.type.separable_geometry.array.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022779, VkglTestCase_022779_1, VkglTestCase_022779_2);

#define VkglTestCase_023371_1 "dEQP-GLES31.functional.program_interface_query.transfo"
#define VkglTestCase_023371_2 "rm_feedback_varying.type.separable_geometry.array.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023371, VkglTestCase_023371_1, VkglTestCase_023371_2);

#define VkglTestCase_023372_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023372_2 "orm_feedback_varying.type.separable_geometry.array.int"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023372, VkglTestCase_023372_1, VkglTestCase_023372_2);

#define VkglTestCase_023373_1 "dEQP-GLES31.functional.program_interface_query.transfo"
#define VkglTestCase_023373_2 "rm_feedback_varying.type.separable_geometry.array.uint"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023373, VkglTestCase_023373_1, VkglTestCase_023373_2);

#define VkglTestCase_023374_1 "dEQP-GLES31.functional.program_interface_query.transfo"
#define VkglTestCase_023374_2 "rm_feedback_varying.type.separable_geometry.array.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023374, VkglTestCase_023374_1, VkglTestCase_023374_2);

#define VkglTestCase_023375_1 "dEQP-GLES31.functional.program_interface_query.transfo"
#define VkglTestCase_023375_2 "rm_feedback_varying.type.separable_geometry.array.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023375, VkglTestCase_023375_1, VkglTestCase_023375_2);

#define VkglTestCase_023376_1 "dEQP-GLES31.functional.program_interface_query.transfo"
#define VkglTestCase_023376_2 "rm_feedback_varying.type.separable_geometry.array.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023376, VkglTestCase_023376_1, VkglTestCase_023376_2);

#define VkglTestCase_023377_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023377_2 "m_feedback_varying.type.separable_geometry.array.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023377, VkglTestCase_023377_1, VkglTestCase_023377_2);
