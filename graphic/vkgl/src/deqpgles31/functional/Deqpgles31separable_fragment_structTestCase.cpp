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

#define VkglTestCase_022040_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022040_2 "rogram_input.type.separable_fragment.struct.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022040, VkglTestCase_022040_1, VkglTestCase_022040_2);

#define VkglTestCase_022041_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_022041_2 "program_input.type.separable_fragment.struct.int"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022041, VkglTestCase_022041_1, VkglTestCase_022041_2);

#define VkglTestCase_022042_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022042_2 "rogram_input.type.separable_fragment.struct.uint"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022042, VkglTestCase_022042_1, VkglTestCase_022042_2);

#define VkglTestCase_022043_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022043_2 "rogram_input.type.separable_fragment.struct.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022043, VkglTestCase_022043_1, VkglTestCase_022043_2);

#define VkglTestCase_022044_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022044_2 "rogram_input.type.separable_fragment.struct.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022044, VkglTestCase_022044_1, VkglTestCase_022044_2);

#define VkglTestCase_022045_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022045_2 "rogram_input.type.separable_fragment.struct.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022045, VkglTestCase_022045_1, VkglTestCase_022045_2);

#define VkglTestCase_022046_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022046_2 "rogram_input.type.separable_fragment.struct.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022046, VkglTestCase_022046_1, VkglTestCase_022046_2);

#define VkglTestCase_022047_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022047_2 "rogram_input.type.separable_fragment.struct.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022047, VkglTestCase_022047_1, VkglTestCase_022047_2);

#define VkglTestCase_022048_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022048_2 "rogram_input.type.separable_fragment.struct.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022048, VkglTestCase_022048_1, VkglTestCase_022048_2);

#define VkglTestCase_022049_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022049_2 "rogram_input.type.separable_fragment.struct.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022049, VkglTestCase_022049_1, VkglTestCase_022049_2);

#define VkglTestCase_022050_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022050_2 "rogram_input.type.separable_fragment.struct.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022050, VkglTestCase_022050_1, VkglTestCase_022050_2);

#define VkglTestCase_022051_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022051_2 "rogram_input.type.separable_fragment.struct.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022051, VkglTestCase_022051_1, VkglTestCase_022051_2);

#define VkglTestCase_022052_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022052_2 "rogram_input.type.separable_fragment.struct.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022052, VkglTestCase_022052_1, VkglTestCase_022052_2);

#define VkglTestCase_022053_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022053_2 "ogram_input.type.separable_fragment.struct.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022053, VkglTestCase_022053_1, VkglTestCase_022053_2);

#define VkglTestCase_022054_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022054_2 "ogram_input.type.separable_fragment.struct.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022054, VkglTestCase_022054_1, VkglTestCase_022054_2);

#define VkglTestCase_022055_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022055_2 "ogram_input.type.separable_fragment.struct.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022055, VkglTestCase_022055_1, VkglTestCase_022055_2);

#define VkglTestCase_022056_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022056_2 "rogram_input.type.separable_fragment.struct.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022056, VkglTestCase_022056_1, VkglTestCase_022056_2);

#define VkglTestCase_022057_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022057_2 "ogram_input.type.separable_fragment.struct.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022057, VkglTestCase_022057_1, VkglTestCase_022057_2);

#define VkglTestCase_022058_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022058_2 "ogram_input.type.separable_fragment.struct.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022058, VkglTestCase_022058_1, VkglTestCase_022058_2);

#define VkglTestCase_022059_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022059_2 "ogram_input.type.separable_fragment.struct.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022059, VkglTestCase_022059_1, VkglTestCase_022059_2);

#define VkglTestCase_022060_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022060_2 "rogram_input.type.separable_fragment.struct.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022060, VkglTestCase_022060_1, VkglTestCase_022060_2);
