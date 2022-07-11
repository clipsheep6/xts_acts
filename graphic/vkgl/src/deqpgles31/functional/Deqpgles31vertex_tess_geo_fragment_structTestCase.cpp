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

#define VkglTestCase_023242_1 "dEQP-GLES31.functional.program_interface_query.transform_f"
#define VkglTestCase_023242_2 "eedback_varying.type.vertex_tess_geo_fragment.struct.float"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023242, VkglTestCase_023242_1, VkglTestCase_023242_2);

#define VkglTestCase_023243_1 "dEQP-GLES31.functional.program_interface_query.transform_"
#define VkglTestCase_023243_2 "feedback_varying.type.vertex_tess_geo_fragment.struct.int"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023243, VkglTestCase_023243_1, VkglTestCase_023243_2);

#define VkglTestCase_023244_1 "dEQP-GLES31.functional.program_interface_query.transform_"
#define VkglTestCase_023244_2 "feedback_varying.type.vertex_tess_geo_fragment.struct.uint"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023244, VkglTestCase_023244_1, VkglTestCase_023244_2);

#define VkglTestCase_023245_1 "dEQP-GLES31.functional.program_interface_query.transform_"
#define VkglTestCase_023245_2 "feedback_varying.type.vertex_tess_geo_fragment.struct.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023245, VkglTestCase_023245_1, VkglTestCase_023245_2);

#define VkglTestCase_023246_1 "dEQP-GLES31.functional.program_interface_query.transform_f"
#define VkglTestCase_023246_2 "eedback_varying.type.vertex_tess_geo_fragment.struct.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023246, VkglTestCase_023246_1, VkglTestCase_023246_2);

#define VkglTestCase_023247_1 "dEQP-GLES31.functional.program_interface_query.transform_f"
#define VkglTestCase_023247_2 "eedback_varying.type.vertex_tess_geo_fragment.struct.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023247, VkglTestCase_023247_1, VkglTestCase_023247_2);

#define VkglTestCase_023248_1 "dEQP-GLES31.functional.program_interface_query.transform_f"
#define VkglTestCase_023248_2 "eedback_varying.type.vertex_tess_geo_fragment.struct.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023248, VkglTestCase_023248_1, VkglTestCase_023248_2);
