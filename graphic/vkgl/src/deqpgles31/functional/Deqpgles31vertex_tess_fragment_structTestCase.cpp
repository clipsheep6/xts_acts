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

#define VkglTestCase_023184_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023184_2 "_feedback_varying.type.vertex_tess_fragment.struct.float"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023184, VkglTestCase_023184_1, VkglTestCase_023184_2);

#define VkglTestCase_023185_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023185_2 "m_feedback_varying.type.vertex_tess_fragment.struct.int"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023185, VkglTestCase_023185_1, VkglTestCase_023185_2);

#define VkglTestCase_023186_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023186_2 "m_feedback_varying.type.vertex_tess_fragment.struct.uint"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023186, VkglTestCase_023186_1, VkglTestCase_023186_2);

#define VkglTestCase_023187_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023187_2 "m_feedback_varying.type.vertex_tess_fragment.struct.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023187, VkglTestCase_023187_1, VkglTestCase_023187_2);

#define VkglTestCase_023188_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023188_2 "_feedback_varying.type.vertex_tess_fragment.struct.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023188, VkglTestCase_023188_1, VkglTestCase_023188_2);

#define VkglTestCase_023189_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023189_2 "_feedback_varying.type.vertex_tess_fragment.struct.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023189, VkglTestCase_023189_1, VkglTestCase_023189_2);

#define VkglTestCase_023190_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023190_2 "_feedback_varying.type.vertex_tess_fragment.struct.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023190, VkglTestCase_023190_1, VkglTestCase_023190_2);
