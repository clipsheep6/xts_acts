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

#define VkglTestCase_023120_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023120_2 "_feedback_varying.type.vertex_fragment.whole_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023120, VkglTestCase_023120_1, VkglTestCase_023120_2);

#define VkglTestCase_023121_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023121_2 "m_feedback_varying.type.vertex_fragment.whole_array.int"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023121, VkglTestCase_023121_1, VkglTestCase_023121_2);

#define VkglTestCase_023122_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023122_2 "m_feedback_varying.type.vertex_fragment.whole_array.uint"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023122, VkglTestCase_023122_1, VkglTestCase_023122_2);

#define VkglTestCase_023123_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023123_2 "m_feedback_varying.type.vertex_fragment.whole_array.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023123, VkglTestCase_023123_1, VkglTestCase_023123_2);

#define VkglTestCase_023124_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023124_2 "m_feedback_varying.type.vertex_fragment.whole_array.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023124, VkglTestCase_023124_1, VkglTestCase_023124_2);

#define VkglTestCase_023125_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023125_2 "m_feedback_varying.type.vertex_fragment.whole_array.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023125, VkglTestCase_023125_1, VkglTestCase_023125_2);

#define VkglTestCase_023126_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023126_2 "_feedback_varying.type.vertex_fragment.whole_array.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023126, VkglTestCase_023126_1, VkglTestCase_023126_2);

#define VkglTestCase_023127_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023127_2 "_feedback_varying.type.vertex_fragment.whole_array.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023127, VkglTestCase_023127_1, VkglTestCase_023127_2);

#define VkglTestCase_023128_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023128_2 "_feedback_varying.type.vertex_fragment.whole_array.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023128, VkglTestCase_023128_1, VkglTestCase_023128_2);

#define VkglTestCase_023129_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023129_2 "_feedback_varying.type.vertex_fragment.whole_array.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023129, VkglTestCase_023129_1, VkglTestCase_023129_2);

#define VkglTestCase_023130_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023130_2 "_feedback_varying.type.vertex_fragment.whole_array.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023130, VkglTestCase_023130_1, VkglTestCase_023130_2);

#define VkglTestCase_023131_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023131_2 "_feedback_varying.type.vertex_fragment.whole_array.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023131, VkglTestCase_023131_1, VkglTestCase_023131_2);

#define VkglTestCase_023132_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023132_2 "m_feedback_varying.type.vertex_fragment.whole_array.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023132, VkglTestCase_023132_1, VkglTestCase_023132_2);

#define VkglTestCase_023133_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023133_2 "_feedback_varying.type.vertex_fragment.whole_array.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023133, VkglTestCase_023133_1, VkglTestCase_023133_2);

#define VkglTestCase_023134_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023134_2 "_feedback_varying.type.vertex_fragment.whole_array.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023134, VkglTestCase_023134_1, VkglTestCase_023134_2);

#define VkglTestCase_023135_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023135_2 "_feedback_varying.type.vertex_fragment.whole_array.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023135, VkglTestCase_023135_1, VkglTestCase_023135_2);

#define VkglTestCase_023136_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023136_2 "m_feedback_varying.type.vertex_fragment.whole_array.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023136, VkglTestCase_023136_1, VkglTestCase_023136_2);

#define VkglTestCase_023137_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023137_2 "_feedback_varying.type.vertex_fragment.whole_array.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023137, VkglTestCase_023137_1, VkglTestCase_023137_2);

#define VkglTestCase_023138_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023138_2 "_feedback_varying.type.vertex_fragment.whole_array.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023138, VkglTestCase_023138_1, VkglTestCase_023138_2);

#define VkglTestCase_023139_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023139_2 "_feedback_varying.type.vertex_fragment.whole_array.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023139, VkglTestCase_023139_1, VkglTestCase_023139_2);

#define VkglTestCase_023140_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023140_2 "m_feedback_varying.type.vertex_fragment.whole_array.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023140, VkglTestCase_023140_1, VkglTestCase_023140_2);
