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

#define VkglTestCase_022780_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022780_2 "ogram_output.type.separable_geometry.struct.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022780, VkglTestCase_022780_1, VkglTestCase_022780_2);

#define VkglTestCase_022781_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022781_2 "rogram_output.type.separable_geometry.struct.int"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022781, VkglTestCase_022781_1, VkglTestCase_022781_2);

#define VkglTestCase_022782_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022782_2 "rogram_output.type.separable_geometry.struct.uint"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022782, VkglTestCase_022782_1, VkglTestCase_022782_2);

#define VkglTestCase_022783_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022783_2 "rogram_output.type.separable_geometry.struct.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022783, VkglTestCase_022783_1, VkglTestCase_022783_2);

#define VkglTestCase_022784_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022784_2 "ogram_output.type.separable_geometry.struct.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022784, VkglTestCase_022784_1, VkglTestCase_022784_2);

#define VkglTestCase_022785_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022785_2 "ogram_output.type.separable_geometry.struct.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022785, VkglTestCase_022785_1, VkglTestCase_022785_2);

#define VkglTestCase_022786_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022786_2 "ogram_output.type.separable_geometry.struct.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022786, VkglTestCase_022786_1, VkglTestCase_022786_2);

#define VkglTestCase_023385_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023385_2 "m_feedback_varying.type.separable_geometry.struct.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023385, VkglTestCase_023385_1, VkglTestCase_023385_2);

#define VkglTestCase_023386_1 "dEQP-GLES31.functional.program_interface_query.transfo"
#define VkglTestCase_023386_2 "rm_feedback_varying.type.separable_geometry.struct.int"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023386, VkglTestCase_023386_1, VkglTestCase_023386_2);

#define VkglTestCase_023387_1 "dEQP-GLES31.functional.program_interface_query.transfo"
#define VkglTestCase_023387_2 "rm_feedback_varying.type.separable_geometry.struct.uint"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023387, VkglTestCase_023387_1, VkglTestCase_023387_2);

#define VkglTestCase_023388_1 "dEQP-GLES31.functional.program_interface_query.transfo"
#define VkglTestCase_023388_2 "rm_feedback_varying.type.separable_geometry.struct.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023388, VkglTestCase_023388_1, VkglTestCase_023388_2);

#define VkglTestCase_023389_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023389_2 "m_feedback_varying.type.separable_geometry.struct.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023389, VkglTestCase_023389_1, VkglTestCase_023389_2);

#define VkglTestCase_023390_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023390_2 "m_feedback_varying.type.separable_geometry.struct.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023390, VkglTestCase_023390_1, VkglTestCase_023390_2);

#define VkglTestCase_023391_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023391_2 "m_feedback_varying.type.separable_geometry.struct.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023391, VkglTestCase_023391_1, VkglTestCase_023391_2);
