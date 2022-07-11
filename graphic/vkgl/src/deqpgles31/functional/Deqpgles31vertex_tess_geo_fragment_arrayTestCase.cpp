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

#define VkglTestCase_023228_1 "dEQP-GLES31.functional.program_interface_query.transform_"
#define VkglTestCase_023228_2 "feedback_varying.type.vertex_tess_geo_fragment.array.float"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023228, VkglTestCase_023228_1, VkglTestCase_023228_2);

#define VkglTestCase_023229_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023229_2 "_feedback_varying.type.vertex_tess_geo_fragment.array.int"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023229, VkglTestCase_023229_1, VkglTestCase_023229_2);

#define VkglTestCase_023230_1 "dEQP-GLES31.functional.program_interface_query.transform_"
#define VkglTestCase_023230_2 "feedback_varying.type.vertex_tess_geo_fragment.array.uint"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023230, VkglTestCase_023230_1, VkglTestCase_023230_2);

#define VkglTestCase_023231_1 "dEQP-GLES31.functional.program_interface_query.transform_"
#define VkglTestCase_023231_2 "feedback_varying.type.vertex_tess_geo_fragment.array.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023231, VkglTestCase_023231_1, VkglTestCase_023231_2);

#define VkglTestCase_023232_1 "dEQP-GLES31.functional.program_interface_query.transform_"
#define VkglTestCase_023232_2 "feedback_varying.type.vertex_tess_geo_fragment.array.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023232, VkglTestCase_023232_1, VkglTestCase_023232_2);

#define VkglTestCase_023233_1 "dEQP-GLES31.functional.program_interface_query.transform_"
#define VkglTestCase_023233_2 "feedback_varying.type.vertex_tess_geo_fragment.array.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023233, VkglTestCase_023233_1, VkglTestCase_023233_2);

#define VkglTestCase_023234_1 "dEQP-GLES31.functional.program_interface_query.transform_f"
#define VkglTestCase_023234_2 "eedback_varying.type.vertex_tess_geo_fragment.array.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023234, VkglTestCase_023234_1, VkglTestCase_023234_2);
