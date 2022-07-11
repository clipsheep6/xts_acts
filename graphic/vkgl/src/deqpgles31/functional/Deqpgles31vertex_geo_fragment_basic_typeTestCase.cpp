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

#define VkglTestCase_023192_1 "dEQP-GLES31.functional.program_interface_query.transform_"
#define VkglTestCase_023192_2 "feedback_varying.type.vertex_geo_fragment.basic_type.float"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023192, VkglTestCase_023192_1, VkglTestCase_023192_2);

#define VkglTestCase_023193_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023193_2 "_feedback_varying.type.vertex_geo_fragment.basic_type.int"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023193, VkglTestCase_023193_1, VkglTestCase_023193_2);

#define VkglTestCase_023194_1 "dEQP-GLES31.functional.program_interface_query.transform_"
#define VkglTestCase_023194_2 "feedback_varying.type.vertex_geo_fragment.basic_type.uint"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023194, VkglTestCase_023194_1, VkglTestCase_023194_2);

#define VkglTestCase_023195_1 "dEQP-GLES31.functional.program_interface_query.transform_"
#define VkglTestCase_023195_2 "feedback_varying.type.vertex_geo_fragment.basic_type.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023195, VkglTestCase_023195_1, VkglTestCase_023195_2);

#define VkglTestCase_023196_1 "dEQP-GLES31.functional.program_interface_query.transform_"
#define VkglTestCase_023196_2 "feedback_varying.type.vertex_geo_fragment.basic_type.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023196, VkglTestCase_023196_1, VkglTestCase_023196_2);

#define VkglTestCase_023197_1 "dEQP-GLES31.functional.program_interface_query.transform_"
#define VkglTestCase_023197_2 "feedback_varying.type.vertex_geo_fragment.basic_type.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023197, VkglTestCase_023197_1, VkglTestCase_023197_2);

#define VkglTestCase_023198_1 "dEQP-GLES31.functional.program_interface_query.transform_f"
#define VkglTestCase_023198_2 "eedback_varying.type.vertex_geo_fragment.basic_type.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023198, VkglTestCase_023198_1, VkglTestCase_023198_2);
