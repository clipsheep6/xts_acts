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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30019TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_018063_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018063_2 "unctions.common.floor.float_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018063, VkglTestCase_018063_1, VkglTestCase_018063_2);

#define VkglTestCase_018064_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018064_2 "nctions.common.floor.float_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018064, VkglTestCase_018064_1, VkglTestCase_018064_2);

#define VkglTestCase_018065_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018065_2 "nctions.common.floor.float_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018065, VkglTestCase_018065_1, VkglTestCase_018065_2);

#define VkglTestCase_018066_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018066_2 "ctions.common.floor.float_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018066, VkglTestCase_018066_1, VkglTestCase_018066_2);

#define VkglTestCase_018067_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018067_2 "unctions.common.floor.float_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018067, VkglTestCase_018067_1, VkglTestCase_018067_2);

#define VkglTestCase_018068_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018068_2 "nctions.common.floor.float_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018068, VkglTestCase_018068_1, VkglTestCase_018068_2);

#define VkglTestCase_018069_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018069_2 "functions.common.floor.vec2_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018069, VkglTestCase_018069_1, VkglTestCase_018069_2);

#define VkglTestCase_018070_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018070_2 "unctions.common.floor.vec2_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018070, VkglTestCase_018070_1, VkglTestCase_018070_2);

#define VkglTestCase_018071_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018071_2 "nctions.common.floor.vec2_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018071, VkglTestCase_018071_1, VkglTestCase_018071_2);

#define VkglTestCase_018072_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018072_2 "ctions.common.floor.vec2_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018072, VkglTestCase_018072_1, VkglTestCase_018072_2);

#define VkglTestCase_018073_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018073_2 "unctions.common.floor.vec2_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018073, VkglTestCase_018073_1, VkglTestCase_018073_2);

#define VkglTestCase_018074_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018074_2 "nctions.common.floor.vec2_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018074, VkglTestCase_018074_1, VkglTestCase_018074_2);

#define VkglTestCase_018075_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018075_2 "functions.common.floor.vec3_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018075, VkglTestCase_018075_1, VkglTestCase_018075_2);

#define VkglTestCase_018076_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018076_2 "unctions.common.floor.vec3_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018076, VkglTestCase_018076_1, VkglTestCase_018076_2);

#define VkglTestCase_018077_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018077_2 "nctions.common.floor.vec3_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018077, VkglTestCase_018077_1, VkglTestCase_018077_2);

#define VkglTestCase_018078_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018078_2 "ctions.common.floor.vec3_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018078, VkglTestCase_018078_1, VkglTestCase_018078_2);

#define VkglTestCase_018079_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018079_2 "unctions.common.floor.vec3_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018079, VkglTestCase_018079_1, VkglTestCase_018079_2);

#define VkglTestCase_018080_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018080_2 "nctions.common.floor.vec3_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018080, VkglTestCase_018080_1, VkglTestCase_018080_2);

#define VkglTestCase_018081_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018081_2 "functions.common.floor.vec4_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018081, VkglTestCase_018081_1, VkglTestCase_018081_2);

#define VkglTestCase_018082_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018082_2 "unctions.common.floor.vec4_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018082, VkglTestCase_018082_1, VkglTestCase_018082_2);

#define VkglTestCase_018083_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018083_2 "nctions.common.floor.vec4_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018083, VkglTestCase_018083_1, VkglTestCase_018083_2);

#define VkglTestCase_018084_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018084_2 "ctions.common.floor.vec4_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018084, VkglTestCase_018084_1, VkglTestCase_018084_2);

#define VkglTestCase_018085_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018085_2 "unctions.common.floor.vec4_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018085, VkglTestCase_018085_1, VkglTestCase_018085_2);

#define VkglTestCase_018086_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018086_2 "nctions.common.floor.vec4_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018086, VkglTestCase_018086_1, VkglTestCase_018086_2);
