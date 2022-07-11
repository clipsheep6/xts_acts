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

#define VkglTestCase_022061_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_022061_2 "y.program_input.type.separable_tess_ctrl.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022061, VkglTestCase_022061_1, VkglTestCase_022061_2);

#define VkglTestCase_022062_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_022062_2 "ry.program_input.type.separable_tess_ctrl.int"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022062, VkglTestCase_022062_1, VkglTestCase_022062_2);

#define VkglTestCase_022063_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_022063_2 "y.program_input.type.separable_tess_ctrl.uint"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022063, VkglTestCase_022063_1, VkglTestCase_022063_2);

#define VkglTestCase_022064_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_022064_2 "y.program_input.type.separable_tess_ctrl.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022064, VkglTestCase_022064_1, VkglTestCase_022064_2);

#define VkglTestCase_022065_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_022065_2 "y.program_input.type.separable_tess_ctrl.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022065, VkglTestCase_022065_1, VkglTestCase_022065_2);

#define VkglTestCase_022066_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_022066_2 "y.program_input.type.separable_tess_ctrl.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022066, VkglTestCase_022066_1, VkglTestCase_022066_2);

#define VkglTestCase_022067_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_022067_2 "y.program_input.type.separable_tess_ctrl.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022067, VkglTestCase_022067_1, VkglTestCase_022067_2);

#define VkglTestCase_022068_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_022068_2 "y.program_input.type.separable_tess_ctrl.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022068, VkglTestCase_022068_1, VkglTestCase_022068_2);

#define VkglTestCase_022069_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_022069_2 "y.program_input.type.separable_tess_ctrl.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022069, VkglTestCase_022069_1, VkglTestCase_022069_2);

#define VkglTestCase_022070_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_022070_2 "y.program_input.type.separable_tess_ctrl.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022070, VkglTestCase_022070_1, VkglTestCase_022070_2);

#define VkglTestCase_022071_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_022071_2 "y.program_input.type.separable_tess_ctrl.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022071, VkglTestCase_022071_1, VkglTestCase_022071_2);

#define VkglTestCase_022072_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_022072_2 "y.program_input.type.separable_tess_ctrl.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022072, VkglTestCase_022072_1, VkglTestCase_022072_2);

#define VkglTestCase_022073_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_022073_2 "y.program_input.type.separable_tess_ctrl.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022073, VkglTestCase_022073_1, VkglTestCase_022073_2);

#define VkglTestCase_022074_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_022074_2 ".program_input.type.separable_tess_ctrl.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022074, VkglTestCase_022074_1, VkglTestCase_022074_2);

#define VkglTestCase_022075_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_022075_2 ".program_input.type.separable_tess_ctrl.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022075, VkglTestCase_022075_1, VkglTestCase_022075_2);

#define VkglTestCase_022076_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_022076_2 ".program_input.type.separable_tess_ctrl.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022076, VkglTestCase_022076_1, VkglTestCase_022076_2);

#define VkglTestCase_022077_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_022077_2 "y.program_input.type.separable_tess_ctrl.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022077, VkglTestCase_022077_1, VkglTestCase_022077_2);

#define VkglTestCase_022078_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_022078_2 ".program_input.type.separable_tess_ctrl.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022078, VkglTestCase_022078_1, VkglTestCase_022078_2);

#define VkglTestCase_022079_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_022079_2 ".program_input.type.separable_tess_ctrl.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022079, VkglTestCase_022079_1, VkglTestCase_022079_2);

#define VkglTestCase_022080_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_022080_2 ".program_input.type.separable_tess_ctrl.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022080, VkglTestCase_022080_1, VkglTestCase_022080_2);

#define VkglTestCase_022081_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_022081_2 "y.program_input.type.separable_tess_ctrl.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022081, VkglTestCase_022081_1, VkglTestCase_022081_2);
