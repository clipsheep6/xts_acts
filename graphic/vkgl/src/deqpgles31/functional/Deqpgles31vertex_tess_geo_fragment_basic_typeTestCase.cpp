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

#define VkglTestCase_023221_1 "dEQP-GLES31.functional.program_interface_query.transform_fee"
#define VkglTestCase_023221_2 "dback_varying.type.vertex_tess_geo_fragment.basic_type.float"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023221, VkglTestCase_023221_1, VkglTestCase_023221_2);

#define VkglTestCase_023222_1 "dEQP-GLES31.functional.program_interface_query.transform_fe"
#define VkglTestCase_023222_2 "edback_varying.type.vertex_tess_geo_fragment.basic_type.int"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023222, VkglTestCase_023222_1, VkglTestCase_023222_2);

#define VkglTestCase_023223_1 "dEQP-GLES31.functional.program_interface_query.transform_fe"
#define VkglTestCase_023223_2 "edback_varying.type.vertex_tess_geo_fragment.basic_type.uint"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023223, VkglTestCase_023223_1, VkglTestCase_023223_2);

#define VkglTestCase_023224_1 "dEQP-GLES31.functional.program_interface_query.transform_fe"
#define VkglTestCase_023224_2 "edback_varying.type.vertex_tess_geo_fragment.basic_type.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023224, VkglTestCase_023224_1, VkglTestCase_023224_2);

#define VkglTestCase_023225_1 "dEQP-GLES31.functional.program_interface_query.transform_fee"
#define VkglTestCase_023225_2 "dback_varying.type.vertex_tess_geo_fragment.basic_type.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023225, VkglTestCase_023225_1, VkglTestCase_023225_2);

#define VkglTestCase_023226_1 "dEQP-GLES31.functional.program_interface_query.transform_fee"
#define VkglTestCase_023226_2 "dback_varying.type.vertex_tess_geo_fragment.basic_type.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023226, VkglTestCase_023226_1, VkglTestCase_023226_2);

#define VkglTestCase_023227_1 "dEQP-GLES31.functional.program_interface_query.transform_fee"
#define VkglTestCase_023227_2 "dback_varying.type.vertex_tess_geo_fragment.basic_type.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023227, VkglTestCase_023227_1, VkglTestCase_023227_2);
