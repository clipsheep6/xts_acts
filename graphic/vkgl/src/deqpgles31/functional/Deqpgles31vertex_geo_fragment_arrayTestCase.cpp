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

#define VkglTestCase_023199_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023199_2 "m_feedback_varying.type.vertex_geo_fragment.array.float"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023199, VkglTestCase_023199_1, VkglTestCase_023199_2);

#define VkglTestCase_023200_1 "dEQP-GLES31.functional.program_interface_query.transfo"
#define VkglTestCase_023200_2 "rm_feedback_varying.type.vertex_geo_fragment.array.int"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023200, VkglTestCase_023200_1, VkglTestCase_023200_2);

#define VkglTestCase_023201_1 "dEQP-GLES31.functional.program_interface_query.transfo"
#define VkglTestCase_023201_2 "rm_feedback_varying.type.vertex_geo_fragment.array.uint"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023201, VkglTestCase_023201_1, VkglTestCase_023201_2);

#define VkglTestCase_023202_1 "dEQP-GLES31.functional.program_interface_query.transfo"
#define VkglTestCase_023202_2 "rm_feedback_varying.type.vertex_geo_fragment.array.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023202, VkglTestCase_023202_1, VkglTestCase_023202_2);

#define VkglTestCase_023203_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023203_2 "m_feedback_varying.type.vertex_geo_fragment.array.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023203, VkglTestCase_023203_1, VkglTestCase_023203_2);

#define VkglTestCase_023204_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023204_2 "m_feedback_varying.type.vertex_geo_fragment.array.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023204, VkglTestCase_023204_1, VkglTestCase_023204_2);

#define VkglTestCase_023205_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023205_2 "m_feedback_varying.type.vertex_geo_fragment.array.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023205, VkglTestCase_023205_1, VkglTestCase_023205_2);
