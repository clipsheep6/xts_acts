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

#define VkglTestCase_023213_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023213_2 "m_feedback_varying.type.vertex_geo_fragment.struct.float"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023213, VkglTestCase_023213_1, VkglTestCase_023213_2);

#define VkglTestCase_023214_1 "dEQP-GLES31.functional.program_interface_query.transfo"
#define VkglTestCase_023214_2 "rm_feedback_varying.type.vertex_geo_fragment.struct.int"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023214, VkglTestCase_023214_1, VkglTestCase_023214_2);

#define VkglTestCase_023215_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023215_2 "m_feedback_varying.type.vertex_geo_fragment.struct.uint"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023215, VkglTestCase_023215_1, VkglTestCase_023215_2);

#define VkglTestCase_023216_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023216_2 "m_feedback_varying.type.vertex_geo_fragment.struct.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023216, VkglTestCase_023216_1, VkglTestCase_023216_2);

#define VkglTestCase_023217_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023217_2 "m_feedback_varying.type.vertex_geo_fragment.struct.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023217, VkglTestCase_023217_1, VkglTestCase_023217_2);

#define VkglTestCase_023218_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023218_2 "m_feedback_varying.type.vertex_geo_fragment.struct.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023218, VkglTestCase_023218_1, VkglTestCase_023218_2);

#define VkglTestCase_023219_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023219_2 "_feedback_varying.type.vertex_geo_fragment.struct.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023219, VkglTestCase_023219_1, VkglTestCase_023219_2);
