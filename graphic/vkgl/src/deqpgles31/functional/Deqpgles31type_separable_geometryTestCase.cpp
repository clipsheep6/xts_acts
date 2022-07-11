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

#define VkglTestCase_022124_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_022124_2 "y.program_input.type.separable_geometry.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022124, VkglTestCase_022124_1, VkglTestCase_022124_2);

#define VkglTestCase_022125_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_022125_2 "ry.program_input.type.separable_geometry.int"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022125, VkglTestCase_022125_1, VkglTestCase_022125_2);

#define VkglTestCase_022126_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_022126_2 "ry.program_input.type.separable_geometry.uint"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022126, VkglTestCase_022126_1, VkglTestCase_022126_2);

#define VkglTestCase_022127_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_022127_2 "ry.program_input.type.separable_geometry.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022127, VkglTestCase_022127_1, VkglTestCase_022127_2);

#define VkglTestCase_022128_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_022128_2 "ry.program_input.type.separable_geometry.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022128, VkglTestCase_022128_1, VkglTestCase_022128_2);

#define VkglTestCase_022129_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_022129_2 "ry.program_input.type.separable_geometry.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022129, VkglTestCase_022129_1, VkglTestCase_022129_2);

#define VkglTestCase_022130_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_022130_2 "y.program_input.type.separable_geometry.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022130, VkglTestCase_022130_1, VkglTestCase_022130_2);

#define VkglTestCase_022131_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_022131_2 "y.program_input.type.separable_geometry.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022131, VkglTestCase_022131_1, VkglTestCase_022131_2);

#define VkglTestCase_022132_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_022132_2 "y.program_input.type.separable_geometry.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022132, VkglTestCase_022132_1, VkglTestCase_022132_2);

#define VkglTestCase_022133_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_022133_2 "y.program_input.type.separable_geometry.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022133, VkglTestCase_022133_1, VkglTestCase_022133_2);

#define VkglTestCase_022134_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_022134_2 "y.program_input.type.separable_geometry.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022134, VkglTestCase_022134_1, VkglTestCase_022134_2);

#define VkglTestCase_022135_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_022135_2 "y.program_input.type.separable_geometry.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022135, VkglTestCase_022135_1, VkglTestCase_022135_2);

#define VkglTestCase_022136_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_022136_2 "ry.program_input.type.separable_geometry.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022136, VkglTestCase_022136_1, VkglTestCase_022136_2);

#define VkglTestCase_022137_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_022137_2 "y.program_input.type.separable_geometry.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022137, VkglTestCase_022137_1, VkglTestCase_022137_2);

#define VkglTestCase_022138_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_022138_2 "y.program_input.type.separable_geometry.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022138, VkglTestCase_022138_1, VkglTestCase_022138_2);

#define VkglTestCase_022139_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_022139_2 "y.program_input.type.separable_geometry.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022139, VkglTestCase_022139_1, VkglTestCase_022139_2);

#define VkglTestCase_022140_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_022140_2 "ry.program_input.type.separable_geometry.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022140, VkglTestCase_022140_1, VkglTestCase_022140_2);

#define VkglTestCase_022141_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_022141_2 "y.program_input.type.separable_geometry.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022141, VkglTestCase_022141_1, VkglTestCase_022141_2);

#define VkglTestCase_022142_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_022142_2 "y.program_input.type.separable_geometry.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022142, VkglTestCase_022142_1, VkglTestCase_022142_2);

#define VkglTestCase_022143_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_022143_2 "y.program_input.type.separable_geometry.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022143, VkglTestCase_022143_1, VkglTestCase_022143_2);

#define VkglTestCase_022144_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_022144_2 "ry.program_input.type.separable_geometry.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022144, VkglTestCase_022144_1, VkglTestCase_022144_2);
